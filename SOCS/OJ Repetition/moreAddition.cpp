#include <stdio.h>
int main(){
	int n,jawaban;
	scanf("%d", &n);
	
	jawaban = ((n+1)*((n+1)+1)) / 2;
	
	printf("%d\n", jawaban);
	return 0;
}
