#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#define SIZE 1007
int id = 1;
struct data {
	char bookid[100];
	char title[100];
	char author[100];
	char isbn[109];
	int page;
	int hashkey;
	
}*hashTable[SIZE+1];
int hashfunction(char str[]){
	int hashkey;
	int i = 0;
	while(str[i] != '\0'){
		hashkey += str[i];
		i++;
	}
	hashkey %= SIZE;
	return hashkey;
	
}
int linearSearch(char *find){
	int i = 0;
	while(i< SIZE){
		
		if( hashTable[i] != NULL && strcmp(hashTable[i]->title, find) == 0){
			return i;
		}
		i++;
	}
	return -1;
}
int linearSearchDel(char find[]){
	int i = 0;
	while(i < SIZE){
		if(hashTable[i] != NULL && strcmp(hashTable[i]->bookid, find) ==0){
			printf("success to delete: %s\n", hashTable[i]->title);
			for (int j = i; j < SIZE; j++) {
                hashTable[j] = hashTable[j + 1];
            }
			
			
			return 1;
		} 
	
		i++;
	}
	return 0;
}
void insertTable(char title[100], char author[100], char isbn[100], int page){
//	if(linearSearch(title) > -1){
//		
//		printf("Title already exist");
//		return;
//	}
	char str[100];
	sprintf(str, "B%04d-%s-%c%c", id++, isbn, title[0], author[0]);
	int hashkey =hashfunction(str);
	struct data *newData = (struct data*)malloc(sizeof(struct data));
	strcpy(newData->title, title);
	strcpy(newData->author, author);
	strcpy(newData->isbn, isbn);
		strcpy(newData->bookid, str);
	newData->hashkey = hashkey;
newData->page = page;
	if(hashTable[hashkey] == NULL){
		hashTable[hashkey] = newData;
	}
	else {
		id = (hashkey+1)%SIZE;
		while(id != hashkey){
			if(hashTable[id] == NULL){
				hashTable[id] = newData;
				return;
			}
			id++;
			id %= SIZE;
		}
		printf("hash table is FULL");
	}
}
void printhashtable(){
	printf("%-35s %-40s %-15s %-19s PAGE\n", "BOOK ID", "BOOK TITLE", "ISBN", "AUTHOR");
	for(int i = 0;i < SIZE;i++){
	
		if(hashTable[i] == NULL) {
			// printf("%-20s %-20s %-20s %-20s\n", "NULL", "NULL", "NULL", "NULL");
		}
		else	printf("%-35s %-40s %-15s %-19s %d\n", hashTable[i]->bookid,  hashTable[i]->title,  hashTable[i]->isbn,  hashTable[i]->author, hashTable[i]->page);
	}
}

int main(){
	

	insertTable("Don't Make Me Think", "Mr. Krug S.", "9780321344755",100);
		insertTable("Agile Project Management With Scrum", "Mr. Ken Schwaber", "9780735619937",100);
	int choice;
	char bookid[100];
	do {
		printhashtable();
		printf("1. insert book\n2. delete books \n>>>");
		scanf("%d", &choice); getchar();
		if(choice == 1){
			char title[50], isbn[13], author[25];
			int page;
			printf("Input book title[5-50][unique]: ");
			scanf("%[^\n]", title); getchar();
			int li = linearSearch(title);
			if(li > 0)
				printf("book already exist\n");
			while(strlen(title) < 5 && strlen(title) > 50 || li > -1){
				
				printf("Input book title[5-50][unique]: ");
				scanf("%[^\n]", title); getchar();
				li = linearSearch(title);
				if(li > -1)
					printf("book already exist");
			}
			///
			printf("Input author name[3-25][Mr. |Mrs. ]: ");
			scanf("%[^\n]", author); getchar();
			while(true ){
				if(strstr(author,"Mr. ") || strstr(author,"Mrs. ")) break;
				printf("Input author name[3-25][Mr. |Mrs. ]: ");
				scanf("%[^\n]", author); getchar();
			}
			//// 
			
			printf("Input ISBN[10-13][numeric]: ");
			scanf("%s", isbn); 
			////
			printf("Input page number[>= 16]: ");
			scanf("%d", &page);
			insertTable(title,author,isbn,page);
			continue;
		}
		else if(choice == 2){
			printf("book ID to delete: ");
			scanf("%[^\n]", bookid); 
			linearSearchDel(bookid);
		}
	}
	while(1);
	return 0;
}
