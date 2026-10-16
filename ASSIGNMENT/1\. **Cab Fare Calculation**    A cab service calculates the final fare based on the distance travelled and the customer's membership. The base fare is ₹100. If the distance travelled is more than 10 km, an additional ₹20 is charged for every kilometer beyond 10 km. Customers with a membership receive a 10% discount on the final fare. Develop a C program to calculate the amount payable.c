#include <stdio.h>
int main(void) {
    double distance, fare = 100.0;
    int member;
    printf("Distance: ");
    if (scanf("%lf", &distance) != 1) return 1;
    printf("Member (1 for true, 0 for false): ");
    if (scanf("%d", &member) != 1) return 1;
    if (distance > 10.0) {
        fare += (distance - 10.0) * 20.0;
    }
    if (member == 1) {
        fare *= 0.90;
    }
    printf("Final Fare: Rs.%.2f\n", fare);
    return 0;
}

*/**Sample Input**

Distance: 15

Member: true

**Sample Output**

Final Fare: ₹180

*/
