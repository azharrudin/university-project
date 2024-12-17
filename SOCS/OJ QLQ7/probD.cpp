#include <stdio.h>
#include <string.h>

// int reverse(char string[1001]){
// 	char hasil[1001];
// 	for(int j=len-1; j>=0; j--){
// 			printf("%c", string[j]);
// 	}
// 	return hasil;
// }

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	
	for(int i=1; i<=t; i++){
		char string[1001];
		scanf("%[^\n]", string);
		getchar();
		
		int len = strlen(string);
		
		printf("Case #%d: ",i);
		for(int j=len-1; j>=0; j--){
			printf("%c", string[j]);
		}
		// reverse(string[1001]);
		// printf("%s\n", string);
		printf("\n");
	}
	return 0;
}
