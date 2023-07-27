#include <stdio.h>

int main(){
    int n,j=1;
    scanf("%d",&n);
    for(int s=1; s<=n; s=s+1){
        for(int i=1; i<=s; i=i+1){
            printf("%d",s);
        }
        printf("\n");
        
    }
    return 0;
}
