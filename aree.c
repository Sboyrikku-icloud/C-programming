#include<stdio.h>
#define SWAP(x,y) int t;t=x;x=y;y=t;
void main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    swap(a,b);
    printf("after swapping values a=%d and b=%d",a,b);

}
