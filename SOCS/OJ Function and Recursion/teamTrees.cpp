#include <stdio.h>

int total = 0;

int totalTree(int tree){
    total += tree;
    return total;
}

int main(){

    int t;
    scanf("%d", &t);

    int totDay;
    for(int i=1; i<=t; i++){
        scanf("%d", &totDay);

        int tree;
        int hasil;
        total = 0;
        for(int j=0; j<totDay; j++){
            scanf("%d", &tree);
            hasil = totalTree(tree);
        }

        printf("Case #%d: %d\n", i, hasil);
    }
    return 0;
}