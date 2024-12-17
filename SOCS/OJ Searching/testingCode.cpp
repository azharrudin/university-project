#include <stdio.h>
#include <string.h>

struct Student {
    char name[15];
    int score;
};

void bubbleSort(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].score < students[j + 1].score ||
                (students[j].score == students[j + 1].score && strcmp(students[j].name, students[j + 1].name) > 0)) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int findRank(struct Student students[], int n, char searchName[]) {
    bubbleSort(students, n);

    for (int i = 0; i < n; i++) {
        if (strcmp(searchName, students[i].name) == 0) {
            return i + 1;
        }
    }

    return -1; // Return -1 if the name is not found
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int n;
        scanf("%d", &n);
        getchar(); // Consume newline

        struct Student students[1000];

        for (int j = 0; j < n; j++) {
            scanf("%[^#]#%d", students[j].name, &students[j].score);
            getchar(); // Consume newline
        }

        char searchName[15];
        scanf("%[^\n]", searchName);
        getchar(); // Consume newline

        int rank = findRank(students, n, searchName);
        printf("Case #%d: %d\n", i, rank);
    }

    return 0;
}
