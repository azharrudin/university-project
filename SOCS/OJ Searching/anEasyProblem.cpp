#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);

    int n[100];

    int isHard = 0;
    for(int i=0; i<t; i++){
        scanf("%d", &n[i]);

        if(n[i] == 1){
            isHard = 1;
            break;
        }  
    }

    if(isHard == 0){
        printf("easy\n");
    }else{
        printf("not easy\n");
    }
    return 0;
}