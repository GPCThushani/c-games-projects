/*
Your local library needs your help! Given the expected and actual return dates
 for a library book, create a program that calculates the fine (if any). 

*/
#include <stdio.h>

int main() {
    int d1, m1, y1; // Returned date
    int d2, m2, y2; // Due date

    // Read the returned date and due date
    scanf("%d %d %d", &d1, &m1, &y1);
    scanf("%d %d %d", &d2, &m2, &y2);

    int fine = 0;

    if (y1 > y2) {
        // Returned in a later year
        fine = 10000;
    } else if (y1 == y2) {
        if (m1 > m2) {
            // Returned in a later month, same year
            fine = 500 * (m1 - m2);
        } else if (m1 == m2 && d1 > d2) {
            // Returned in a later day, same month and year
            fine = 15 * (d1 - d2);
        }
    }

    // Print the calculated fine
    printf("%d\n", fine);

    return 0;
}
/*
Explanation of the Code
Input Parsing:

The program reads two dates:
d1, m1, y1: The actual return date.
d2, m2, y2: The due date.
Conditions:

Case 1: If the return year (y1) is later than the due year (y2), a fixed fine of 10000 is applied.
Case 2: If the return year is the same as the due year:
Case 2a: If the return month (m1) is later than the due month (m2), the fine is calculated as 500 * (m1 - m2).
Case 2b: If the return month is the same as the due month and the return day (d1) is later than the due day (d2), the fine is calculated as 15 * (d1 - d2).
Case 3: If the return date is on or before the due date, no fine is applied (fine = 0).
Output:

The calculated fine is printed.
*/