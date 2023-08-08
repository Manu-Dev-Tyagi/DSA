#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int max=INT_MIN;
    //int min =INT_MAX
    for(int i=0;i<size;i++){
        if(arr[i]>INT_MIN){
            max=arr[i];
        }
    }
    cout<<max<<endl;
    return 0;
}