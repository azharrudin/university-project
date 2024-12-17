#include <stdio.h>
int main(){
	
	int a,b;
	FILE *fp = fopen("testdata.in", "r");
	fscanf(fp, "%d %d\n",&a, &b);
	fclose(fp);
	
	printf("%d\n", a + b);
	
	return 0;
}
