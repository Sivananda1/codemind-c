#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d=0,s=0;
    cin>>n;
    while (n!=0){
        d=n%10;
        s=(s*10)+d;
        n=n/10;
    }
    cout<<s;
}