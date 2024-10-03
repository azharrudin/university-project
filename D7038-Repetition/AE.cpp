#include<stdio.h>

int main(){
    long long int a;
    double r, h, l;
    scanf("%lld",&a);
    for (int i = 1; i <= a; i++)
    {
        scanf("%lf %lf",&r, &h);			//angkany
        l = 2*3.14*r*r + 3.14*2*r*h;		//rumus
        printf("Case #%d: %.2lf\n", i, l);
    }
    
}
