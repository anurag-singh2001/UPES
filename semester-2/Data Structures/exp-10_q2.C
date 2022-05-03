#include <stdio.h>

void matrix(int graph[][10], int v)
{
  for(int r=0;r<v;r++)
    for(int c= 0; c<v;c++)
      {
        printf("Is vertex %d connected to vertex %d(1/0)", r+1,c+1);
        scanf("%d",&graph[r][c]);
      }
}
void undirected(int graph[][10],int v)
{
    int ctr =0;
    for(int r=0;r<v;r++)
    for(int c= 0; c<v;c++)
        if(graph[r][c]==graph[c][r])
            ctr++;
        if(ctr==v*v)
            printf("Undirected graph!");
        else
            printf("Directed graph!");
}

int main()
{
    int graph[10][10],v;
    printf("Enter the number of vertices: ");
    scanf("%d",&v);
    matrix(graph,v);
    undirected(graph,v);
    return 0;
}