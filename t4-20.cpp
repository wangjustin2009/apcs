#include <stdio.h>
int addNum(int a, int b); 
int main()
{
    int n1,n2,area;
    printf("Enters two numbers:");
    scanf("%d %d",&n1,&n2);
    area = addNum(n1, n2);  
    printf("area = %d",area);
    return 0;
}
int addNum(int a, int b){ 
    int result;
    result = a*b;
    return result;                     
}
