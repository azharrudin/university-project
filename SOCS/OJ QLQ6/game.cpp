#include <stdio.h>
int main(){
      int a,b;
      scanf("%d %d", &a, &b);  

      char str[200];
      scanf("%s", str);


        int k;
        for(int i=0; i<b; i++){
            scanf("%d", &k);

            if(str[k]>='A' && str[k]<='Z'){
                str[k] += 32;
            }else if(str[k]>='a' && str[k]<='z'){
                str[k] -= 32;
            }
        }

        printf("%s\n", str);
    
    return 0;
}