#include <stdio.h>
int main(){
	
	int y,x;
	scanf("%d %d", &x, &y);
	
	printf("%.2lf%%\n", (double)x/y*100);
	
	return 0;
}
