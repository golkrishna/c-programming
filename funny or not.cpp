#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,b,g,i,d;
    int A,B,C;
    scanf("%d%d%d%d%d",&n,&b,&g,&i,&d);
    A=b*i;
    B=g*d;
    C=A-B;
    if(C>0){
        printf("Simple Questions");
    }
    else if(C<0){
        printf("Funny Questions");
    }
    else{
        printf("God Knows!");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
