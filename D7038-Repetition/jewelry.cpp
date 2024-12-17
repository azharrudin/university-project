#include<stdio.h>
int main()
{
	int T;
	scanf("%d", &T);
	for(int t=0;t<T;t++)
	{
		int n,m;
		scanf("%d %d", &n, &m);
		int a[n];
		for(int x=0;x<n;x++)
		{
			scanf("%1d", &a[x]);


		}
		printf("Case #%d: ", t+1);
		int interval =0;
		int breath = m;
		int immune = 0;
		for(int x=0;x<n;x++)
		{  
            if(a[x] == 1){
               if(immune == 0) immune = 1;
               else{
                immune = 0;
                breath = m;
               }
            }
            else if(a[x] == 0 && immune == 0){
                breath--;
                   if(breath == 0) break;

            }
           
             

            
            
			
		}
        if(breath ==0 && immune == 0){
            printf("Dead\n");
        }
        else if(breath == 0 && immune == 1) {
            printf("Alive\n");

        }
         else if(breath > 0 && immune == 1) {
            printf("Alive\n");

        }
           else if(breath > 0 && immune == 0) {
            printf("Alive\n");

        }
//        printf("%d %d", breath, immune);
       
	}
}
/*
4
9 3
001011010
10 4
0000100100
10 4 
0001010000 
10 4 
0001001000
*/
