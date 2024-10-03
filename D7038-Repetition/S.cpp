#include<stdio.h>

int main(){
    long long int a, p, b, count=0;  //banyak balon, power,balon
    scanf("%lld %lld",&a, &p);
    for (int i = 0; i < a; i++)
    {
        scanf("%lld", &b); 			// balon
        if (p > b)
        {
            count++;
        }
    }
    printf("%lld\n", count);
    
    return 0;
}
