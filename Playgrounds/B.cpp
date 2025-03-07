// 4,11,26,57
#include <stdio.h>
#include <string.h>
int num = 0;
char snum[100] = "0";
void fraktal_A(int x)
{
    int i;
    if (x <= 0)
        return;
    else
    {
        fraktal_A(x - 1);
        for (i = 1; i <= x; i++){
    num++;

            printf("*");
        }
        printf("\n");
        fraktal_A(x - 1);
    }
}
void additionNumber(char *str){
    int length = strlen(snum) > strlen(str) ? strlen(snum) : strlen(str);
    int y = length-1;
    while(y > 0){

        str[y] 
        
        y--;
    }
}
// 5934 + 388 = 6322
//  388 = 22 
int main(){
    fraktal_A(2);
    printf("%d",);
}