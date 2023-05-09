#include <math.h>
#include <stdio.h>


int main() {
    int h,m;
    scanf("%d%d",&h,&m);
    if((h>=4 && h<=11)&&(m>=00 && m<=59))
    {
        printf("Good Morning");
    }
    else if ((h>=12 && h<=15)&&(m>=00 && m<=59)){
        printf("Good Evening");
    }
    else if((h>=22 && h<=23)&&(m>=00 && m<=59)){
        printf("Good Night");
    }
    else if((h>=1 && h<=3)&&(m>=00 && m<=59)){
        printf("Good Night");
    }
    
    return 0;
}
