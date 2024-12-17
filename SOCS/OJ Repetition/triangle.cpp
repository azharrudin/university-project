#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	
	for(int i=1; i<=t; i++){
		int n;
		scanf("%d", &n);
		
		printf("Case #%d:\n", i);
		for(int j=1; j<=n; j++){
			for(int k=1; k<=n; k++){
			printf("%c", ((n-j)<k) ? (((j%2)!=(k%2==0))?'*':'#'):' ');
			}
		printf("\n");
		}	
	}
	return 0;
}
