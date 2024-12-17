#include <stdio.h>

int main() {
    int t,n;
	char input[1001]; 
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        scanf("%d\n", &n);

//        fgets(input, 1001, stdin);
        scanf("%[^\n]", &input); getchar();

        printf("Case #%d: ", i);
        for (int j = 0; j < n; j++) {
            char c = input[j];
            if ((c >= 'a' && c <= 'z')) {
                putchar(c);
            }
        }printf("\n");
    }

    return 0;
}

