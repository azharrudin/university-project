#include <stdio.h>
int main(){
	int t,k,s;
	scanf("%d", &t);

	char string[1000];
	for(int i=1; i<=t; i++){
		scanf("%d %d", &s, &k);
		
		for(int j=1; j<=s; j++){
			scanf(" %c", &string[j]);
		}
		
		printf("Case #%d: ",i);
		for(int j=1; j<=s; j++){
			if(string[j] >= 'a' && string[j] <='z'){
				char z = string[j];
				z-='a';
				z = (z+k)%26;
				z+='a';
				printf("%c", z);
			}
		}
		printf("\n");
	}
	return 0;
}
