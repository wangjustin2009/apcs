#include <iostream>
using namespace std;
int f(int i){
    if(i <=1){
        return 1;
    }
    return i * f(i-1);
}
/*
f(1)=1
f(2)=2*f(2-1)=2*1
f(3)=3*f(3-1)=3*2=6
f(4)=4*f(4-1)=4*6=24
f(5)=5*f(5-1)=5*24
f(n)=f(n)*f(n-1)=n!=n*n-1*n-2*n-3*...*1
*/
int main(){
    int n = 5;
    printf("f(%d) = %d \n",n,f(n));
    return 0;
}
