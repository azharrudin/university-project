#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    // int index[1000] = {0};
    int x[1001] = {0};
    for(int i=0; i<a; i++){
        scanf("%d", &x[i]);
        // index[x[i]]++;
    }

    int y[1001];
    for(int i=0; i<b; i++){
        scanf("%d", &y[i]);
    } 

    for(int i=0; i<b; i++){
        for(int j=0; j<a; j++){
            if(x[j] == y[i]){
                x[j] = 0;
            }
        }
    } 

    int max = -1;
    for(int i=0; i<a; i++){
        if(x[i] != 0 && x[i] > max){
            max = x[i];
        }
    } 


    printf("Maximum number is %d\n", max);

    
    return 0;
}