#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0,b=1,c;
    cout<<a<<" "<<b<<" ";
    for (int i =0;i <=(n-3) ; i++){
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
    }
}