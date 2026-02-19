#include <stdio.h>
#include <math.h>

double simple_interest(double P, double R, double T){   
    double SI;
    SI = P*R*T/100;
    return SI;
}
double compound_interest(double P, double R, double T) {
    double A, CI;
    A = P * pow((1 + R / 100), T); 
    CI = A - P;                    
    return CI;
}
int main() {
    double a,b,c, result;
    int choice;
    char cont;   

    do {
    printf("Enter Principle Amount: ");
    scanf("%lf",&a);
    printf("Enter Rate of Interest: ");
    scanf("%lf",&b);
    printf("Enter Time: ");
    scanf("%lf",&c);
    
    printf("\nChoose the type of Interest:\n");
    printf("1. Simple Interest\n");
    printf("2. Compound Interest\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        result = simple_interest(a,b,c);
        printf("\nSimple Interest = %.2lf\n", result);
    } 
    else if (choice == 2) {
        result = compound_interest(a,b,c);
        printf("\nCompound Interest = %.2lf\n", result);
    } 
    else {
        printf("\nInvalid choice! Please enter 1 or 2.\n");
    }
    printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &cont); // note the space before %c to catch newline

    } while (cont == 'y' || cont == 'Y');

    printf("\nProgram exited. Thank you!\n");
    
    return 0;
}
