#include<iostream>
using namespace std;


int main(){
    int arr[]={5, 9, 4, 3, 1, 2, 7, 8};

    int l=sizeof(arr)/sizeof(arr[0]);

    for(int i=l-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
        }
    }
    for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }
}