#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	
	for (int i =1; i<=t; i++){
		int a;
		scanf("%d", &a); getchar();
		
		char input [1000];
		scanf("%[^\n]", input); getchar();
		
		printf("Case #%d: ", i);
		for(int j = 0; j<a; j++){
			char c = input[j];
			if(c >= 'a' && c<= 'z'){
				putchar(c);
			}
	
		}printf("\n");
	}
	return 0;
}
