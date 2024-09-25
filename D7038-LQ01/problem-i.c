#include <stdio.h>

int main()
{

    int a,b;
    float k;
    scanf("%d %d", &a, &b);
    k = (b/a)*100;
    printf("%.4f\n", k);
    return 0;
}