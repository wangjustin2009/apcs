#include <iostream>
using namespace std;
#define n 10
int main(){
    float a[n];
    int i,x,sum=0,avg;
    
    printf("enter the total number:");
    scanf("%d",&x);
    for(i=0;i<x;i++){
        printf("enter number %d:",i+1 );
        scanf("%f",&a[i]);
    }
    for(i=0;i<x;i++){
        sum+=a[i];
        
    }
    avg=sum/x;
    printf("sum= %d, avg= %d",sum,avg);

    return 0;
}
