#include<stdio.h>

int main(){
    int a, number;
    scanf("%d",&a);

    for (int i = 0; i < a; i++) //test case
    {
        scanf("%d",&number);
        for (int j = 0; j < number; j++)//enter
        {
            for (int k = 0; k < number; k++)
            {
                if (j == 0 || j == number - 1 || k == 0 || k == number - 1 || j == k || j == number - 1 - k)
                {
                    printf("*");
                } else {
                    printf(" ");
                }
                
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
