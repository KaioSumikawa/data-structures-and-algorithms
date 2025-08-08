// Store 4 grades and calculate the average

#include <stdio.h>

int main() {
    float grades[4];
    float sum = 0;
    float average;
    int i;

    for(i = 0; i < 4; i++) {
        printf("Enter grade %d: ", i + 1);
        scanf("%f", &grades[i]);
        sum += grades[i];
    }

    average = sum / 4;
    printf("The avarage grade is: %.2f\n", average);

    return 0;
}

// Add equivalent positions of two arrays

#include <stdio.h>

int main() {
    int A[5], B[5], C[5];
    int i;

    printf("Enter the values for array A:\n");
    for(i = 0; i <  5; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("Enter the values for array B:\n");
    for(i = 0; i < 5; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    for(i = 0; i < 5; i++) {
        C[i] = A[i] + B[i];
    }

    printf("Array C (sum of A and B):\n");
    for(i = 0; i < 5; i++) {
        printf("C[%d] = %d\n", i, C[i]);
    }

    return 0;
}