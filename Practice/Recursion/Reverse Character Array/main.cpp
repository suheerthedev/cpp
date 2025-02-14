#include<iostream>
#include<cstring>
using namespace std;

char* revChar(char arr[],char* start,char* end, int size){
    if(start >= end){
        return arr;
    }
    char temp = *start;
    *start = *end;
    *end = temp;

    return revChar(arr,start+1,end-1, size);
}

int main(){
    char arr[] = {"Suheer"};
    int size = strlen(arr);
    char* start = arr;
    char* end = arr;
    end += size - 1;

    
    cout<<revChar(arr,start,end,size);


    return 0 ;
}