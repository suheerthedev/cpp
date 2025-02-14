#include<iostream>
using namespace std;

int sumOfArray(int arr[],int size, int i = 0){
    if(i == size){
        return 0;
    }

    return arr[i] + sumOfArray(arr, size, i+1);
}

int sumArr(int arr[], int size){
    if(size == 0){
        return 0;
    }
    return arr[size-1]+ sumArr(arr,size-1);
}

int main(){
    int size = 4;
    int arr[size] = {1,2,3,4};

    cout<<sumArr(arr,size);

    return 0;
}