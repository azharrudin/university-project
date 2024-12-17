#include <stdio.h>
#include <string.h>
int main(){
	int t,n;
	char a,b;
	scanf("%d", &t); 
	
	char string[1001];
	for(int i=1; i<=t; i++){
		scanf("%s", string); 
		scanf("%d", &n); 
		
		int panjang = strlen(string);
		for(int j=1; j<=n; j++){
			scanf(" %c %c", &a, &b); 
			for(int k=0; k<panjang; k++){
				if(string[k]==a){
					string[k]=b;
				}
			}
		}	
		
		printf("Case #%d: %s\n", i, string);
		
	}
	return 0;
}
