#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);

    int n, x, num[500];
    for(int i=1; i<=t; i++){
        scanf("%d %d", &n, &x);

        
        for(int j=0 ; j<n; j++){
            scanf("%d", &num[j]);
        }
            int time = 0;
            for(int k=0; k<n; k++){
                for(int h=0; h<n-1; h++){
                    if(num[h] > num[h+1]){
                        int temp = num[h];
                        num[h] = num[h+1];
                        num[h+1] = temp;
                        time += x;
                    }
                }
            }
        

        printf("Case #%d: %d\n", i, time);
    }


    return 0;
}