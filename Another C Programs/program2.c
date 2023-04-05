// write a program to take todays date and print tomorrows date
#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *today = localtime(&t);
    today->tm_mday += 1; // add one day
    mktime(today); // normalize time

    printf("Today's date: %d-%02d-%02d\n", today->tm_year + 1900, today->tm_mon + 1, today->tm_mday);
    return 0;
}
