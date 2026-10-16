#include <stdio.h>
int main(void) {
    int experience, performance;
    printf("Experience: ");
    if (scanf("%d", &experience) != 1) return 1;
    printf("Performance: ");
    if (scanf("%d", &performance) != 1) return 1;
    if (experience > 7 && performance >= 85) {
        printf("Level: Senior\n");
    } else if (experience >= 3 && experience <= 7 && performance >= 80) {
        printf("Level: Mid-Level\n");
    } else {
        printf("Level: Junior\n");
    }
    return 0;
}
*/**Sample Input**

Experience: 9

Performance: 88

**Sample Output**

Level: Senior
*/
  
