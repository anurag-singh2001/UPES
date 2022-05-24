#include <stdio.h>

int main()
{
    int r;
    float N, c, S;
    FILE* ptr;
    FILE* ptr1;
    char ch;
 
   
    ptr = fopen("test.txt", "r");
    ptr1 = fopen("output.txt","w");
 
    if (NULL == ptr) {
        printf("file can't be opened \n");
    }
    
    while (feof(ptr)); {
        for(int i=0;i<10;i++){
 
        fscanf(ptr, "%f", &c);
        fscanf(ptr, "%d", &r);
        fscanf(ptr, "%f", &N);
        S=c * N * (1 / r);
        printf("%f kbauds", S / 1000);
        fprintf(ptr1,"%f kbauds \n",S/1000);

        }
 
      
    } 
    fclose(ptr);

    return 0;
}
