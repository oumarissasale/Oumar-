#include <stdio.h>
#include <cs50.h>
 int main (void)
 {
    int a=500,b=250,c=200,d=100,e=50,f=25,g=10,h=5,j=1,counter=0,sum;

    do
    {
        sum=get_int("sum :");
    }
    while(sum<0);

    while(sum>=a)
    {
        sum=sum-a;
        counter++;
    }
    while(sum>=b)
    {
        sum=sum-b;
        counter++;
    }
    while(sum>=c)
    {
        sum=sum-c;
        counter++;
    }
    while(sum>=d)
    {
        sum=sum-d;
        counter++;
    }
    while(sum>=e)
    {
       sum=sum-e;
       counter++;
    }
    while(sum>=f)
    {
        sum=sum-f;
        counter++;
    }
    while(sum>=g)
    {
        sum=sum-g;
        counter++;
    }
    while(sum>=h)
    {
        sum=sum-h;
        counter++;
    }
    while(sum>=j)
    {
        sum=sum-j;
        counter++;
    }

    printf("the number of coin is :%i\n",counter);
 }