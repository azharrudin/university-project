#include <stdio.h>
#include <string.h>
void quicksort(int arr[], int low, int high){
      if (low >= high) return;

    int pivot = arr[high];
    int i = low, j = high;

    while (i < j) {
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;
        if (i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    quicksort(arr, low, j - 1);
    quicksort(arr, j + 1, high);
}
int main()
{
    int keluarMax, masuk, keluar;
    scanf("%d %d", &masuk, &keluarMax);
    int arr[masuk];
    int x = 0;
    while (x < masuk)
    {
        scanf("%d", &arr[x]);
        x++;
    }
    x = 0;
    while (x < keluarMax)
    {
        scanf("%d", &keluar);
        int i = 0;
        while (i < masuk)
        {
            if (arr[i] == keluar)
            {
                arr[i] = 0;
            }
            i++;
        }
        x++;
    }

    int i = 0;
    // while (i < masuk)
    // {
    //     if ((i + 1) < masuk)
    //     {
    //         if (arr[i + 1] < arr[i])
    //         {
    //             int temp = arr[i];
    //             arr[i] = arr[i + 1];
    //             arr[i + 1] = temp;
    //             i = 0;
    //             continue;
    //         }
    //     }
    //     i++;
    // }
    i = 0;
    quicksort(arr, 0, masuk);
    while (i < masuk)
    {
        printf("%d, ", arr[i]);
        i++;
    }
    
    if (arr[masuk - 1] != 0)
    {
        printf("Maximum number is %d\n", arr[masuk-1]);
    }
    else
        printf("Maximum number is -1\n");
}
