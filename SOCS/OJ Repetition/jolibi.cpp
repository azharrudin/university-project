#include <stdio.h>
int main(){
	int a,j,l,b,p;
	scanf("%d", &a);
	scanf("%d %d %d", &j, &l, &b);
	int totals=j+l+b;
	
	for(int i =1; i<=a; i++){
		scanf("%d", &p);
		totals+=p;
	}
	
	int rataRata = totals/(a+3);
	
	if(j>=rataRata){
		printf("Jojo lolos\n");
	}else if(j<rataRata){
		printf("Jojo tidak lolos\n");
	}
	
	if(l>=rataRata){
		printf("Lili lolos\n");
	}else if(l<rataRata){
		printf("Lili tidak lolos\n");
	}
	
	if(b>=rataRata){
		printf("Bibi lolos\n");
	}else if(b<rataRata){
		printf("Bibi tidak lolos\n");
	}
	
	return 0;
}
