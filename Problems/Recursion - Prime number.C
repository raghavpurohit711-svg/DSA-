#include<stdio.h>
#include<stdlib.h>
#include<time.h>

bool prime(int x, int divisor = 2){
    bool result;

    if ((x==1) || (x==2) || (divisor == (x - 1))){
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




int main(){
    int num;
    bool result;

    srand(time(NULL));
    num = rand() % 1024 + 512;
    
    result = prime(num);

    if (result){
        printf("The number %d is prime",num);
    }else{
        printf("The number %d is not prime",num);
    }
    return 0;
}