#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    cout<<"enter key to find"<<endl;
    int key;
    cin>>key;
    int flag=0;
    for(int i=0;i<size;i++){
        if (key==arr[i])
        {
            cout<<"found at"<<arr[i]<<endl;
            flag=1;
            break;
        }
        
    }
    if(flag=1){
        cout<<"key is present"<<endl;

    }
    else
    cout<<"key is not present";
}