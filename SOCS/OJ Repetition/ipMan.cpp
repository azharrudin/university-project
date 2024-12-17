#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d", &t);

	char arr[101];
	for(int i=1; i<=t; i++){
	scanf("%s", arr); getchar();	
	
	int bisa =1;
	int panjang = strlen(arr);	
	int totalTitik = 0;
	
	for(int j=0; j<panjang; j++){
		if(arr[j] == '.' && arr[j+1]!='.'){
			totalTitik+=1;
		}else if (arr[j] < '0' || arr[j] > '9') {
            bisa = 0;
            break;
        }
		
		if(arr[0]=='.'|| arr[panjang-1]=='.'){
			bisa=0;
			break;
		}
	}
	
	if(totalTitik != 5){
		bisa=0;
	}
		printf("Case #%d: %s\n",i, ((bisa==1)?"YES":"NO"));	
	
}
	return 0;
}
