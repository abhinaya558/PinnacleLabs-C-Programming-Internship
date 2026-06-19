#include <stdio.h>
#include <math.h>

int main() {
    int choice, n, i;
    double num, result, max, min, sum, power;

    do {
        printf("\n=================================================\n");
        printf("            SMART CALCULATOR PRO\n");
        printf("=================================================\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power\n");
        printf("6. Square Root\n");
        printf("7. Percentage\n");
        printf("8. Average\n");
        printf("9. Maximum Number\n");
        printf("10. Minimum Number\n");
        printf("11. Exit\n");
        printf("=================================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("How many numbers? ");
                scanf("%d", &n);

                sum = 0;
                for(i = 1; i <= n; i++) {
                    printf("Enter number %d: ", i);
                    scanf("%lf", &num);
                    sum += num;
                }
                printf("Sum = %.2lf\n", sum);
                break;

            case 2:
                printf("How many numbers? ");
                scanf("%d", &n);

                printf("Enter number 1: ");
                scanf("%lf", &result);

                for(i = 2; i <= n; i++) {
                    printf("Enter number %d: ", i);
                    scanf("%lf", &num);
                    result -= num;
                }
                printf("Result = %.2lf\n", result);
                break;

            case 3:
                printf("How many numbers? ");
                scanf("%d", &n);

                result = 1;
                for(i = 1; i <= n; i++) {
                    printf("Enter number %d: ", i);
                    scanf("%lf", &num);
                    result *= num;
                }
                printf("Product = %.2lf\n", result);
                break;

            case 4:
                printf("How many numbers? ");
                scanf("%d", &n);

                printf("Enter number 1: ");
                scanf("%lf", &result);

                for(i = 2; i <= n; i++) {
                    printf("Enter number %d: ", i);
                    scanf("%lf", &num);

                    if(num == 0) {
                        printf("Division by zero not allowed!\n");
                        break;
                    }

                    result /= num;
                }

                printf("Result = %.2lf\n", result);
                break;

            case 5:
                printf("Enter base number: ");
                scanf("%lf", &num);

                printf("Enter power: ");
                scanf("%lf", &power);

                printf("Result = %.2lf\n", pow(num, power));
                break;

            case 6:
                printf("Enter number: ");
                scanf("%lf", &num);

                if(num >= 0)
                    printf("Square Root = %.2lf\n", sqrt(num));
                else
                    printf("Invalid input!\n");
                break;

            case 7:
                {
                    double obtained, total;
                    printf("Enter obtained marks: ");
                    scanf("%lf", &obtained);

                    printf("Enter total marks: ");
                    scanf("%lf", &total);

                    printf("Percentage = %.2lf%%\n",
                           (obtained / total) * 100);
                }
                break;

            case 8:
                printf("How many numbers? ");
                scanf("%d", &n);

                sum = 0;
                for(i = 1; i <= n; i++) {
                    printf("Enter number %d: ", i);
                    scanf("%lf", &num);
                    sum += num;
                }

                printf("Average = %.2lf\n", sum / n);
                break;

            case 9:
                printf("How many numbers? ");
                scanf("%d", &n);

                printf("Enter number 1: ");
                scanf("%lf", &max);

                for(i = 2; i <= n; i++) {
                    printf("Enter number %d: ", i);
                    scanf("%lf", &num);

                    if(num > max)
                        max = num;
                }

                printf("Maximum Number = %.2lf\n", max);
                break;

            case 10:
                printf("How many numbers? ");
                scanf("%d", &n);

                printf("Enter number 1: ");
                scanf("%lf", &min);

                for(i = 2; i <= n; i++) {
                    printf("Enter number %d: ", i);
                    scanf("%lf", &num);

                    if(num < min)
                        min = num;
                }

                printf("Minimum Number = %.2lf\n", min);
                break;

            case 11:
                printf("Thank You For Using Smart Calculator Pro!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 11);

    return 0;
}
