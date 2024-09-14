#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int x=0, y=1;
    int sum=0;
    if(n==1) cout<<1;
    while(n>1){
        sum=x+y;
        x=y;
        y=sum;
        n--;
    }
    cout<<sum;
}