#include<iostream>
/* Vamos a hacer un programa que nos pida 4 numeros y los guarde para calcular la media*/  /*memoria dinamica*/

int main(){
    char salir;
    int num[4];
    int cont;
    for(cont=0;cont<=3;cont++){
          std::cout<< "introduzca el numero: ",cont,":";
          std::cin>> num[cont];
          }
    //sacamos los numeros guardados
    
    std::cout<< " Has metido los siguientes numeros\n";
    for(cont=0;cont<=3;cont++){
                               std::cout<< num[cont];
                               }
    
    
    std::cin>> salir;
    
}
