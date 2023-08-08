#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int end=5;
    for(int i=0;i<size/2;i++){
        int temp;
        temp=arr[i];
        arr[i]=arr[end-1];
        arr[end-1]=temp;
        end--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}