#include <stdio.h>

int main()
{
    int t, a, b, c, i;
    float h;
    scanf("%d", &t);  
    int arr[t]; 

    for(i = 0; i < t; i++){
        scanf("%d %d %d", &a, &b, &c);
        h = (a*b)/100;
        if(h > (float) c){
            arr[i] = c;  
        } else {
            arr[i] = h; 
        }
    }

    for(i = 0; i < t; i++){  
            printf("Case #%d: %d\n", i + 1, arr[i]);
        }
    
    return 0;
}