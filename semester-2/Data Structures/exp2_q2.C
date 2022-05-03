#include <stdio.h>
#include <stdlib.h>
struct subject {
    int code;
    char sname[30];
};

int main() {
    struct subject *ptr;
    int i, noOfRecords;
    printf("Enter the number of records: ");
    scanf("%d", &noOfRecords);

    ptr = (struct subject *)malloc(noOfRecords * sizeof(struct subject));
    for (i = 0; i < noOfRecords; ++i) {
        printf("Enter the name of the subject and code respectively:\n");
        scanf("%s %d", (ptr + i)->sname, &(ptr + i)->code);
    }

    printf("Displaying Information:\n");
    for (i = 0; i < noOfRecords; ++i)
        printf("%s\t%d\n", (ptr + i)->sname, (ptr + i)->code);

    return 0;
}