#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 char ch;
    scanf("%c", &ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("Vowel.", ch);
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("Consonant.", ch);
    }
    else 
    {
        
        printf("Not an alphabet.", ch);
    }
   
       
    return 0;
}
