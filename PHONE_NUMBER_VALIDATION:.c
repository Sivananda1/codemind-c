#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d,s=0,cnt=0;
    cin>>n;
    while (n>0){
        d=n%10;
        s=d;
        n=n/10;
        cnt++;
    }
    if ((cnt==10) && (s!=0)){
        cout<<"Valid";
    }
    else{
        cout<<"Invalid";
    }
}