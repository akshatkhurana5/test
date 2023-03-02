//Check Armstrong number
#include<stdio.h>
int main()
{
    int n,i,a,b;
    scanf("%d",&n);
    i=n;
    while(i!=0){
        a=i%10;
        b+=a*a*a;
        i=i/10;
    }
    if (b==n){
        printf("Armstrong number.");
    }
    else{
        printf("Not an armstrong number.");
    }
    return 0;
}