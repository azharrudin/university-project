#include<stdio.h>
#include <string.h>
int sum(char x[], int a, int b){
    int i = a;
    int total = 0;
    while( i <= b  ){
        total += x[i];
        i++;
    }
    return total;
}
int main(){
    int i,a,f;
    
    scanf("%d",&a);
    char ajis[a];
    for (i = 0; i < a; i++)
    {

        scanf("%c", &ajis[i]);
        
    }
    printf("\n-- %d ---", ajis[1]);
    /*
    scanf("%d",&f);
    int friends[f][2];
    for (i = 0; i < f; i++)
    {
        
        scanf("%d %d", &friends[i][0], &friends[i][1]);

    }
    for (i = 0; i < f; i++)
    {
        printf("\n- %d\n", sum(ajis, friends[i][0], friends[i][0] ));
    }
    */
    return 0;
}
