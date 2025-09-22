/*
escriba un programa que lea de la entrada estandar dos numeros 
y muestre en la salida estandar su suma, resta, multiplicacion,
y division
*/ 

#include <iostream>     
using namespace std;
int main(){ 
    int n1,n2,suma=0, resta=0,multiplicacion=0,division=0;
    
    cout<<"digita un numero: "; cin>>n1;
    cout<<"digita otro numero: "; cin>>n2;
    
    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1/n2;
    
    cout<<"la suma es: " << suma<<endl;
    cout<<"la resta es: "  << resta<<endl;
    cout<<"la multiplicacion es: "  << multiplicacion<<endl;
    cout<<"la division es: " << division<<endl;
    return 0;

}
