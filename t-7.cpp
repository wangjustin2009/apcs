#include <stdio.h>
int whoBig(int a, int b); 
int main()
{
    int n1,n2,big;
    printf("Enters two numbers:");
    scanf("%d %d",&n1,&n2);
    big = whoBig(n1, n2);  
    printf("big = %d",big);
    return 0;
}
int whoBig(int a, int b){ 
    int result;
    if (a>b){
        result=a;
    }
    else {
        result=b;
    }
   
    return result;                     
}
