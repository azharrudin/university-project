#include<stdio.h>

int main(){
    int range;
    scanf("%d",&range);
    int stringSize;
    long long int num;

    for (int i = 1; i <= range; i++)
    {
        scanf("%d %lld",&stringSize,&num);
        char word[stringSize+1];
        char newWord[stringSize+1];
        scanf("%s", word);
        printf("Case #%d: ", i);
        for (int j = 0; j < stringSize; j++)//akses tiap character di string
        {
            int temp = word[j] + (num % 26);
            while (temp > 122)
            {
                temp -= 26;
            }
            printf("%c", temp);
        }
        printf("\n");
    }
    return 0;
}
