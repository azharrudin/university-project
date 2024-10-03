#include<stdio.h>

int main(){
    int a, y;
    scanf("%d",&a);
    long long int x;
    for (int i = 1; i <= a; i++)
    {
        y = 1;
        scanf("%lld",&x);
        while (x > 9)
        {
            y++;				//countny nambah
            x /= 10;			//dibagi 10 kek satuanny gitu
        }
        printf("Case #%d: %d\n", i, y);
    }
    return 0;
}
