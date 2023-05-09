#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b;
    
    scanf("%d",&a);
    
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d\t", a);
    printf("%d",b);
    return 0;   
   
}
