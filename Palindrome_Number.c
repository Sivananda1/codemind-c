#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
    int n,d=0,s=0,val=0;
    cin>>n;
    val=n;
    while (n!=0){
        d=n%10;
        s=(s*10)+d;
        n=n/10;
    }
    //cout<<val<<" "<<s;
    if (val==s){
        cout<<"True"<<endl;
    }
    else cout<<"False"<<endl;
}
}