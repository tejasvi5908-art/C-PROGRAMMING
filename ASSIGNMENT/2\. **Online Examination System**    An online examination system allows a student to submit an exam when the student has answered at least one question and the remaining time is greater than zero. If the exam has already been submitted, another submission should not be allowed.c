#include <stdio.h>
int main(void) {
    int questionsAnswered, remainingTime, alreadySubmitted;
    printf("Questions Answered: ");
    if (scanf("%d", &questionsAnswered) != 1) return 1;
    printf("Remaining Time: ");
    if (scanf("%d", &remainingTime) != 1) return 1;
    printf("Already Submitted (1 for yes, 0 for no): ");
    if (scanf("%d", &alreadySubmitted) != 1) return 1;
    if (questionsAnswered >= 1 && remainingTime > 0 && alreadySubmitted == 0) {
        printf("Submission Allowed\n");
    } else {
        printf("Submission Not Allowed\n");
    }
    return 0;
}

*/**Sample Input:**

Questions Answered: 45

Remaining Time: 12

Already Submitted: 0

**Sample Output:**

Submission Allowed

&#x20;

*/
