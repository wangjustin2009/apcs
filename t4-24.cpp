#include <stdio.h>
int isPrime(int a ); 
int main()
{
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    y=isPrime(x);
    if(y==0){
       printf("notPrime!");
    } else {
        printf("yesPrime!");
    }
    return 0;
}
int isPrime(int a){ 
    int result;
    for (int i=2;i<=a-1;i=i+1){
        if(a%i==0){
            result=0;
        }else{
            result=1;
        }
        return result;
    }
}
