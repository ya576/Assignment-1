#include <stdio.h>
#include "mylib.h"
#include "arraylib.h"
int main() {
    int choice, num;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Check Armstrong Number\n");
        printf("2. Check Adams Number\n");
        printf("3. Check Prime Palindrome Number\n");
        printf("4. Test Array Functions\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 5) break;
        if (choice >= 1 && choice <= 3) {
            printf("Enter a number: ");
            scanf("%d", &num);
        }
        switch (choice) {
        case 1:
            printf(isArmstrong(num) ? "Armstrong\n" : "Not Armstrong\n");
            break;
        case 2:
            printf(isAdams(num) ? "Adams\n" : "Not Adams\n");
            break;
        case 3:
            printf(isPrimePalindrome(num) ? "Prime Palindrome\n" : "Not Prime Palindrome\n");
            break;
        case 4: {
            int a[] = {3, 1, 4, 1, 5};
            int n = 5;
            displayArray(a, n);
            reverseArray(a, n);
            displayArray(a, n);
            printf("Average = %.2f\n", findAverage(a, n));
            break;
        }
        default:
            printf("Invalid choice!\n");
        }
    } while (choice != 5);
    return 0;
}
