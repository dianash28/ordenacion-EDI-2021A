#include <stdio.h>
#define N 10
void ordenacionSeleccion(int arr[N]);
int main()
{
    int arreglo[N];
    int i;
    for (i=0; i<N; i++ )
    {
        printf("arreglo[%d]", i);
        scanf("%d",&arreglo [i]);
    }
    ordenacionSeleccion(arreglo); 
    
 fflush(stdin);
    getchar();
    return 0;
}
void ordenacionSeleccion(int arr[N])
{
    int actual,mover;
    int aux;
    for(actual=0; actual<N-1; actual ++)
    {  
      for(mover=actual+1; mover<N ;mover++)
       {
           if (arr[mover]<arr[actual])
           {
               aux=arr[mover];
               arr[mover]=arr[actual];
               arr[actual]=aux;
           }   
       }
    }
}
