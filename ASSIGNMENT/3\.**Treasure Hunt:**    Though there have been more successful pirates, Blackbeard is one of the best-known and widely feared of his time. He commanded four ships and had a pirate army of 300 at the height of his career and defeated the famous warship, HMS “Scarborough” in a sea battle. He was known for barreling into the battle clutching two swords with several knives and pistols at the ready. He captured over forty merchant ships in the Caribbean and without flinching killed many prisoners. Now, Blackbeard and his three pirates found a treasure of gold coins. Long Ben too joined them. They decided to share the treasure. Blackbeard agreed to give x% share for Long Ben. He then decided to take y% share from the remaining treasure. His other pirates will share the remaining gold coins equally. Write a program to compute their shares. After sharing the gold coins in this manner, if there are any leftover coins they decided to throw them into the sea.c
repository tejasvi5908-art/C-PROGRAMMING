#include <stdio.h>
int main(void) {
    long long treasure;
    double x, y;
    long long longBenShare, blackbeardShare, remaining, eachPirateShare;
    printf("Total treasure coins: ");
    if (scanf("%lld", &treasure) != 1) return 1;
    printf("Long Ben share percentage (x): ");
    if (scanf("%lf", &x) != 1) return 1;
    printf("Blackbeard share percentage from remainder (y): ");
    if (scanf("%lf", &y) != 1) return 1;
    if (treasure < 0 || x < 0 || x > 100 || y < 0 || y > 100) {
        printf("Invalid input\n");
        return 1;
    }
    longBenShare = (long long)(treasure * x / 100.0);
    remaining = treasure - longBenShare;
    blackbeardShare = (long long)(remaining * y / 100.0);
    remaining -= blackbeardShare;
    /* The remaining coins are shared equally among Blackbeard's
       three pirates; any indivisible coins are thrown into the sea. */
    eachPirateShare = remaining / 3;
    printf("%lld\n", longBenShare);
    printf("%lld\n", blackbeardShare);
    printf("%lld\n", eachPirateShare);
    return 0;
}

*/**Sample Input:**

729

65

87

**Sample Output:**

473

222

11

*/
