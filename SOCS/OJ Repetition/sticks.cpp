#include <stdio.h>
int main(){
	int t,n,m,o;
	scanf("%d", &t); getchar();
	
	for(int i=1; i<=t; i++){
		scanf("%d %d %d", &n, &m, &o); getchar();
		if(n+m>o && n+o>m && o+m>n){
			printf("Case #%d: Yes\n", i);
		}else{
			printf("Case #%d: No\n", i);
		}
	}
	return 0;
}
