#include<bits/stdc++.h>
using namespace std;
bool ugly(int n){
    while (n%2==0) n/=2;
    if (n==1) return true;
    while (n%3==0) n/=3;
    if (n==1) return true;
    while (n%5==0) n/=5;
    if (n==1) return true;
    return false;
    
}
int main(){
    int a;
    cin>>a;
    if (ugly(a)) cout<<"Ugly Number";
    else cout<<"Not Ugly Number";
}