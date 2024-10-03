#include<stdio.h>

int main(){
    int a;
    long long int b;
    scanf("%d",&a);

    for (int i = 1; i <= a; i++)
    {
        scanf("%lld",&b);
        printf("Case #%d:\n", i);
        for (int j = 1; j <= b; j++)
        {
            printf("%d ", j);
            if (j % 15 == 0)
            {
                printf("Lili\n");
            } else if (j % 3 == 0 || j % 5 == 0) {
                printf("Jojo\n");
            } else {
                printf("Lili\n");
            }   
        }
    }
}
