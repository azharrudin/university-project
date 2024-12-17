#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d", &t);
	
	char string[1001];
	for(int i=1; i<=t; i++){
		scanf("%s", string);
		
		int panjang = strlen(string);
		printf("Case %d: ",i);
		for(int j=0; j<panjang; j++){
				if(string[j]>='A' && string[j]<='z'){
					printf("%d%c", string[j], ((j==panjang-1)?'\n':'-'));
				}
				else{
					printf("\n");
					break;
				}
			}
			
	}
	return 0;
}
