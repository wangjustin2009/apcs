#include <stdio.h>
int main()
{
    int M,D,S;
    printf("enter M,D:");
    scanf("%d %d", &M,&D);
    S=(M*2+D)%3;
    if (S==0){
        printf("oraindry");
    }else if(S==1){
        printf("little licky");
    }else if(S==2){
        printf("big licky");
    }
    return 0;
}
