#include <stdio.h>
int main() 
{
    char z;
    scanf("%c",&z);
    switch(z){
        case 'A':
        printf("Excellent");
        break;
        case 'B':
        printf("Good");
        break;
        case 'C':
        printf("Average");
        break;
        case 'D':
        printf("Below Average");
        break;
        case 'F':
        printf("Fail");
        break;
        }
    return 0;
}