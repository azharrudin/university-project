#include <stdio.h>
#include <string.h>
int main(){
	int tc,a,b;
	scanf("%d", &tc);
	
	int n;
	char s[1000];
	for(int i=1; i<=tc; i++){
		scanf("%d %s", &n, s);
		for(int j=1; j<=n; j++){
			scanf("%d %d", &a, &b);
			a-=1;
			b-=1;
			
			int len = strlen(s);
				while(a<b){
					char reverse = s[a];
					s[a] = s[b];
					s[b] = reverse;
					a++;
					b--;
				}
			}
	printf("Case #%d: %s\n", i, s);	
	}
		
	return 0;
}
