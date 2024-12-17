#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int sum(char x[100][10], int a, int b)
{
    int i = a - 1;
    int total = 0;
    while (i < b)
    {
        total += atoi(x[i]);

        i++;
    }
  
    return total;
}
int elementExists(int arr[], int size, int target) {
    int n = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            n++;; // Element found
        }
    }
      printf("- %d\n", target);
    return n; // Element not found
}

int areArraysEqual(int arr1[], int size1, int arr2[], int size2)
{
    // If sizes are different, they can't be equal
    if (size1 != size2)
    {
        return 0; // Arrays are not equal
    }

    // Compare each element
    for (int i = 0; i < size1; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return 0; // Found a difference
        }
    }
    return 1; // Arrays are equal
}

int main()
{
    int T, fake, i, ht, hi, hi2, yi, yi2;
    scanf("%d", &T);
    char store[T][T][10000];
    int pj[T];
    for (hi = 0; hi < T; hi++)
    {
        for (hi2 = 0; hi2 < T; hi2++)
        {
            scanf("%s", store[hi][hi2]);
        }
    }
    int sumx, sumy;
    int storey[T][T];
    int storex[T][T];

    for (hi = 0; hi < T; hi++)
    {
        for (hi2 = 0; hi2 < T; hi2++)
        {
            storey[hi2][hi] = atoi(store[hi][hi2]);
        }
    }
    for (hi = 0; hi < T; hi++)
    {
        for (hi2 = 0; hi2 < T; hi2++)
        {
            storex[hi][hi2] = atoi(store[hi][hi2]);
        }
    }

    int mo = 0;
    int yay = 1;

    for (hi = 0; hi < T; hi++)
    {
         for (hi2 = 0; hi2 < T; hi2++)
        {
            if(elementExists(storex[hi], T, storex[hi][hi2]) > 1){
                yay = 0; 
                break;
            }
        }
    }
      for (hi = 0; hi < T; hi++)
    {
         for (hi2 = 0; hi2 < T; hi2++)
        {
            if(elementExists(storey[hi], T, storey[hi][hi2]) > 1){
                yay = 0; 
                break;
            }
        }
    }
    if (yay)
    {

        printf("Yay\n");
    }
    else
    {
        printf("Nay\n");
    }
    return 0;
}

/*

*/
