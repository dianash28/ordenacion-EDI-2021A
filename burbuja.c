#include <stdio.h>
#define N 5
void burbuja(int arr[N]);
int main()
{
    int arreglo[N];
    int i;
     for (i=0; i<N; i++ )
    {
        printf("arreglo[%d]", i);
        scanf("%d",&arreglo [i]);
    }
    burbuja(arreglo);
fflush(stdin);
    getchar();
    return 0;
}

void burbuja(int arr[N])
{
    int i;
    int aux;
    int j;
    
    for (j=0; j<N-1; j++ )
    {
        for (i=0; i<N-(j+1); i++ )
        {
             if(arr[i]>arr[i+1])
            {
                  aux=arr[i+1];
                  arr[i+1]=arr[i];
                  arr[i]=aux;
            }
        }
    }
  
return ;

}