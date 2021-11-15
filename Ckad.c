#include<stdio.h>

int power(int a, int b){
    //return a to power b
    int a,i,b, powr = 1;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    for (i=1; i<=b; i++)
    {
       powr = powr*a;
    }
return powr;

}
int factorial(int n)
{
    int fact = 1,i;
    for(i=1;i<=n;i++)
    {
        fact = fact*i;
    }
return fact;

}
int main ()
{
    int x;
    scanf("%d", &x);
    float ans = 0;

    int sign = 1;
    for(int i=1;i<=19;i+=2){
        int p = power(x,i);
        int f = factorial(i);
        
        ans+=    sign * ( (p*1.0)/f);

        sign = sign*-1;

    }

}