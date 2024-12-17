#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int team_counts[101] = {0};  // Initialize an array to count members in each team
    int incomplete_teams = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int shirt_number;
            scanf("%d", &shirt_number);
            team_counts[shirt_number]++;
        }
    }

    for (int i = 1; i <= N; i++) {
        if (team_counts[i] < N) {
            incomplete_teams++;
        }
    }

    printf("%d\n", incomplete_teams);

    return 0;
}

