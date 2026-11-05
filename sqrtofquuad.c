// D is root , This is mine below one is AI//
/*#include <stdio.h>
#include <stdlib.h.>
#include<conio.h>

int main()
{
    
    float D,b,a,c;
    system("cls");
    
    

    printf("Enter the val of b : ");
    scanf("%f",&b);

    printf("Enter the val of c : ");
    scanf("%f",&c);

    printf("Enter the val of a : ");
    scanf("%f",&a);

    D=((-b)-sqrt(b*b-4*a*c))/2*a;

    printf("%.2f",D);
    return 0;
    


}
    */
   #include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, discriminant, r1, r2, realPart, imagPart;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Error: 'a' cannot be zero for a quadratic equation.\n");
        return 1;
    }

    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0) {
        r1 = (-b + sqrt(discriminant)) / (2 * a);
        r2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root 1 = %.2lf\nRoot 2 = %.2lf\n", r1, r2);
    } else if (discriminant == 0) {
        r1 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root 1 = Root 2 = %.2lf\n", r1);
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and imaginary:\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}