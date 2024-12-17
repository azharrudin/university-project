#include <stdio.h>		

// 1 2 3 1

// insialisasi
// 1 1 3 1
// 0 0 0 0

// 0 0 0 1
// 0 1 0 1


// 1 2 3 1 2 3 1
// 0 0 0 1 1 1 1
int main(){
	int t;
	scanf("%d", &t);
	
	long long int room[5001];
	for(int i=0; i<t; i++){
		scanf("%lld", &room[i]);
	}
	
	int visited[5001] = {0};
	int count = 0;
	for(int i=0; i<t; i++){
		for(int j=i+1; j<t; j++){
			if(room[i] == room[j]){ 
				 visited[j] = 1;
			}	
		}
		
		if(visited[i] == 0){
			count++;
		}
	}
	
	printf("%d\n", count);

	
	return 0;
}
