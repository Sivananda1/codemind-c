#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if(n<=1){
        return false;
    }
    else {
        for(int i=2;i<=(int)sqrt(n);i++){
            if(n%i==0) return false;
        }
    }
    return true;
}
bool palin(int n){
    int s=0,d=0,temp=n;
    while(n>0){
        d=n%10;
        s=(s*10)+d;
        n=n/10;
        
    }
    if(s==temp) return true;
    else return false;
}
int main(){
    int n;
    cin>>n;
    for(int i=n+1;i<=n*n;i++){
        if((prime(i)) && (palin(i))){
            cout<<i<<endl;
            break;
        }
    }
}