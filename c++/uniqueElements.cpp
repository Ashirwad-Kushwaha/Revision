#include<iostream>

using namespace std;

int main(){
    int arr1[]={1, 2, 9};
    int arr2[]={1, 3, 4, 5, 8};

    int l1 = sizeof(arr1)/sizeof(arr1[0]);
    int l2 = sizeof(arr2)/sizeof(arr2[0]);

    int j=0, k=0;
    while(j<l1 && k<l2){
        if(arr1[j]<arr2[k]){
            cout<<arr1[j]<<" ";
            j++;
        }
        else if(arr2[k]<arr1[j]){
            cout<<arr2[k]<<" ";
            k++;
        }
        else{
            j++;
            k++;
        }
    }

    while(j<l1){
        cout<<arr1[j]<<" ";
        j++;
    }

    while(k<l2){
        cout<<arr2[k]<<" ";
        k++;
    }
   
}