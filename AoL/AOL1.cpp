#include <stdio.h>
#include <string.h>

void capitalize(char *reverse)
{
    int i = 0;
    char news[strlen(reverse) + 1];
    while (reverse[i] != '\0')
    {
        if (reverse[i] >= 'a' && reverse[i] <= 'z') {
            news[i] = reverse[i] - 32; 
        } else {
            news[i] = reverse[i] + 32;
        }
        i++;
    }
    news[i] = '\0'; 
    printf("Capitalized: %s\n", news);
}

void reverse(char *string)
{
    int i = strlen(string) - 1;
    char reversed[i + 2];
    int x = 0;
    while (i >= 0)
    {
        reversed[x] = string[i];
        i--;
        x++;
    }
    reversed[x] = '\0'; 
    printf("Reversed: %s\n", reversed);
    capitalize(reversed); 
}

int main()
{
    char soal[100];
    scanf("%s", soal);
    reverse(soal);
    return 0;
}
// palindrome capitalize soal pertama