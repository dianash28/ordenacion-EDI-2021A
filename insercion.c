#include <stdio.h>
#define N 10
void ordenacioninsercion(int arr[N]);
int main()
{
    int arreglo[N];
    int i;
    for (i=0; i<N; i++ )
    {
        printf("arreglo[%d]", i);
        scanf("%d",&arreglo [i]);
    }
    ordenacioninsercion(arreglo);//llamar funcion 
    fflush(stdin);
    getchar();
    return 0;
}
//definicion de la funcion 
void ordenacioninsercion(int arr[N])
{
    int actual,mover;
    int aux;
    for(actual=1; actual<N ; actual ++)
    {
       
      for(mover=actual;mover>0 && arr[mover]<arr[mover-1] ;mover=mover-1)
       {
           //intercambio
           aux=arr[mover];
           arr[mover]=arr[mover-1];
           arr[mover-1]=aux;   
       }
    }
}
