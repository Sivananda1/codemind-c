#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a=0,b=1;
    cin>>n;
    int c=0;
    if (a==n or b==n) cout<<"True";
    else{
    while (c<n){
        c=a+b;
        a=b;
        b=c;
    }
    if (c==n) cout<<"True";
    else cout<<"False";
    }
    
}