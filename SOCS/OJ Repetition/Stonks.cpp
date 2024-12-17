#include <stdio.h>
int main(){
	long long int t,h;
	scanf("%lld", &t);
	
	long long int untung=0;
	for(int i=1; i<=t; i++){
		scanf("%lld", &h);
		
		if(h>0){
			untung+=h;
		}else{
			untung+=0;
		}
		
	}
	printf("%lld\n", untung);
	return 0;
}
