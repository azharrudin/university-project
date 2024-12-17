#include <stdio.h>

int main() {
    unsigned int x, y, k;
    scanf("%u %u %u", &x, &y, &k);

    if (x%2 != 0 && y%2==0 && k%2!=0|| x%2 == 0 && y%2!=0 && k%2==0) {
       printf("-1\n");
    }else{
    	
    	printf("%d\n", (y-x)/2);
	}
    

    return 0;
}

