#include<stdio.h>

int main(){
    long long int a, b, sum = 0;
    scanf("%lld",&a);
    for (int i = 0; i < a; i++)
    {
        scanf("%lld",&b);
        if (b > 0)			// penambahan profit
        {
            sum += b;
        }
    }
    printf("%lld\n",sum);
    
    return 0;
}
