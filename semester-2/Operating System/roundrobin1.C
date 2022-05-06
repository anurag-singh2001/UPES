#include<stdio.h>
int main()
{
    int i, NOP, Sum = 0, Count = 0, z, Time_Quantum;
    int Waiting_Time = 0, Turn_Around_Time = 0, Arrival_Time[10], Burst_Time[10], Temp[10];
    float Average_Waiting_Time, Average_Turn_Around_Time;
    printf("Enter the Total Number of Process in the System : ");
    scanf("%d", &NOP);
    z = NOP;
    for(i = 0; i < NOP; i++)
    {
        printf("\nEnter Details of the Process[%d]\n", i+1);
        printf("Arrival Time of the Process : ");
        scanf("%d", &Arrival_Time[i]);
        printf("Burst Time of the Process : ");
        scanf("%d", &Burst_Time[i]);
        Temp[i] = Burst_Time[i];
    }
    printf("Enter the Time Quantum for the process : ");
    scanf("%d", &Time_Quantum);
    printf("Process Number \t\t Burst Time \t\t Turn Around Time \t\t Waiting Time ");
    for(Sum = 0, i = 0; z != 0; )
    {
        if(Temp[i] <= Time_Quantum && Temp[i] > 0)
        {
            Sum = Sum + Temp[i];
            Temp[i] = 0;
            Count = 1;
        }
        else if(Temp[i] > 0)
        {
            Temp[i] = Temp[i] - Time_Quantum;
            Sum = Sum + Time_Quantum;
        }
        if(Temp[i] == 0 && Count == 1)
        {
            z--;
            printf("\nProcess No[%d]\t\t%d\t\t\t\t%d\t\t\t%d", i+1, Burst_Time[i], Sum - Arrival_Time[i], Sum - Arrival_Time[i] - Burst_Time[i]);
            Waiting_Time = Waiting_Time + Sum - Arrival_Time[i] - Burst_Time[i];
            Turn_Around_Time = Turn_Around_Time + Sum - Arrival_Time[i];
            Count = 0;
        }
        if(i == NOP - 1)
        {
            i = 0;
        }
        else if(Arrival_Time[i+1] <= Sum)
        {
            i++;
        }
        else
        {
            i = 0;
        }
    }
    Average_Waiting_Time = Waiting_Time * 1.0/NOP;
    Average_Turn_Around_Time = Turn_Around_Time * 1.0/NOP;
    printf("\nAverage Turn Around Time : %f", Average_Waiting_Time);
    printf("\nAverage Waiting Time : %f", Average_Turn_Around_Time);
    return 0;
}

