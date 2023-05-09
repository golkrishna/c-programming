#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int P,R,T,si;
    scanf("%d",&P);
    scanf("%d",&R);
    scanf("%d",&T);
    si=((P*R*T)/100+P);
    printf("%d",si);
    
    return 0;
}
