#include <stdio.h>
int main(){
	int x, y;
	scanf("%d %d", &x, &y);
	
	int arr[100][100];
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	int n;
	scanf("%d", &n);
	
	int a, b, c;
	for(int i=0; i<n; i++){
			scanf("%d %d %d", &a, &b, &c);
			arr[a-1][b-1] = c;	
	}
	
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			printf("%d%c", arr[i][j], ((j==y-1)?'\n':' '));
		}
	}
	return 0;
}
