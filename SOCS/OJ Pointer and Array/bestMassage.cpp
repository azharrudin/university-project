#include <stdio.h>
#include <string.h>
int main(){
	int t;
	scanf("%d", &t);
	
	char huruf[1000];
	for(int i =1; i<=t; i++){
		scanf("%s", huruf);
		
		int len = strlen(huruf);
		
		int kode[1000]={0};
		for(int j=0; j<len; j++){
			if(huruf[j]>='A' && huruf[j]<='D'){
				kode[j]+=huruf[j]-'A';
				huruf[j]='A';
	
			}else if(huruf[j]>='E' && huruf[j]<='H'){
				kode[j]+=huruf[j]-'E';
				huruf[j]='E';
				
			}else if(huruf[j]>='I' && huruf[j]<='N'){
				kode[j]+=huruf[j]-'I';
				huruf[j]='I';
				
			}else if(huruf[j]>='O' && huruf[j]<='T'){
				kode[j]+=huruf[j]-'O';
				huruf[j]='O';
				
			}else if(huruf[j]>='U' && huruf[j]<='Z'){
				kode[j]+=huruf[j]-'U';
				huruf[j]='U';
				
			}else{
				break;
			}
		}
		
		printf("Case #%d:\n", i);
		for(int j=0; j<len; j++){
			printf("%c", huruf[j]);
		}
		printf("\n");
		for(int j=0; j<len; j++){
			printf("%d", kode[j]);
		}
		printf("\n");
	}
	return 0;
}
