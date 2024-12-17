#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	
	long long int roomNum[5001];
	for(int i=0; i<t; i++){
		scanf("%lld", &roomNum[i]);
 	}

	int visited[5001] = {0};
	int count = 0;

	for(int i=0; i<t; i++){
		for(int j=i+1; j<t; j++){
			if(roomNum[i] == roomNum[j]){
				visited[j] = 1;
			}
		}
		
		if(visited[i] == 0){
			count++;
		}
	}

	printf("%d\n",count);

	return 0;
}




