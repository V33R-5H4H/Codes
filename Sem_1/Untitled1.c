#include <stdio.h>

struct Cricket {
    char playerName[50];
    char teamName[50];
    float battingAverage;
};

int main() {
    const int numPlayers = 5;
    struct Cricket players[numPlayers];

    printf("Enter details for cricket players:\n");
    for (int i = 0; i < numPlayers; i++) {
        printf("Player %d:\nName: ", i + 1);
        scanf("%s", players[i].playerName);
        printf("Team: ");
        scanf("%s", players[i].teamName);
        printf("Batting Average: ");
        scanf("%f", &players[i].battingAverage);
    }

    float givenAverage;
    printf("\nEnter the minimum batting average to filter players: ");
    scanf("%f", &givenAverage);

    printf("\nPlayers with Batting Average > %.2f:\n", givenAverage);
    for (int i = 0; i < numPlayers; i++) {
        if (players[i].battingAverage > givenAverage)
            printf("Name: %s, Team: %s\n", players[i].playerName, players[i].teamName);
    }

    return 0;
}
