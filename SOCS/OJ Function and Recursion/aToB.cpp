#include <stdio.h>

int calculate(int a){
        if(a%2==0) return a/2;
        else return a*3 + 1;
}

int main(){
    int t;
    scanf("%d", &t);

    int a,b;
    for(int i=1; i<=t; i++){
        scanf("%d %d", &a, &b);

        int isSame;
        int count = 0;
        while(a != b && count<10000){
            a = calculate(a);
            isSame = 0;
            count++;
        }

        if(a==b) isSame = 1;
        
        if(isSame == 1){
            printf("Case #%d: YES\n", i);
        }else{
            printf("Case #%d: NO\n", i);
        }
    }
    return 0;
}