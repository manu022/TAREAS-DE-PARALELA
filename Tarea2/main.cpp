/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: root
 *
 * Created on 28 de abril de 2019, 19:11
 */

#include <cstdlib>
#include <iostream>
#include "funciones.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int numero=100000;
    int A[numero];
    llenararreglo(A, numero);
    cout<<"Se ha llenado el arreglo..."<<endl;
    cout<<".................."<<endl;
    cout<<"Promedio :"<<promedio(A, numero)<<endl;
    cout<<"Varianza :"<<varianza(A, numero)<<endl;
    cout<<"Desviación Estándar :"<<desviacionestand(A, numero)<<endl;
    return 0;
}

