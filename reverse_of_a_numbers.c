#include<stdio.h>
int main(){
    int a,r=0,rev=0,s;
    scanf("%d",&a);
    s=a;
    while (a>0){
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    printf("%d",rev);
}