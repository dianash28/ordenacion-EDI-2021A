#include <stdio.h>
#include <string.h>

#define  N 10
#define  M 2

void pedirDatos(int arr[N],char nom[N][20],float dat[N][M]);
int empleadoMasAlto(float dat[N][M]);
void SueldoMenor(int arr[N], char nom[N][20],float dat[N][M]);
void imprimir(int arr[N], char nombres[N][20],float datos[N][M]);


int main()
{
    int arreglo[N];
    char nombres[N][20];
    float datos[N][M];
    int posicion;

    pedirDatos(arreglo,nombres,datos);
    posicion=empleadoMasAlto(datos);
    SueldoMenor(arreglo,nombres,datos);
    imprimir( arreglo, nombres, datos);


    fflush(stdin);
    getchar();
    return 0;
}

void SueldoMenor(int arr[N], char nom[N][20],float dat[N][M])
{
    int i,j;
    float aux;
    int auxi;
    char auxN[20];

    for(i=0; i<N-1; i ++)
    {  
      for(j=0; j<N-1;j++)
       {
           if (dat[j][0]<dat[j+1][0])
           {
               aux=dat[j][0];
               dat[j][0]=dat[j+1][0];
               dat[j+1][0]=aux;

               aux=dat[j][1];
               dat[j][1]=dat[j+1][1];
               dat[j+1][1]=aux;

               auxi=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=auxi;

               strcpy(auxN,nom[j]);
               strcpy(nom[j],nom[j+1]);
               strcpy(nom[j+1],auxN);
           }   
       }
    }
}

void pedirDatos(int arr[N],char nom[N][20],float dat[N][M])
{
    int i;
    for (i=0; i<N; i++ )
    {
        printf("dame la clave[%d]", i);
        scanf("%d", &arr[i]);

        printf("dame el nombre del empleado[%d]", i);
        scanf("%s", &nom[i]);

        printf("dame la estatura[%d]", i);
        scanf("%f", &dat[i][0]);

        printf("dame el sueldo[%d]", i);
        scanf("%f", &dat[i][1]);


    }

}

 void imprimir(int arr[N], char nombres[N][20],float datos[N][M])
 {
    int i;
    printf("clave    nombre    estatura   sueldo\n");
    for (i=0; i<N ; i++ )
    {
        printf("%d\t",arr[i]);
        printf("%s\t",nombres[i]);
        printf("%f\t",datos[i][0]);
        printf("%f\n",datos[i][1]);
    }
 }


int empleadoMasAlto(float dat[N][M])
{
    int i;
    float mayor=dat[0][0];
    int posicion=0;
    for (i=0; i<N ; i++ )
    { 
        if(dat[i][0]>mayor)
        {
            mayor=dat[i][0];
            posicion=i;
        }
    }
    return posicion;
}