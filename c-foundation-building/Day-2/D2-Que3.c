//
// Created by abina on 01-08-2025.
//
#include <stdio.h>

int main() {
        int days, years, months, remaining_days;

        printf("Enter the number of days = ");
        scanf("%d", &days);

        years = days / 365;
        days = days % 365;

        months = days / 30;
        remaining_days = days % 30;

        printf("%d year %d month and %d days \n", years, months, remaining_days);

        return 0;
}
