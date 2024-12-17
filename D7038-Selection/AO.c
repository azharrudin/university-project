#include <stdio.h>
#include <ctype.h>

int main() {
    int T;
    scanf("%d", &T);
    getchar();


    for (int case_num = 1; case_num <= T; case_num++) {
        int N;
        scanf("%d", &N);
        getchar();

        char str[101];
        fgets(str, sizeof(str), stdin);

        char result[101];
        int j = 0;


        for (int i = 0; str[i] != '\0'; i++) {
            if (islower(str[i])) {
                result[j++] = str[i];
            }
        }

        result[j] = '\0';


        printf("Case #%d: %s\n", case_num, result);
    }

    return 0;
}