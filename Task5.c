#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int temp=b;
    b=a;
    a=temp;
    printf("%d%d",a,b);


return 0;
}
