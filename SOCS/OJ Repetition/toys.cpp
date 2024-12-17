#include <stdio.h>
int main(){
	int t, z=0;
	scanf("%d", &t);
	
	for(int i=1; i<=t; i++){
		int a,b,c,d;
		int n;
		scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
		
		for(int j = 1; j<=n ; j++){
			if(j%a == 0 || j%b == 0 || j%c == 0 || j%d == 0){
				z+=1;
			}
		}
		
		printf("Case #%d: %d\n", i, z);
		z=0;
	}
	return 0;
}
