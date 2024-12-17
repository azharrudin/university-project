struct Instrument

{
	char name[25];
	char nim[15];
	int age;
	struct Instrument *next, *prev;
};

Instrument *head[SIZE], *tail[SIZE];

Instrument *createNode(char name[], char nim[], int age)
{
	Instrument *newNode = (Instrument*)malloc(sizeof(Instrument));
	strcpy(newNode->name, name);
	strcpy(newNode->nim, nim);
	newNode->age = age;
	
	newNode->prev = newNode->next = NULL;
	return newNode;
}
void view()
{
	for (int i = 0; i < SIZE; i++)
	{
		if (head[i] != NULL)
		{
			printf("index %d:", i);
			Instrument *curr = head[i];
			while (curr != NULL)
			{
				printf("%s %d->  ", curr->name, curr->age);
				curr = curr->next;
			}
			puts("");
		}
	}
}


void pop(char name[])
{
	int index = hash(name);
	if (head[index] == NULL)
	{
		puts("Table Empty.");
		return;
	}
	
	if (strcmp(head[index]->name, name) == 0)
	{
		if (head[index] == tail[index])
		{
			free(head[index]);
			head[index] = tail[index] = NULL;
			return;
		}
		Instrument *temp = head[index];
		head[index] = head[index]->next;
		head[index]->prev = NULL;
		free(temp);
		temp = NULL;
	}
	
	else if (strcmp(tail[index]->name, name) == 0)
	{
		Instrument *temp = tail[index];
		tail[index] = tail[index]->next;
		tail[index]->prev = NULL;
		free(temp);
		temp = NULL;
	}
	
	else
	{
		Instrument *temp = head[index]->next;
		while(strcmp(temp->name, name) != 0)
		{
			temp = temp->next;
		}
		
		if (temp == NULL)
		{
			puts("Not Found");
			return;
		}
		
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		free(temp);
		temp = NULL;
		
	}
}

int hash(char name[])
{
	int sum = 0;
	//doni
	//i = 0; i < 4; i++
	for (int i = 0; i < strlen(name); i++)
	{
		sum+=name[i];
	}
	sum %= SIZE;
	return sum;
}

void insert(Instrument *newNode)
{
	int index = hash(newNode->name);
	
	if (head[index] == NULL)
	{
		head[index] = tail[index] = newNode;
		return;
	}
	
	if (newNode->age < head[index]->age)
	{
		newNode->next = head[index];
		head[index]->prev = newNode;
		head[index] = newNode;
	}
	else if (newNode->age >= tail[index]->age)
	{
		tail[index]->next = tail[index];
		tail[index]->prev = newNode;
		tail[index] = newNode;
 	}
 	else
 	{
 		Instrument *curr = head[index]->next;
		while(newNode->age >= curr->age)
		{
			curr = curr->next; 	
		}	
		curr->prev->next = newNode;
		newNode->prev = curr->prev;
		newNode->next = curr;
		curr->prev = newNode;
	}
}

