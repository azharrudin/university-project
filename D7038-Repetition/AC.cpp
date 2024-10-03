#include<stdio.h>

int main(){
    int a;
    long long int b, c, max, e;		//wants,$,max,candy

    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {
        max =0;
        scanf("%lld %lld", &b, &c);
        for (int j = 0; j < b; j++)
        {
            scanf("%lld", &e);
            if (j == 0)
            {
                max = c/e;
            } else if (c/e > max){
                max = c/e;
            }
        }
        
        printf("Case #%d: %lld\n", i, max);
    }
    return 0;
}
