#include<stdio.h>
int main(){
    float numOne, numTwo;
    int choice;
    printf("Enter first number: ");
    scanf("%f", &numOne);
    printf("Enter second number: ");
    scanf("%f", &numTwo);
    printf("\nChoose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    
    switch(choice) {
        case 1:
            printf("Result: %.2f + %.2f = %.2f\n", numOne, numTwo, numOne + numTwo);
            break;
        case 2:
            printf("Result: %.2f - %.2f = %.2f\n", numOne, numTwo, numOne - numTwo);
            break;
        case 3:
            printf("Result: %.2f * %.2f = %.2f\n", numOne, numTwo, numOne * numTwo);
            break;
        case 4:
            if (numTwo != 0)
                printf("Result: %.2f / %.2f = %.2f\n", numOne, numTwo, numOne / numTwo);
            else
                printf("Error! Undefined.");
            break;
        default:
            printf("Invalid choice! Please select 1-4.");
    }
}
