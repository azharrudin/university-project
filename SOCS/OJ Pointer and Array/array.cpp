#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	
	int a[t];
	int b[t];
	for(int i=0; i<t; i++){
		scanf("%d", &a[i]);
	}
	
	for(int i=0; i<t; i++){
		scanf("%d", &b[i]);
	}
	
	int result[t];
	for(int i=0; i<t; i++){
		result[a[i]] = b[i];
	}
	
	for(int i=0; i<t; i++){
		printf("%d%c", result[i], ((i==t-1)?'\n':' '));
	}
	return 0;
}
