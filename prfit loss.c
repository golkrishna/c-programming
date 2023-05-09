#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a,b;
    scanf("%f",&a);
    scanf("%f",&b);
    if(a>b){
        printf("Loss");
        printf("\n%.2f%%",(((a-b)/a)*100));
    }
    else{
        printf("Profit");
        printf("\n%.2f%%",(((b-a)/a)*100));
    }
    return 0;
}
