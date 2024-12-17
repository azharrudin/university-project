#include <stdio.h>
int main(){

int t;
scanf("%d", &t) ;

int hari;

for (int i=1; i<=t; i++){
	scanf("%d", &hari); getchar();
	
	long long int likes[hari+1];
	likes[1] = 0;
	likes[2] = 1;
	if(hari>=1 && hari<=2){
		printf("Case #%d: %lld\n", i, likes[hari]);
	}else if(hari>=3){
		for(int j=3; j<=hari; j++){
		likes[j] = likes[j-1] + likes[j-2];
		}	
		
		printf("Case #%d: %lld\n", i, likes[hari]);
	}
	
	
	}

return 0;
}


