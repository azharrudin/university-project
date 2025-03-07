#include <stdio.h>
#include <string.h>
FILE *f;
typedef struct _item
{
    char no[10];
    char nama[40];
} Items;
int T;
// void swapPointers( ptr1,  Items** ptr2) {
//     Items *temp = *ptr1;
//     *ptr1 = *ptr2;
//     *ptr2 = temp;
// }
void bubbleSort(Items items[], int T)
{
    int i = 0;
    while (i < T)
    {
        if (i + 1 < T)
        {
            if (strcmp(items[i].nama, items[i + 1].nama) > 0)
            {
                // Items tmp = items[i];
                // items[i] = items[i + 1];
                // items[i + 1] = tmp;
                i = 0;
                continue;
            }
        }
        i++;
    }
    i = 0;
    while (i < T)
    {
        printf("%s %s", items[i].no, items[i].nama);
        i++;
    }
}
void readFile()
{
    f = fopen("testdata.in", "r");
    fscanf(f, "%d\n", &T);
    Items item[T];
    int i = 0;
    while (i < T)
    {
        fscanf(f, "%[^#]#%[^\n]", item[i].no, item[i].nama);
        i++;
    }

    bubbleSort(item, T);
}

int main()
{
    readFile();
}