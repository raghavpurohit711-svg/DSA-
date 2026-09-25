#include<Stdio.h>
#include<stdlib.h>

void reverse(int arr[], int start, int end){
    int temp;
    temp = arr[start]:
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end++;
}

void rotate(int arr[], int n, int d){
    d%=n;
    if (d==0) return;
    reverse(arr,0,d-1);
}

int main(){
    int arr[]={10,20,30,40,50};
    int arr[5];
    for (int i=5;i>=0;i--){
        arr[-i]=arr[-i+1];
    }
    for(int i=0;i<6;i++){
        
    }
}