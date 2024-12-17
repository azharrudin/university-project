#include <stdio.h>
#include <math.h>

int square(int a){
	int num = sqrt(a);
	int hasil = num*num;
	return hasil;
}

int cubic(int a){
	int num = cbrt(a);
	int hasil = num*num*num;
	return hasil;
}

int main(){
	
	int t;
	scanf("%d", &t);
	
	for(int i=1 ; i<=t ; i++){
		int n;
		scanf("%d", &n);
		
		square(n);
		cubic(n);
		int prime = 1;
		for(int k=2; k<=(n/2); k++){
			if(n%k == 0){
				prime = 0;
				break;
			}
		}
		
		printf("Case #%d :",i);
		if(square(n) == n){
			if(cubic(n) == n){
				printf(" square cubic\n");
			}else{
				printf(" square\n");
			}
		}else if(cubic(n) == n){
			printf(" cubic\n");
		}else{
			if(n == 2 || n == 3 || n == 5 || n == 7|| prime == 1){
				printf(" prime\n");
			}else{
				printf(" none\n");
			}
		}
	}
	
	return 0;
}
