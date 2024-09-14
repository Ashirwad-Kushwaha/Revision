#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int ans=n;
    int rem;
    int sum=0;
    while(ans>0){
        rem=ans%10;
        cout<<rem<<endl;
        double power = pow(rem, 4);
        sum=sum+power;
        ans=ans/10;
    }
    cout<<sum;
}

