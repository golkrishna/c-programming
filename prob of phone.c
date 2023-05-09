#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
     float p1,p2,p3,a=0;
     int c=0;
    scanf("%f",&p1);
    scanf("%f",&p2);
    scanf("%f",&p3);
    scanf("%f",&a);
    if(p1<a)
    {
        c++;  
    }
    if(p2<a)
    {
        c++;     
    }
    if(p3<a)
    {
        c++;  
    }
    if(p1<a)
    {
    printf("%.3f\n",1.0/c);
    }
    else 
    {
        printf("0.000\n");
    }
    if(p2<a)
    {
    printf("%.3f\n",1.0/c);
    }
    else 
    {
        printf("0.000\n");
    }
    if(p3<a)
    {
    printf("%.3f\n",1.0/c);
    }
    else 
    {
        printf("0.000\n");
    }
    return 0;
}
