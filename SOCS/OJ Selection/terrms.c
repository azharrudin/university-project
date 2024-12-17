#include <stdio.h>

int main(){
	long int a,c,t,b,i,z;
	scanf("%ld", &t); getchar();
	
	for(i = 1; i<=t; i++){
		scanf("%ld %ld %ld", &a, &b, &c); getchar();
		printf("Case #%ld: ",i);
		z = (a/100)*b;
			if(z >= c){
			z=c;
			}printf("%ld\n",z);
			
        }
	return 0;
}
