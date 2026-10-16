#include <stdio.h>
int main(void) {
    double principal, rate, years, interest, amount, discount, settlement;
    printf("Enter principal, rate and years: ");
    if (scanf("%lf %lf %lf", &principal, &rate, &years) != 3) return 1;
    interest = principal * rate * years / 100.0;
    amount = principal + interest;
    discount = interest * 0.02;
    settlement = amount - discount;
    printf("%.2f\n", interest);
    printf("%.2f\n", amount);
    printf("%.2f\n", discount);
    printf("%.2f\n", settlement);
    return 0;
}
*/**SAMPLE INPUT:**

100

1

10

**SAMPLE OUTPUT:**

10.00

110.00

0.20

109.80

*/
