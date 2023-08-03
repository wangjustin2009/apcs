#include <stdio.h>
int addTemperture(int a ); 
int main()
{
    int c,f;
    printf("Enters degree c:");
    scanf("%d",&c);
    f=addTemperture(c);  
    printf("%d degree c = %d degree f",c,f);
    return 0;
}
int addTemperture(int a){ 
    int result;
    result = a*5/9+32;
    return result;                     
}
