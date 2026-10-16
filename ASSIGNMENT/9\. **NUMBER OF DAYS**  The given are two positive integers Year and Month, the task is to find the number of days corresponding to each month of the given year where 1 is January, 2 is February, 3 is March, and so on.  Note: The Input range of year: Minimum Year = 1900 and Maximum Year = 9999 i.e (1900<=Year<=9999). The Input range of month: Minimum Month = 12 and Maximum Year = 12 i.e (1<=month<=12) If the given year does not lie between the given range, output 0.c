#include <stdio.h>
int main(void) {
    int year, month, days;
    printf("Enter year and month: ");
    if (scanf("%d %d", &year, &month) != 2) return 1;
    if (year < 1900 || year > 9999 || month < 1 || month > 12) {
        printf("0\n");
        return 0;
    }
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
                days = 29;
            } else {
                days = 28;
            }
            break;
        default:
            days = 0;
    }
    printf("%d Days\n", days);
    return 0;
}
*/**Sample Input:**

2000

2

**Sample Output:**

29 Days
  */
