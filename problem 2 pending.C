#include<stdio.h>
#include<stdlib.h>
#define N 10
int main(){
    int arr[N];
    int i,j;
    int arr_sum=0;
    int rand_pos;
    int series_sum =N*(N+1)/2;
    
    rand_pos=rand()%N;

    for (i=0;i<rand_pos;i++){
        arr[i] = i;
    }
    for(j=i;j<N;j++){
        arr[j] = rand_pos+1;
        rand_pos++;
    }

    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }

    for(i=0;i<N;i++){
        arr_sum += arr[i];
    }

    printf("\n\n");
    printf("\n%d",series_sum - arr_sum);

    return 0;
}