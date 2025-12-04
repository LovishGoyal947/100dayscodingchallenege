#include <stdio.h>
#include <string.h>

void main() {
    char date[20];
    int day, m, year;

    printf("Enter date in format dd/mm/yyyy\n");
    scanf("%d/%d/%d", &day, &m, &year);

    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

    
    printf("%02d-%s-%04d\n", day, months[m - 1], year);

   
}
