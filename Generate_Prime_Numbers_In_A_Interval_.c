#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if (n<=1){
        return false;
    }
    else {
        for (int i=2;i<=(int)sqrt(n);i++){
            if (n%i==0) return false;
        }
    }
    return true;
}
int main(){
    int n,m;
    cin>>n>>m;
    for (int i=n ; i<=m;i++){
        if (prime(i)) cout<<i<<endl;
    }
}