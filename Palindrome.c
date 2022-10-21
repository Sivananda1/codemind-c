#include<stdio.h>
int main() {
    int a,rev=0,r=0,s;
    scanf("%d",&a);
    s=a;
    while (a>0){
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
if(s==rev)
    printf("True");
else
    printf("False");
}
