#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d", &t);
	
	for(int i=1; i<=t; i++){
		char string[501];
		scanf("%s", string);
		
		int len = strlen(string);
		
		int palindrome = 1;

		for(int j = 0 ; j < (len/2) ; j++){
			if(string[j] != string[len-j-1]){
				palindrome = 0;
				break;
			}
		}
		
		
		if(palindrome){
			printf("Case #%d: Yay, it's a palindrome\n", i);
		}else {
			printf("Case #%d: Nah, it's not a palindrome\n", i);
		}
	}
	return 0;
}
