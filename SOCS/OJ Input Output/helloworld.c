#include <stdio.h>
int N, M, S, counter;
int main()
{
	S = M+N;
	scanf("%d",&N);
	scanf("%d",&M);
	
counter=N;
	do 
	{printf("%d",counter);
	counter++;}
	while (counter<=S);
	return (0);
}
