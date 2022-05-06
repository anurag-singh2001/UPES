#include<stdio.h>
void FindWaitingTime(int processes[], int n, int bt[], int wt[])
{
    wt[0] = 0;
    for(int i = 1; i < n; i++)
        wt[i] = bt[i-1] + wt[i-1];
}
void FindTurnAroundTime(int processes[], int n, int bt[], int wt[], int tat[])
{
    for(int i =  0; i < n; i++)
        tat[i] = bt[i] + wt[i];
}
void FindAvgTime(int processes[], int n, int bt[])
{
    int wt[n], tat[n], total_wt = 0, total_tat = 0;
    FindWaitingTime(processes, n, bt, wt);
    FindTurnAroundTime(processes, n, bt, wt, tat);
    printf("Processes   Burst Time   Waiting Time   Turn Around Time\n");
    for(int i = 0; i < n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        printf("    %d",(i+1));
        printf("        %d",bt[i]);
        printf("            %d",wt[i]);
        printf("                %d\n",tat[i]);
    }
    int s = (float)total_wt/(float)n;
    int t = (float)total_tat/(float)n;
    printf("Average Waiting Time = %d", s);
    printf("\n");
    printf("Average Turn Around Time = %d", t);
}
int main()
{
    int a;
    printf("Enter the range of processes : ");
    scanf("%d", &a);
    int processes[a];
    printf("Enter the values of processes : ");
    for(int i = 0; i < a; i++)
    {
        scanf("%d", &processes[i]);
    }
    int n = sizeof processes / sizeof processes[0];
    int burst_time[a];
    printf("Enter the values of Burst Time : ");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &burst_time[i]);
    }
    FindAvgTime(processes, n, burst_time);
    return 0;
}
