#include <stdio.h>
int main(void) {
    int dollars1, cents1, dollars2, cents2;
    int totalCents, dollars, cents;
    printf("Enter first dollars and cents: ");
    if (scanf("%d %d", &dollars1, &cents1) != 2) return 1;
    printf("Enter second dollars and cents: ");
    if (scanf("%d %d", &dollars2, &cents2) != 2) return 1;
    totalCents = dollars1 * 100 + cents1 + dollars2 * 100 + cents2;
    dollars = totalCents / 100;
    cents = totalCents % 100;
    printf("%d\n%d\n", dollars, cents);
    return 0;
}

*/**Sample Input:**

30

10

140

99

**Sample Output:**

171

9

  */
