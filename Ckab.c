#include<stdio.h>
float average(int,int,int);
float percentage(int,int,int);
int main()
{
    int a,b,c;
    float avg,percent;
    printf("enter marks of three subjects each out of 100\n");
    scanf("%d%d%d",&a,&b,&c);
    avg = average(a,b,c);
    percent = percentage(a,b,c);

     printf("average = %f  percentage = %f",avg,percent);
}

float average(int x, int y, int z)
{
    float aveg = (x + y + z)/3;
    return(aveg);
}
float percentage(int i, int j, int k)
{
   float per = ((i+j+k)*(1.0)/300)*100;
   return(per);

}
