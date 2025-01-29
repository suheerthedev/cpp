#include<iostream>
using namespace std;

//Test Cases:
//Random Order
//Already Sorted
//Reverse Order
//All Elements Same
//Includes Negative Numbers
//Single Element
//Empty Array
// With Duplicate Elements
// Mixture of Positive & Negative
// Large Numbers
// With two elements
// All same elements except for one element


int main(){
    int size = 1;
    int arr[size] = {42};
    bool isSorted = false;

    while (isSorted == false)
    {
        int max = arr[0];
        int min = arr[0];

        for(int i = 0 ; i < size; i++){

            if(max < arr[i]){
                max = arr[i];
            }

            if(min > arr[i]){
                min = arr[i];
            }

            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
            if(arr[0] == min && arr[0] < max){
                isSorted = true;
            }
        }
        cout<<"runnning"<<endl;
    }
        

    for(int i = 0 ; i < size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}