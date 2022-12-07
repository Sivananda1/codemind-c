#include<bits/stdc++.h>
using namespace std;
bool r(int n){
    int c=n,r=0;
    if (n<0) {
        return false;
    }
    while (n){
        r=r*10+n%10;
        n=n/10;
    }
    if (r==c) return true;
    return false;
}
int main(){
    int a,b,c;
    cin>>a;
    b=a;
    c=a;
    int m=0;
    while (true){
        c+=1;
        b-=1;
        if (r(b)) {
            cout<<b<<" ";
            m=1; 
        }
        if (r(c)) {
            cout<<c<<" ";
            m=1; 
        }
        if (m==1) break;
        
}
}