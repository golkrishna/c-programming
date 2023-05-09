#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int d1,d2,n;
    scanf("%d",&n);
    scanf("%d",&d1);
    scanf("%d",&d2);
      

    if(n%d1==0 && n%d2==0){
        printf("Yes.");
    }
    
    else{    
        printf("No.");
    }
    return 0;    

}
