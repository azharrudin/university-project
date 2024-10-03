#include<stdio.h>

int main(){
    int a;
    long long int x = 1;

    scanf("%d",&a);				//angkany
    for (int i = 0; i < a; i++)
    {
        x = a*2 + 1;		//rumus
    }
    printf("%lld\n", x);

return 0;
}
