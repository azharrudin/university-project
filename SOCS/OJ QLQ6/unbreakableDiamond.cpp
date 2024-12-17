#include <stdio.h>
#include <string.h>
int main(){
        int t;
        scanf("%d", &t); getchar();

       
        char str[100001];
        for(int i=1; i<=t; i++){
            scanf("%[^\n]", str); getchar();

            int len = strlen(str);
            int count=0;
            int cek[100001]={0};
            for(int j=0; j<len; j++){
                if(cek[str[j]] == 0){
                    cek[str[j]] = 1;
                    count++;
                }
            }

            if(count%2==0){
                printf("Case #%d: Breakable\n", i);
            }else{
                printf("Case #%d: Unbreakable\n", i);
            }

        }
    return 0;
}