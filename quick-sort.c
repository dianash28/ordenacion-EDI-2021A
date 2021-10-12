#include <stdio.h>
#define N 10
void imprimeArreglo(int a[N]);
void quickson(int arr[N], int der, int izq);
int main()
{
    int arreglo[N];
    int i;
    for (i=0; i<N; i++ )
    {
        printf("arreglo[%d]", i);
        scanf("%d",&arreglo [i]);
    }
    quickson(arreglo,0,N-1); 
    imprimeArreglo(arreglo);
    
 fflush(stdin);
    getchar();
    return 0;
}

void quickson(int arr[N], int der, int izq)
{
    int aux;
    //dividir el arreglo
    //seleccionar el pivote 
    //recorrer derecha hasta que encontremos un numer
    //menor o mayor a pivote decrementamos derecha
    //recorrer izquierda hasta que encontremos 
    //un numero mayor a pivote incrementabamos izquierda
    int pivote=izq;//inicializacion de pivote de inicio del indie de izq
   int inicio=izq;
   int fin=der;
   if (inicio>=fin)
   {
       while(der>izq)
       {
            while(der>pivote && arr[der]>=arr[pivote])
            {
                der--;
            }
            if (arr[der]<arr[pivote])
            {
               aux=arr[der];
               arr[der]=arr[pivote];
               arr[pivote]=aux;

               pivote=der;
            }
           while(izq<pivote && arr[izq]<arr[pivote])
           {
               izq++;
           }
           if (arr[izq]>arr[pivote])
           {
                aux=arr[izq];
                arr[izq]=arr[pivote];
                arr[pivote]=aux;

                pivote=izq;
           }
        }
       quickson(arr,inicio,pivote-1);
       quickson(arr,pivote+1,fin);
   }
}


void imprimeArreglo(int a[N])
{
    int i;
    printf(" ");
    for (i=0; i<N; i++ )
    {
        printf("%d",a[i]);
    }
}


//quickson - recursiva
