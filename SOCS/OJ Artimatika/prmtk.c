#include <stdio.h>

int main(){
	long int a1, b1, c1, d1;
    long int a2, b2, c2, d2;
    long int a3, b3, c3, d3;
    char operator1, operator2, operator3;

    scanf("(%ld%c%ld)%c(%ld%c%ld)", &a1, &operator1, &b1, &operator2, &c1, &operator3, &d1); getchar();
    scanf("(%ld%c%ld)%c(%ld%c%ld)", &a2, &operator1, &b2, &operator2, &c2, &operator3, &d2); getchar();
    scanf("(%ld%c%ld)%c(%ld%c%ld)", &a3, &operator1, &b3, &operator2, &c3, &operator3, &d3); getchar();

    printf("%ld %ld %ld\n", (a1 + b1) * (c1 - d1), (a2 + b2) * (c2 - d2), (a3 + b3) * (c3 - d3));
	return 0;
}
