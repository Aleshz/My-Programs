#include <stdio.h>
int main()
{
    int a,b,sum,sub,pro,mod;
    float quo;
    printf("Enter any two numbers:");
    scanf("%d %d", &a, &b );
    sum=a+b;
    sub=a-b;
    pro=a*b;
    quo=a/b;
    mod=a%b;
    printf("Addition=%d\n",sum);
    printf("Subtraction=%d\n",sub);
    printf("Product=%d\n",pro);
    printf("Division=%.2f\n",quo);
    printf("Modulus=%d\n",mod);
    return 0;
}