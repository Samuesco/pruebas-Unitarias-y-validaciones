//
// Created by Usuario on 11/03/2023.
//

#ifndef P_ORIENTADA_A_OBJETOS_TALLER_H
#define P_ORIENTADA_A_OBJETOS_TALLER_H
#include <iostream>
#include <vector>
#include <stdexcept>
using std::string;
using std::vector;


class taller {
private:
   vector<int> vectornum;
public:
    taller() = default;
    void agregarelementovector(int num);
    void eliminarElementovector(int numeroB);
    int existelemento(int numId);
    void mostrarvector();
    void sumaryagregar(int num1,int num2);
    int producto(int num1, int num2);
    int restaNegativa(int num1,int num2);
    int numerovocales(string cadena);
};


#endif //P_ORIENTADA_A_OBJETOS_TALLER_H
