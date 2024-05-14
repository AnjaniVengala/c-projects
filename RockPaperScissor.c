#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    char you, computer, result;
    srand(time(NULL));
    n = rand() % 100;
    if (n < 33)
        computer = 's';
    else if (n > 33 && n < 66)
        computer = 'p';
    else
        computer = 'z';
    printf("\n\n\n\n\t\t\t\tEnter s for STONE, p for PAPER and z for SCISSOR\n\t\t\t\t\t\t\t");
    scanf("%c", &you);

    if (you == computer)
        result = -1;
    else if ((you == 's' && computer == 'p') || (you == 'p' && computer == 'z') || (you == 'z' && computer == 's'))
        result = 0;
    else
        result = 1;

    if (result == -1) {
        printf("\n\n\t\t\t\tGame Draw!\n");
    } else if (result == 1) {
        printf("\n\n\t\t\t\tWow! You have won the game!\n");
    } else {
        printf("\n\n\t\t\t\tOh! You have lost the game!\n");
    }
    printf("\t\t\t\tYou chose : %c and Computer chose : %c\n", you, computer);

    return 0;
}
