#include<stdio.h>
#include<stdlib.h>
#include<time.h>


bool prime(int x, int divisor = 2){
    bool result;

    if ((x==1) || (x==2) || (divisor == (x / 2))){
        return true;
    }else{
        if ((x % divisor == 0)){
            return false;
        }else{
            result = prime(x,divisor+1);
            return result;
        }
    }
    return result;

}

int* create_prime_dynamic_array(int* arr,int arr_size, int i = 0, int prime_counter = 0){

    int* ptr = NULL;
    bool answer;

    if (i == arr_size){
        ptr = (int*)calloc(prime_counter,sizeof(int));
        return ptr;
    }else{
        answer = prime(*(arr + i));

        if(answer){
            prime_counter++;
        }
        ptr = create_prime_dynamic_array(arr, arr_size, i+1, prime_counter)
    }

}


int main(){
    int num;
    int* prime_ptr = NULL;
    int arr[100];
    
    srand(time(NULL));
    num = rand() % 1024 + 512;
    
    prime_ptr = create_prime_dynamic_array(arr, 100);

    if (prime_ptr){
        printf("The number %d is prime",num);
    }else{
        printf("The number %d is not prime",num);
    }
    return 0;
}