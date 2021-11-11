#include<stdio.h>
int sumn(int,int,int,int,int);
int avg(int,int,int,int,int);
float sd(int,int,int,int,int);

int main()
{
    int a,b,c,d,e, sum, average;
    float sdevn;
    printf("enter any five numbers\n",a,b,c,d,e);
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum = sumn(a,b,c,d,e);
    average = avg(a,b,c,d,e);
    sdevn = sd(a,b,c,d,e);

    printf("sum = %d average = %d standard deviation = %f\n",sum,average,sdevn);

}
int sumn(int x, int y, int z, int w, int v)
{
    int sum;
    sum = x+y+z+w+v;
    return(sum);
}
int avg(int x, int y, int z, int w, int v)
{
 int lambda;
 lambda = sumn(x,y,z,w,v)/5;
 return(lambda);
}
float sd(int i, int j, int k, int l, int m)
{
    float deviation;
    deviation = sqrt( (i*i + j*j + k*k + l*l + m*m)/5.0 - avg(i,j,k,l,m));

    return(deviation); 
}