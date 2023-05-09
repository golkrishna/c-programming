#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x,y,z ,sum,div,sub ,mult;
    scanf("%d%d%d",&x,&y,&z);
    sum = x+y;
    sub=x-y;
    mult=x*y;
    div=x/y;
    if(z==sum){
        printf("+");
    }
    else if(z==sub){
        printf("-");
    }
    else if(z==mult){
        printf("*");
    }
    else{
        printf("/");
    }
    return 0;
}
