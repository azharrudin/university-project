#include <stdio.h>

int main()
{
    int t;
    int a,b,c,i;
    scanf("%d", &t);  
    char *arr[t]; 

    for(i = 0; i < t; i++){
        scanf("%d %d", &a, &b);
        if(a > b){
            arr[i] = "Go-Jo";  
        } else {
            arr[i] = "Bi-Pay"; 
        }
    }

    for(i = 0; i < t; i++){  

            printf("Case #%d: %s\n", i + 1, arr[i]);
    }
    
    return 0;
}