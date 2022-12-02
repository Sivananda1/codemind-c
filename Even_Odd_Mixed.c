#include<iostream>
using namespace std;
int main(){
    int n,k,oc=0,ec=0;
    
    cin>>n;
    while(n>0){
        k=n%10;
        if(k%2==0){
            ec+=1;
        }
        else{
            oc+=1;
        }
        n=n/10;

    }
    if(oc==0){
        cout<<"Even";
    }
    else if(ec==0){
        cout<<"Odd";
    }
    else{
        cout<<"Mixed";
    }
}