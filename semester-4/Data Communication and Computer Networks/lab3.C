#include<stdio.h>
#include <math.h>
int main()
{

    int length;
    double levels;
    int arr[] = {1, 1, 0, 0, 0, 0, 1, 0}; 
    length = sizeof(arr) / sizeof(int);
    printf("So, array length is:%d\n", length);
    int result = pow(2, length); // 2^levels
    printf("levels are  %d\n", result);

    double Log = log2(result);
    printf("the log2 value is %lf\n", Log);

    double h = 10000;
    double datarate = 2 * h * Log;
    printf("\ndataRATE IS %lf in hertz", datarate);
   

    return 0;
}