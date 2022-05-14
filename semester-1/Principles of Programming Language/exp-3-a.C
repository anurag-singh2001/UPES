#include <stdio.h>
int main()
{
    float base, height, long_base, short_base, t_height;
    float diagonal1, diagonal2, radius, major_radius, minor_radius;
    float S, R, P, TP;
    float PI = 3.142, E;

    printf("Enter base and height of the Parallelogram: \n ");
    scanf("%f%f", &base, &height);
    P = base * height;

    printf("\n Please Enter long base,short base and height of the trapezium: \n");
    scanf("%f %f %f", &long_base, &short_base, &t_height);
    TP = 0.5 * (long_base + short_base) * t_height;
    printf("Enter diagonals of the given rhombus: \n ");
    scanf("%f%f", &diagonal1, &diagonal2);
    R = 0.5 * diagonal1 * diagonal2;
    printf("Enter radius of the sphere : \n");
    scanf("%f", &radius);
    S = 4 * PI * radius * radius;
    printf(" Enter minor radius of Ellipse : ");
    scanf("%f", &minor_radius);
    printf("\n\n Enter major_radius of Ellipse : ");
    scanf("%f", &major_radius);
    E = PI * minor_radius * major_radius;
    printf("Area of Parallelogram is:%f \n", P);
    printf("\n Area of a trapezium = %f \n", TP);
    printf("\n Area of rhombus is:%f \n", R);
    printf("\n Surface area of sphere is:%f \n", S);
    printf("\nArea of Ellipse= %f", E);
    return 0;
}
