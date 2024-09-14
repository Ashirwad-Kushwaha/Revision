#include<iostream>

using namespace std;

int main(){
    int arr[]={6, 1, 2, 9, 5};
    

    int l=sizeof(arr)/sizeof(arr[0]);
    cout<<l<<endl;

    for(int k=0;k<l;k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;

    for(int i=0;i<l-1;i++){
        int min=i;
        for(int j=i+1;j<l;j++){
            if(arr[j]<arr[min]) min=j;
        }
        cout<<min<<endl;
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;

        for(int k=0;k<l;k++){
            cout<<arr[k]<<" ";
        }
            cout<<endl;
    }
}