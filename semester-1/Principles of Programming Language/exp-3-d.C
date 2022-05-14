#include <stdio.h>
int main()
{
    float c, f, k;
    printf("Enter temperature in celsius: ");
    scanf("%f", &c);
    f = 1.8 * c + 32.0;
    k = 273.15 + c;
    printf("%0.2f Celsius = %0.2f Fahrenheit\n", c, f);
    printf("%0.2f Celsius = %0.2f Kelvin", c, k);
    return (0);
}
