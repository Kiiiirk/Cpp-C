#include <stdio.h>

 int main()
 {
    int grade1, grade2, grade3, grade4, grade5, average;
    float overall;

    printf("Code      Subject       Grade");
    printf("\n001       English        ");
    scanf("%d", &grade1);
    printf("\n002       Math           ");
    scanf("%d", &grade2);
    printf("\n003       Science        ");
    scanf("%d", &grade3);
    printf("\n004       Physics        ");
    scanf("%d", &grade4);
    printf("\n005       NSTP           ");
    scanf("%d", &grade5);


    average = grade1 + grade2 + grade3 + grade4 + grade5;
    overall = average/5;

    printf("\nAverage: %f", overall);


 return 0;
 }
