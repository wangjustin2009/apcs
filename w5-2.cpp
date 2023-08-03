#include <iostream>
using namespace std;
int f(int i){
    if(i <=1){
        return 1;
    }else{
        printf("i = %d \n",i);
    }
    return f(i-1);
}
/*
i=5,4,3,2,1
*/
int main(){
    int n = 5;
    printf("f(%d) = %d \n",n,f(n));
    return 0;
}
