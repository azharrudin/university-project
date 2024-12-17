#include <stdio.h>

int main(){
	char x,y,z;
	scanf("%c %c %c", &x, &y, &z); getchar();
	
	if(x<y && x<z){
		if(y<z){
			printf("1 2 3\n");
		}else if(y>z){
			printf("1 3 2\n");
		}
	}
	
	else if(y<x && y<z){
		if(x<z){
			printf("2 1 3\n"); 
		}else if(x>z){
			printf("2 3 1\n"); 
		}
	}
	
	else{
		if(x<y){
			printf("3 1 2\n"); 
		}else if(x>y){
			printf("3 2 1\n"); 
		}
	}
	return 0;
}
