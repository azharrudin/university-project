#include <string.h>
#include <stdio.h>
void mergeSort(int arr[], int left, int right)
{
    if (left >= right)
        return; // Base case: single element

    int mid = (left + right) / 2;

    // Recursively sort the left and right halves
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    // Merge the sorted halves
    int temp[right - left + 1]; // Temporary array
    int i = left, j = mid + 1, k = 0;

    while (i <= mid && j <= right)
    {
        temp[k++] = (arr[i] <= arr[j]) ? arr[i++] : arr[j++];
    }
    while (i <= mid)
        temp[k++] = arr[i++];
    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left, k = 0; i <= right; i++, k++)
    {
        arr[i] = temp[k];
    }
}
void mergesort2(int arr[], int left, int right)
{
    if (left >= right)
        return;
    int mid = (left + right) / 2;
    mergesort2(arr, left, mid);
    mergesort2(arr, mid + 1, right);
    int temp[right - left - 1];
    int i = left, j = mid + 1, k = 0;
    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= right)
    {
        temp[k++] = arr[j++];
    }

    for (i = left, k = 0; i <= right; i++, k++)
    {
        arr[i] = temp[k];
    }
    printf("Temp Array: ");

    for (int i = 0; i < (sizeof(temp) / sizeof(temp[0])); i++)
        printf("%d ", temp[i]);
    printf("\n");
}

/**
 *
 */
void mergesort3(int arr[], int left, int right){
    if(left >= right) return;

    int mid = (left+right)/2;
    mergesort3(arr, left, mid);
    mergesort3(arr, mid+1, right);

    int temp[right-left-1];
    int i =left , j = mid+1, k=0;

    while(i <= mid && j <= right){
        if(arr[i] <= arr[j]){
            temp[k] = arr[i];
            i++;
        }
        else {
            temp[k] = arr[j];
            j++;
        }
        k++;
        
    }

    while(i <= mid){
        temp[k++] = arr[i++];
    }
     while(j <= right){
        temp[k++] = arr[j++];
    }

    for(int i =left, k = 0; i <= right;i++,k++ ){
        arr[i] = temp[k];
    }
}
void bubblesort(int arr[], int count){
    int i =0;
    while(i < count){
        if(arr[i] > arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            i=0;
            continue;
        }
        i++;
    }
}
int main()
{
    int lst[11] = {10, 9, 8, 7, 5,20, 6, 4, 3, 2, 1};
    mergesort3(lst,0,(sizeof(lst) / sizeof(lst[0]))-1);
    printf("\nSorted Array: ");
    for (int i = 0; i < (sizeof(lst) / sizeof(lst[0])); i++)
        printf("%d ", lst[i]);
    printf("\n");
}