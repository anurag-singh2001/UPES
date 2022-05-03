#include <stdio.h>
#define MAX 10
void matrix(int graph[][MAX], int v)
{
  for(int r=0;r<v;r++)
    for(int c= 0; c<v;c++)
      {
        printf("Is vertex %d connected to vertex %d(1/0)", r+1,c+1);
        scanf("%d",&graph[r][c]);
      }
}

void print(int graph[][MAX],int v)
{
  printf("\n\t\tADJACENCY MATRIX:\n");
    for(int r=0;r<v;r++)
    {
      for(int c= 0; c<v;c++)
      {
        printf("%d\t",graph[r][c]);
      }
    printf("\n");
    }
}

void out_degree(int graph[][MAX], int v, int vx_out)
{
    int sum =0;
    for(int r=0;r<v;r++)
    {
      if(r!= vx_out-1)
        continue;
      for(int c= 0; c<v;c++)
        {
        sum += graph[r][c];
        }
    }
    printf("\nOut degree of vertex %d is %d\n",vx_out,sum);
} 

void in_degree(int graph[][MAX], int v, int vx_in)
{
    int sum =0;
    for(int r=0; r<v;r++)
    {
      for(int c= 0; c<v;c++)
        {
        if(r!= vx_in-1)
          continue;
        sum += graph[c][r];
        }
    }
    printf("\nIn degree of vertex %d is %d\n",vx_in,sum);
} 

int main()
{
    int graph[MAX][MAX],v,vx_in,vx_out;
    printf("Enter the number of vertices: ");
    scanf("%d",&v);
    matrix(graph,v);
    printf("\nVertex to find in degree of: ");
    scanf("%d",&vx_in);
    in_degree(graph,v,vx_in);
    printf("\nVertex to find out degree of: ");
    scanf("%d",&vx_out);
    out_degree(graph,v,vx_out);
    print(graph,v);
    return 0;
}