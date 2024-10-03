#include<stdio.h>

int main(){
    int a, h, w;
    scanf("%d",&a);

    for (int i = 1; i <= a; i++)
    {
        scanf("%d %d",&h, &w);
        printf("Case #%d:\n", i);
        for (int j = 1; j <= h; j++)
        {
            for (int k = 1; k <= w; k++)
            {
                if (j == 1 || j == h)
                {
                    printf("#");
                } else {
                    if (k == 1 || k == w)
                    {
                        printf("#");
                    }else {
                        printf(" ");
                    }   
                }
            }
            
            printf("\n");
        }
        
    }
    return 0;
}
