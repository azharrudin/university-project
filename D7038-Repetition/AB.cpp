#include<stdio.h>

int main(){
    int x;
    long long int a[101], b[101], c[101], d[101], e[101], f[101] = {0};
    scanf("%d",&x);

    for (int i = 0; i < x; i++)
    {
        scanf("%lld %lld %lld %lld %lld", &a[i], &b[i], &c[i], &d[i], &e[i]);
        for (int j = 1; j <= a[i]; j++)
        {
            if (j % b[i] == 0 || j % c[i] == 0 || j % d[i] == 0 || j % e[i] == 0)
            {
                f[i]++;
            }
        }
    }
    
    for (int i = 0; i < x; i++)
    {
        printf("Case #%d: %lld\n", i+1, f[i]);
    }
    
    return 0;
}
