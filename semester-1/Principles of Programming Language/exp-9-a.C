#include <stdio.h>
struct product
{
    char itemName[30];
    int qty;
    float price;
    float amount;
};
/*readItem()- to read values of item and calculate total amount*/
void readItem(struct product *i)
{
    /*read values using pointer */
    printf("Enter product name: ");
    gets(i->itemName);
    printf("Enter price:");
    scanf("%f", &i->price);
    printf("Enter quantity: ");
    scanf("%d", &i->qty);
    /*calculate total amount of all quantity */
    i->amount = (float)i->qty * i->price;
}
/*printItem() - to print values of item*/
void printItem(struct product *i)
{
    /*print item details */
    printf("\nName: %s", i->itemName);
    printf("\nPrice: %f", i->price);
    printf("\nQuantity: %d", i->qty);
    printf("\nTotal Amount: %f", i->amount);
}
int main()
{
    struct product itm;    /*declare variable of structure item */
    struct product *pItem; /*declare pointer of structure item */
    pItem = &itm;
    readItem(pItem);
    /*print item */
    printItem(pItem);
    return 0;
}