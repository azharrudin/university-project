#include<stdio.h>

int main(){
	int a,b[a];
	long long int sum = 0;
	scanf("%d",&a);
	
	for(int i=0;i<a;i++){
		
		scanf("%d",&b[i]);
		sum+= b[i];				//nambahin doang
	}
	printf("%lld\n",sum);

return 0;
}
