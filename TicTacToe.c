#include <stdio.h>
#include <stdlib.h>

char arr[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int main() {
    int player = 1;
    int choice, i;
    char mark;

    do {
        printf("\tTIC TAC TOE\n");
        printf("       |       |      \n");
        printf("   %c   |   %c   |   %c   \n", arr[1], arr[2], arr[3]);
        printf("-------|-------|-------\n");
        printf("   %c   |   %c   |   %c   \n", arr[4], arr[5], arr[6]);
        printf("-------|-------|-------\n");
        printf("   %c   |   %c   |   %c   \n", arr[7], arr[8], arr[9]);

        player = (player % 2) ? 1 : 2;
        printf("Player %d turn : ", player);
        scanf("%d", &choice);
        mark = (player == 1) ? 'X' : 'O';

        if (choice >= 1 && choice <= 9 && arr[choice] == choice + '0')
            arr[choice] = mark;
        else {
            printf("Invalid move!\n");
            continue;
        }

        if (arr[1] == arr[2] && arr[2] == arr[3])
            i = 1;
        else if (arr[4] == arr[5] && arr[5] == arr[6])
            i = 1;
        else if (arr[7] == arr[8] && arr[8] == arr[9])
            i = 1;
        else if (arr[1] == arr[4] && arr[4] == arr[7])
            i = 1;
        else if (arr[2] == arr[5] && arr[5] == arr[8])
            i = 1;
        else if (arr[3] == arr[6] && arr[6] == arr[9])
            i = 1;
        else if (arr[1] == arr[5] && arr[5] == arr[9])
            i = 1;
        else if (arr[3] == arr[5] && arr[5] == arr[7])
            i = 1;
        else if (arr[1] != '1' && arr[2] != '2' && arr[3] != '3' && arr[4] != '4' && arr[5] != '5' && arr[6] != '6' && arr[7] != '7' && arr[8] != '8' && arr[9] != '9')
            i = 0;
        else
            i = -1;

        player++;
    } while (i == -1);


    printf("\tTIC TAC TOE\n");
    printf("       |       |      \n");
    printf("   %c   |   %c   |   %c   \n", arr[1], arr[2], arr[3]);
    printf("-------|-------|-------\n");
    printf("   %c   |   %c   |   %c   \n", arr[4], arr[5], arr[6]);
    printf("-------|-------|-------\n");
    printf("   %c   |   %c   |   %c   \n", arr[7], arr[8], arr[9]);

    if (i == 1)
        printf("Player %d Won!\n", player - 1);
    else
        printf("Game Draw!\n");

    return 0;
}
