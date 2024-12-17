#include <stdio.h>

int main(){
	int t,n;
	scanf("%d", &t); getchar();
	
	for(int i=1; i<=t; i++){
		scanf("%d", &n); getchar();
		
		printf("Case #%d: ", i);
		int total = 1;
		for(int j=1 ; j<=n ; total+=j,j++){
			printf("%d%c", total,(j!=n)?' ':'\n');
			;
		}
	}
}


