#include <stdio.h>
union product
{
    char productname[100];
    int priceperunit;
    int qty;
    float amount;
};
int main()
{
    int x, y, i;
    char z;
    union product p, *pointer;
    pointer = &p;

    for (i = 0; i < 1; i++)
    {
        printf("\nEnter product name:");
        scanf("%s", pointer->productname);
        printf("Enter Price per unit: ");
        scanf("%d", &pointer->priceperunit);
        x = pointer->priceperunit;
        printf("Enter the quantity: ");
        scanf("%d", &pointer->qty);
        y = pointer->qty;

        pointer->amount = x * y;
        printf("Displaying all the details..");

        printf("\nPRODUCTNAME:%s", pointer->productname); // this line is not displaying the required output

            printf("\nPRICE PER UNIT:%d", x);
        printf("\nQUANTITY:%d", y);
        printf("\nTOTAL AMOUNT:%f", pointer->amount);
    }
    return 0;
}
