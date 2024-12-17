#include<stdio.h>

struct Data
{
    char nama[101];
    char nim[10];
    int age;
    char postalCode[7];
    char placeOfBirth[101];
    char dateOfBirth[101];
    char highSchool[101];
    int sibling;
    int height;
    char bank[10];
};

int main(){
    struct Data data[100];

    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        scanf(" %[^\n]", data[i].nama);
        scanf(" %[^\n]", data[i].nim);
        scanf(" %d", &data[i].age);
        scanf(" %[^\n]", data[i].postalCode);
        scanf(" %[^\n]", data[i].placeOfBirth);
        scanf(" %[^\n]", data[i].dateOfBirth);
        scanf(" %[^\n]", data[i].highSchool);
        scanf(" %d", &data[i].sibling);
        scanf(" %d", &data[i].height);
        scanf(" %[^\n]", data[i].bank);
    }

    for(int i=0; i<t; i++){
        printf("Mahasiswa ke-%d:\n", i+1);
        printf("Nama: %s\n", data[i].nama);
        printf("NIM: %s\n", data[i].nim);
        printf("Umur: %d\n", data[i].age);
        printf("Kode Pos: %s\n", data[i].postalCode);
        printf("Tempat Lahir: %s\n", data[i].placeOfBirth);
        printf("Tanggal Lahir: %s\n", data[i].dateOfBirth);
        printf("Almamater SMA: %s\n", data[i].highSchool);
        printf("Jumlah Saudara Kandung: %d\n", data[i].sibling);
        printf("Tinggi Badan: %d\n", data[i].height);
        printf("NOMOR REKENING: %s\n", data[i].bank);
    }

    return 0;
}