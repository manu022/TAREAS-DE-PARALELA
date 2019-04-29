#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;


void llenararreglo(int A[], int n)
{
    srand(time(NULL));
    int numero;
    for (int i=0; i<n; i++)
    {      
        numero=rand();
        A[i]=numero;
    }
}

float promedio(int A[], int n)
{
    float suma=0;
    for (int i=0; i<n; i++ )
    {
        suma+=A[i];
    }
    float promedio=(suma/n);
    return promedio;
}

float varianza(int A[], int n)
{
    float p = promedio(A, n);
    float v=0;
    for (int i=0; i<n; i++)
    {
        v+=pow((A[i]-p), 2.0);
    }
    return v/(n-1);
}

float desviacionestand(int A[], int n)
{
    float desv=sqrt(varianza(A, n));
    return desv;
}