#include <stdio.h>

int main(){
	int t,k,n,m,z;
	z = n+m;
	scanf("%d", &t); getchar();
	
	for(int i=1; i<=t; i++){
		scanf("%d %d %d", &k ,&n ,&m); getchar();
		z = n+m;
		if(k > z){
			printf("Case #%d: no\n", i);	
		}else{
			printf("Case #%d: yes\n", i);
		}
	}
	

	return 0;
}
