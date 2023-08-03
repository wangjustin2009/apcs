#include <iostream>

using namespace std;

int main(){
    int w,a[100];
    int x=0,y=0,z=0;
    printf("enter n:");
    scanf("%d",&w);
    for(int i=0;i<w;i++){
        printf("enter %d number:",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<w;i++){
        if(a[i]>0){
            x=x+1;
        }else if(a[i]==0){
            y=y+1;
        }else{
            z=z+1;
        }
    }
    printf("zero number= %d\n",x);
    printf("Positive number= %d\n",y);
    printf("negative number= %d\n",z);
    return 0;
}
