#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	
	int player[101]={0};
	int minTeam=0;
	
	for(int i=0; i<t; i++){
		for(int j=0; j<t; j++){
			int shirtNumber;
				scanf("%d", &shirtNumber);
				player[shirtNumber]++;				
		}
	}
	
	for(int i=1; i<=t; i++){
		if(player[i]<t){
			minTeam++;
		}
	}
		printf("%d\n", minTeam);

	
	return 0;
}
