#include <stdio.h>
int main(void) {
    int roadA, roadB, roadC, carNumber;
    printf("Enter road A, road B, road C and car number: ");
    if (scanf("%d %d %d %d", &roadA, &roadB, &roadC, &carNumber) != 4) return 1;
    if (carNumber % roadA == 0) {
        printf("Car %d goes into road A\n", carNumber);
    } else if (carNumber % roadB == 0) {
        printf("Car %d goes into road B\n", carNumber);
    } else if (carNumber % roadC == 0) {
        printf("Car %d goes into road C\n", carNumber);
    } else {
        printf("No path exists\n");
    }
    return 0;
}
*/
**SAMPLE INPUT:**

243

136

567

17

**SAMPLE OUTPUT:**

Car 1 goes into road B

*/
  
