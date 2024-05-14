#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main() {
    int year, daycode;
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *months[] = {"", "\n\n\nJANUARY", "\n\n\nFEBRUARY", "\n\n\nMARCH", "\n\n\nAPRIL", "\n\n\nMAY", "\n\n\nJUNE", "\n\n\nJULY", "\n\n\nAUGUST", "\n\n\nSEPTEMBER", "\n\n\nOCTOBER", "\n\n\nNOVEMBER", "\n\n\nDECEMBER"};

    printf("Please enter a year (example: 1999): ");
    scanf("%d", &year);

    daycode = (year + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400) % 7;

    printf("%s\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n", months[1]);
    for (int i = 0; i < daycode * 5; i++) printf(" ");
    for (int day = 1; day <= days_in_month[1]; day++) {
        printf("%2d", day);
        if ((day + daycode) % 7 > 0) printf("   ");
        else printf("\n ");
    }

    for (int month = 2; month <= 12; month++) {
        printf("%s\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n", months[month]);
        daycode = (daycode + days_in_month[month - 1]) % 7;
        for (int i = 0; i < daycode * 5; i++) printf(" ");
        for (int day = 1; day <= days_in_month[month]; day++) {
            printf("%2d", day);
            if ((day + daycode) % 7 > 0) printf("   ");
            else printf("\n ");
        }
    }

    printf("\n");
    return 0;
}
