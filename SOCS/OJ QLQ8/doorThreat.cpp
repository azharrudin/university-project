#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);

    
    for(int i=1; i<=t; i++){
        int n, m;
        scanf("%d %d", &n, &m);

        int door[10001] = {0};
        int pattern;
        for(int j=0; j<m; j++){
            scanf("%d", &pattern);

            for(int k = pattern ; k<=n ; k += pattern){
                if(door[k] == 0){
                    door[k] = 1;
                }else{
                    door[k] = 0;
                }
            }
        }

        int unlockedCount = 0;
        printf("Case #%d:", i);
        for(int j=1; j<=n; j++){
            if(door[j] == 0){
                printf(" %d", j);
                unlockedCount++;
            }
        }

        if(unlockedCount == 0){
            printf(" No room left!");
        }

        printf("\n");
    }
    return 0;
}