#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int arr[10], sorted[10];
    int i, num, counter = 0;
    
    srand(time(NULL));
    for (i = 0;i<10;i++){
        num =rand() % 100+11;

        if (num % 2==0){
            arr[i]=num;
        }else{
            arr[i]=0;
        }
        sorted[i]=0;
    }
    for(i=0;i<10;i++){
        if(arr[i]!=0){
            sorted[counter]=arr[i];
            counter++;
        }
    }
    
    for (int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    printf("\n\n");
    printf("Sorted Array:\n");
    for (i = 0;i<10;i++){
        printf("%d ",sorted[i]);
    }
}