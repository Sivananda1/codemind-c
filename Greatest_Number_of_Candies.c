#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t];
    for (int i=0;i<t;i++) cin>>a[i];
    int n;
    cin>>n;
    int k;
    k=*max_element(a,a+t);
    for(int i=0;i<t;i++){
        if (a[i]+n>=k) cout<<"True"<<" ";
        else cout<<"False"<<" ";
    }
}