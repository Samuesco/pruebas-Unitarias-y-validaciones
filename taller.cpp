//
// Created by Usuario on 11/03/2023.
//
#include <string>
#include "taller.h"
using namespace std;
void taller::agregarelementovector(int num) {

    int existe;
    if((existe = existelemento(num)) == 0 ){
        this->vectornum.push_back(num);
        cout << "El numero " << num << " se agrego con exito\n";
    }
}
void taller::mostrarvector() {
    for (int i = 0; i < this->vectornum.size(); ++i) {
        cout << vectornum[i] << endl ;
    }
}
void taller::sumaryagregar(int num1, int num2) {
    int val1 ,val2,val3, res;
    val1 = existelemento(num1);
    val2 = existelemento(num2);
    if(val1 < 0 || val1 > 1 || val2 < 0 || val2 > 1){
        throw range_error("Valor validaciones invalidas");
    }
    else if(val1 == 1 && val2 == 1){
        res = num1+num2;
        agregarelementovector(res);
        mostrarvector();
    }
}
void taller::eliminarElementovector(int numeroB){
    int ban = 0, i = 0;
    while(ban == 0 && i < this->vectornum.size()){
        if(i > vectornum.size() || i < vectornum.size() ){
            throw range_error("Acceder al indice del vector");
        }
        else {
            if (this->vectornum[i] == numeroB) {
                this->vectornum.erase(vectornum.begin() + i);
                ban = 1;
            }
        }
        i++;
    }
}
int taller:: existelemento(int numId){
    int index = 0, ban = 0;
    while (ban == 0 && index < this->vectornum.size()){
        if(vectornum[index] == numId){
            cout << "El numero " << numId << " se encuentra en el vector\n";
            ban = 1;
        }
        index++;
    }
    return ban;
}
int taller:: producto(int num1, int num2){
    int res = num1 * num2;
    return res;
}
int taller:: restaNegativa(int num1,int num2){
    int res = num1 - num2;
    return res;
}
int  taller:: numerovocales(string cadena){
    int res = 0, index = 0;
    while (index < cadena.size()){
        cadena[index] = tolower(cadena[index]);
        if (res > cadena.size() || res < 0){
            throw domain_error("Respuesta invalida exede el limite de elemtos dentro del string base");
        }
        else if (cadena[index] == 'a' || cadena[index] == 'e' ||cadena[index] == 'i' ||cadena[index] == 'o' ||cadena[index] == 'u'){
            res ++;
        }
        index++;
    }
    if(res < cadena.size()){
        cout << "Hay en total "<< res << "Vocales dentro de la cadena";
    }

    return res ;
}
