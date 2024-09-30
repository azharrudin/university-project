#include <stdio.h>

int main()
{
    int t, a, b, c, i;

    scanf("%d", &t);  
    int arr[t]; 

    for(i = 0; i < t; i++){
        scanf("%d %d %d", &a, &b, &c);
        if(b + c >= a){
            arr[i] = 1;  
        } else {
            arr[i] = 2; 
        }
    }

    for(i = 0; i < t; i++){  
        if(arr[i] == 1){
            printf("Case #%d: yes\n", i + 1);
        } else if (arr[i] == 2) {
            printf("Case #%d: no\n", i + 1);
        }
    }
    
    return 0;
}