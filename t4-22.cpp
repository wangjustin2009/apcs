#include <stdio.h>
int addHour(int a),addmin(int a); 
int main()
{
    int n1,hour,min;
    printf("Enters one numbers:");
    scanf("%d",&n1);
    hour = addHour(n1);  
    min = addmin(n1);
    printf("time = %d hour %d min", hour, min); 
    return 0;
}
int addHour(int a){ 
    int result;
    result = a/60;
    return result;                     
}

int addmin(int a){ 
    int result ;
    result=a%60;
    return result;                     
}

