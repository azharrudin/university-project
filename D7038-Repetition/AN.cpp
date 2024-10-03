#include<stdio.h>

int main(){
	int range, i, j;
	scanf("%d", &range);
	int a, s, h, o, e, p;
	
	for (i = 1; i <= range; i++){
		scanf("%d %d %d %d %d %d", &a, &s, &h, &o, &e, &p);
		printf("Case #%d: ", i);
		for (j = 0; j < a; j++){
			printf("a");
		}
		for (j = 0; j < s; j++){
			printf("s");
		}
		for (j = 0; j < h; j++){
			printf("h");
		}
		for (j = 0; j < o; j++){
			printf("i");
		}
		for (j = 0; j < e; j++){
			printf("a");
		}
		for (j = 0; j < p; j++){
			printf("p");
		}
		printf("\n");
	}
	return 0;
}
