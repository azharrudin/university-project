#include <stdio.h>

int main() {
    long long int TW, TA;
    long long int maxw = 0, maxatt = 0;

    scanf("%lld %lld", &TW, &TA);		//tentuin brapa weapon sm att

    for (int i = 0; i < TW; i++) {
        long long int w;			// tentuin brapa weapon
        scanf("%lld", &w);
        maxw = (w > maxw) ? w : maxw;
    }

    for (int i = 0; i < TA; i++) {
        long long int a;
        scanf("%lld", &a);				// brapa att (dragon)
        maxatt = (a > maxatt) ? a : maxatt;
    }

    if (maxw > maxatt) {
        printf("The dark secret was true\n");
    } else {
        printf("Secret debunked\n");
    }

    return 0;
}

