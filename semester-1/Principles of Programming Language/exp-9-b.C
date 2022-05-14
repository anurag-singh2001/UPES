#include <stdio.h>
#include <string.h>
struct student_record
{
    int sap;
    int enp;
    char name[20];
    struct Date
    {
        int dd;
        int mm;
        int yyyy;
    } doj, dob;
} emp[50];
int main()
{
    int n;
    printf("enter number of students");
    scanf("%d", &n);
    printf("enter student details\n");
    // storing employee information
    for (int i = 0; i < n; i++)
    {
        printf("enter SAP ID \n");
        scanf("%d", &emp[i].sap);
        printf("enter enrollment number \n");
        scanf("%d", &emp[i].enp);
        printf("enter name \n");
        scanf("%50s", emp[i].name);
        printf("enter date of birth(dd/mm/yyyy) \n");
        scanf("%d/%d/%d", &emp[i].dob.dd, &emp[i].dob.mm, &emp[i].dob.yyyy);
        printf("enter date of joining(dd/mm/yyyy) \n");
        scanf("%d/%d/%d", &emp[i].doj.dd, &emp[i].doj.mm, &emp[i].doj.yyyy);
    }
    for (int i = 0; i < n; i++)
    {
        // printing first employee information
        printf("SAP ID: %d\n", emp[i].sap);
        printf("enrollment number: %d \n", emp[i].enp);
        printf("employee name : %s\n", emp[i].name);
        printf("employee date of joining (dd/mm/yyyy) : %d/%d/%d\n",
               emp[i].doj.dd, emp[i].doj.mm, emp[i].doj.yyyy);
        printf("employee date of birth (dd/mm/yyyy) : %d/%d/%d\n",
               emp[i].dob.dd, emp[i].dob.mm, emp[i].dob.yyyy);
    }
    return 0;
}
