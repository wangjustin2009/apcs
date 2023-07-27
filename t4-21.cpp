#include <stdio.h>
int addNum(int h, int m); 
int main()
{
    int n1,n2,area;
    printf("Enters two numbers:");
    scanf("%d %d",&n1,&n2);
    area = addNum(n1, n2);  
    printf("area = %d",area);
    return 0;
}
int addNum(int h, int m){ 
    int result;
    result = h*60+m;
    return result;                     
}
