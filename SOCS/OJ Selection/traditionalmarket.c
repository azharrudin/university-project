#include <stdio.h>

int main(){
	unsigned long int d,s,t;
	scanf("%lu %lu %lu", &d, &s, &t); getchar();
	
	if(d>s && d>t) {
			if(s>t){
			printf("Daging\n");
			printf("Sayur\n");
			printf("Telur\n");
			}else if(t>s){
			printf("Daging\n");
			printf("Telur\n");
			printf("Sayur\n");
			}
		}else if(s>d && s>t) {
			if(d>t){
			printf("Sayur\n");
			printf("Daging\n");
			printf("Telur\n");
			}else if(t>d){
			printf("Sayur\n");
			printf("Telur\n");
			printf("Daging\n");
			}
		}else if(t>d && t>s){
		if(d>s){
			printf("Telur\n");
			printf("Daging\n");
			printf("Sayur\n");
			}else if(s>d){
			printf("Telur\n");
			printf("Sayur\n");
			printf("Daging\n");
			}
	}
	return 0;
}
