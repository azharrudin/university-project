#include <stdio.h>
int main(){
	int n=1;
	int q;
	
	scanf("%d", &q);
	
	for(int i=1; i<=q; i++){
		n = n*2+1;
	}printf("%d\n", n);
	return 0;
}
