#include <stdio.h>
int main(void) {
    int units;
    double bill;
    printf("Enter units consumed: ");
    if (scanf("%d", &units) != 1) return 1;
    if (units < 0) {
        printf("Invalid units\n");
        return 1;
    }
    if (units <= 200) {
        bill = units * 0.50;
    } else if (units <= 400) {
        bill = units * 0.65 + 100.0;
    } else if (units <= 600) {
        bill = units * 0.80 + 200.0;
    } else {
        bill = units * 1.25 + 425.0;
    }
    printf("Rs.%.2f\n", bill);
    return 0;
}
*/**Sample Input:**

200

**Sample Output:**

Rs.100
  */

