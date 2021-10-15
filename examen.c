#include <stdio.h>

#define  N 10
#define  M 2
void pedirClave(int arr[N]);
void pedirNombre(char nom[N]);
void pedirEstaturaYSueldo(float dat[N][M]);
int empleadoMasAlto(float dat[N],int *pos);
void SueldoMenor(float dato[N]);
void imprimir(int arr[N], char nombres[N],float datos[N][M]);
int main()
{
    int arreglo[N];
    char nombres[N];
    float datos[N][M];
    int posicion=-1;

    pedirClave(arreglo);
    pedirNombre(nombres);
    pedirEstaturaYSueldo(datos);
    posicion=empleadoMasAlto(datos, &posicion);
    imprimir( arreglo, nombres, datos);
    fflush(stdin);
    getchar();
    return 0;
}

void pedirClave(int arr[N])
{
    int i;
    for (i=0; i<N; i++ )
    {
        printf("arreglo[%d]", i);
        scanf("%d",&arr[i]);
    }
}

void pedirNombre(char nom[N])
{
    int i;
    for (i=0; i<N; i++ )
    {
        printf("arreglo[%d]", i);
        scanf("%c",&nom[i]);
    }
}

void pedirEstaturaYSueldo(float dat[N][M])
{
    int i,j;
    for (i=0; i<N; i++ )
    {
        for (j=0; j<N; j++ )
        {
            printf("arreglo de estatura y sueldo[%f][%f]", i,j);
             scanf("%f",&dat[i][j]);
        }
    }
}

int empleadoMasAlto(float dat[N],int *pos)
{
    int i;
    int mayor=dat[0];
    for (i=0; i<N ; i++ )
    { 
        if(dat[i]>mayor)
        {
            mayor=dat[i];
            *pos=i;
        }
    }
    return *pos;
}


void SueldoMenor(float dat[N])
 {
    int actual,mover;
    float aux;
    for(actual=0; actual<N-1; actual ++)
    {  
      for(mover=actual+1; mover<N ;mover++)
       {
           if (dat[mover]>dat[actual])
           {
               aux=dat[mover];
               dat[mover]=dat[actual];
               dat[actual]=aux;
           }   
       }
    }
    return;
 }
 void imprimir(int arr[N], char nombres[N],float datos[N][M])
 {
     scanf("[%d][%c][%f][%f]",arr,nombres,datos);
 }
