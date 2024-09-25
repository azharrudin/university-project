#include <stdio.h>

int main()
{

    float a,b;
    float k;
    scanf("%f %f", &a, &b);
    k = (b/a)*100;
    printf("%.4f%%\n", k);
    return 0;
}