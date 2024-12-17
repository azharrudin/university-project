#include <stdio.h>
#include <stdlib.h>

#include <string.h>

FILE *f;
#define TRUE 1
typedef struct ObjectData
{
    char location1[100];
    char city[100];
    char price[10];
    char rooms[10]; // pakai char karena %d tidak dapat terscan
    char bathrooms[10];
    char carparks[10];
    char type[100];
    char furnish[100];
} ObjectData;

ObjectData *data = (ObjectData *)malloc(1 * sizeof(ObjectData));
int count = 0;
void openFile()
{
    f = fopen("file.csv", "r");
}

void readCSV()
{

    int i = 0;
    while (fscanf(f, "\n%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]", data[i].location1, data[i].city, data[i].price, data[i].rooms, data[i].bathrooms, data[i].carparks, data[i].type, data[i].furnish) == 8)
    {
        i++;
        data = (ObjectData *)realloc(data, (i + 2) * sizeof(ObjectData));
    }
    count = i;
}
void printCSV(int max)
{
    int i = 0;
    while (i < count)
    {

        for (int g = 0; g < 40; g++)
            printf("----");
        if (i == 0)
        {
            /* print headers lines */
            printf("\n %-15s %-20s %-20s %-10s %-10s %-10s %-10s %-5s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
        }
        else
        {
            printf("\n %-15s %-20s %-20s %-10s %-10s %-10s %-10s %-5s\n", data[i].location1, data[i].city, data[i].price,
                   data[i].rooms, data[i].bathrooms, data[i].carparks, data[i].type, data[i].furnish);
        }
        i++;
        if (i > max)
            break;
    }
}
void searchCSV(char *column, char *value)
{
    int i = 0;
    printf("\n %-15s %-20s %-20s %-10s %-10s %-10s %-10s %-5s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
    int found = 0;
    while (i < count)
    {
        char tmp[100];
        if (strcmp(column, "location") == 0)
            strcpy(tmp, data[i].location1);
        if (strcmp(column, "city") == 0)
            strcpy(tmp, data[i].city);
        if (strcmp(column, "price") == 0)
            strcpy(tmp, data[i].price);
        if (strcmp(column, "rooms") == 0)
            strcpy(tmp, data[i].rooms);
        if (strcmp(column, "bathrooms") == 0)
            strcpy(tmp, data[i].bathrooms);
        if (strcmp(column, "carparks") == 0)
            strcpy(tmp, data[i].carparks);
        if (strcmp(column, "type") == 0)
            strcpy(tmp, data[i].type);
        if (strcmp(column, "furnish") == 0)
            strcpy(tmp, data[i].furnish);
        if (strcmp(tmp, value) == 0)
        {
            found++;
            for (int g = 0; g < 40; g++)
            {
                printf("----");
            }

            printf("\n %-15s %-20s %-20s %-10s %-10s %-10s %-10s %-5s\n", data[i].location1, data[i].city, data[i].price,
                   data[i].rooms, data[i].bathrooms, data[i].carparks, data[i].type, data[i].furnish);
        }

        i++;
    }
    if (found < 1)
    {
        printf("not found\n");
    }
    for (int g = 0; g < 40; g++)
        printf("----");
}
void sortCSV(char *column, char *modes)
{
    /**
     * pakai bubbles sorting O(n^2)
     */
    printf("%d", count);
    for (int i = 0; i < count - 1; i++)
    {
        int swapped = 0;

        for (int j = 0; j < count - i - 1; j++)
        {
            int b1, b2;
            if (strcmp(column, "price") == 0)
            {
                b1 = atoi(data[j].price);
                b2 = atoi(data[j + 1].price);
            }
            else if (strcmp(column, "rooms") == 0)
            {
                b1 = atoi(data[j].rooms);
                b2 = atoi(data[j + 1].rooms);
            }
            else if (strcmp(column, "carparks") == 0)
            {
                b1 = atoi(data[j].carparks);
                b2 = atoi(data[j + 1].carparks);
            }
            else if (strcmp(column, "carparks") == 0)
            {
                b1 = atoi(data[j].carparks);
                b2 = atoi(data[j + 1].carparks);
            }
            int condition = strcmp(modes, "ascending") == 0 ? b1 > b2 : b1 < b2;

            if (condition)
            {
                ObjectData temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
                swapped = 1;
            }
        }

        // If no two elements were swapped, the array is already sorted
        if (!swapped)
        {
            break;
        }
    }
    printCSV(8);
}
void exportCSV(char *name)
{
    FILE *file = fopen(name, "w+");
    int i = 0;
    while (i < count)
    {
        fprintf(file,"%s,%s,%s,%s,%s,%s,%s,%s\n", data[i].location1, data[i].city, data[i].price,
               data[i].rooms, data[i].bathrooms, data[i].carparks, data[i].type, data[i].furnish);
        i++;
    }
    fclose(file);
}
int menu()
{
    printf("\nWhat do you want to do?\n");
    printf("1. Display Data\n");
    printf("2. Search Data\n");
    printf("3. Sort Data\n");
    printf("4. Export Data\n");
    printf("5. Exit\n>> ");
    int choice;
    scanf("%d", &choice);
    return choice;
}
int main()
{
    openFile();
    readCSV();

    while (TRUE)
    {
        int choice = menu();
        if (choice == 5)
        {
            break;
        }
        if (choice == 1)
        {
            int max;
            printf("Enter max of number of rows to print? ");
            scanf("%d", &max);
            printCSV(max);
            menu();
        }
        if (choice == 2)
        {
            char column[100];
            char values[100];
            printf("Enter column: ");
            scanf("%s", column);

            printf("Enter value: ");
            scanf("%s", values);
            searchCSV(column, values);
            menu();
        }
        if (choice == 3)
        {
            char column[100];
            char modes[100];
            printf("Enter column: ");
            scanf("%s", column);

            printf("Ascending or descending: ");
            scanf("%s", modes);
            sortCSV(column, modes);
            menu();
        }
          if (choice == 4)
        {
            char filename[100];
            printf("Enter file name: ");
            scanf("%s", filename);;
            strcat(filename,".csv");
            exportCSV(filename);
            printf("done....");
            menu();
        }
          
    }
    return 0;
}