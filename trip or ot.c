#include <stdio.h>
#include <string.h>
#include <math.h>


int main() {

    int N,S,C,H,L,T;
    int a,b,c;
    scanf("%d%d%d%d%d%d",&N,&S,&C,&H,&L,&T);
    
    a=S*C*H;
    b=N-L;
    c=N*T;
    if(a<c){
        printf("Goa Jaayenge");
    }
    else{
        printf("Padhai Karenge");
    }
    
    return 0;
}
