#include<stdio.h>
int main(){
    unsigned long int a,b,c;
    scanf("%lu %lu %lu",&a,&b,&c); getchar();
    if((b-a)%2!=0){													
    	printf("-1\n");
	} else if(b-a>=0){
		if(a==b && a==c) {
		printf("0\n");}
		else if(a+(b-a)/2==b-(b-a)/2&&a+(b-a)/2==c){
			printf("%lu\n",(b-a)/2);
		} else printf("-1\n");
	}
    return 0;
}


