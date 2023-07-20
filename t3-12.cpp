#include <iostream>
using namespace std;
int main()
{
    int a[10],v,sum;
    printf("please enter 10 numbers:\n");
    for(int i=0;i<10;i++){
       scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++){
        sum+=a[i];
    }
    printf("sum: %d \n",sum);
    v=sum/10;
    printf("average: %d \n",v);
    return 0;
}
