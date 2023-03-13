#include <iostream>
#include "taller.cpp"
#include <conio.h>
int main() {
    int opc, num1, num2,res;
    string cadena;
    taller* extension = new taller();
    do{
        cout << "1. Agregar numero al vector\n";
        cout << "2. Eliminar numero del vector\n";
        cout << "3. Identificar si existe el numero dentro del vector\n";
        cout << "4. Sumar dos numeros existentes del vector y agregarlo al vector\n";
                /* Esta funcion suma numeros existentes dentro del vector, si el resultado de la suma no existe y ambos
                  numeros hacen parte del vector lo agraga el ressultado de la suma, si uno de los numeros no hace
                  parte del vector no hace nada */
        cout << "5. Multiplicacion de dos numeros mayores que 5\n";
        cout << "6. Suma siempre negativa\n";
        cout << "7. Cantidad de vocales en una cadena\n";
        cout << "0. Salir\n" << endl;

        cin >> opc;

        switch (opc) {
            case 1:
                try {
                    cout << "Ingrese numero: \n ";
                    cin >> num1;
                    if (cin.fail()) {
                        throw runtime_error("Entrada Incorrecta ");
                    }
                    else {
                        extension->agregarelementovector(num1);
                    }
                }catch(const exception& e){
                    cout << "Se presento un error: " << e.what() << endl;
                }
                break;
            case 2:
                try {
                    cout << "Ingrese numero: \n ";
                    cin >> num1;
                    if (cin.fail()){
                        throw runtime_error("Entrada Incorrecta ");
                    }else{
                        extension->eliminarElementovector(num1);
                    }
                }catch (const exception& e){
                    cout << "Se presento un error: " << e.what() << endl;

                }
                break;
            case 3:
                try {
                    cout << "Ingrese numero: \n ";
                    cin >> num1;
                    if(cin.fail()){
                        throw runtime_error("Entrada Incorrecta ");
                    }
                    else {
                        res = extension->existelemento(num1);
                        if(res > 1 || res < 0){
                            throw logic_error("Respuesta invalida");
                        }
                        else if(res == 0) {
                            cout << "No existe el numero dentro del vector";
                        }
                    }
                }catch (const exception& e){
                    cout << "Se presento un error: " << e.what() << endl;
                }
                break;
            case 4:
                try {
                    cout << "Ingrese numero: \n ";
                    cin >> num1;
                    if(cin.fail()){
                        throw runtime_error("Entrada Incorrecta ");
                    }
                    cout << "Ingrese numero: \n ";
                    cin >> num2;
                    if(cin.fail()){
                        throw runtime_error("Entrada Incorrecta ");
                    }
                    else{
                        extension->sumaryagregar(num1, num2);
                    }
                }catch (const exception& e) {
                    cout << "Se presento un error: " << e.what() << endl;
                }
                break;
            case 5:
                try {
                    cout << "Ingrese numero: \n "; cin >> num1;
                    if(cin.fail()){
                        throw runtime_error("Entrada Incorrecta ");
                    }
                    cout << "Ingrese numero: \n "; cin >> num2;
                    if(cin.fail()){
                        throw runtime_error("Entrada Incorrecta ");
                    }
                    if(num1 < 5 || num2 < 5){
                        throw invalid_argument("Argumentos invalidos menores a 5 detectados");
                    }
                    else{
                        res = extension->producto(num1,num2);
                        cout << num1 <<" * " << num2 << " = " << res << endl;
                    }
                }catch (const exception& e) {
                    cout << "Se presento un error: " << e.what() << endl;
                }
                break;
            case 6:
                try {
                    cout << "Ingrese numero: \n ";
                    cin >> num1;
                    if (cin.fail()) {
                        throw runtime_error("Entrada Incorrecta ");
                    }
                    cout << "Ingrese numero: \n ";
                    cin >> num2;
                    if (cin.fail()) {
                        throw runtime_error("Entrada Incorrecta ");
                    }
                    if(num1 > num2){
                        throw invalid_argument("Argumento invalido resta genera numero positivo");
                    }
                    else{
                        res = extension->restaNegativa(num1, num2);
                        cout << num1 <<" - " << num2 << " = " << res << endl;
                    }


                }catch (const exception& e) {
                    cout << "Se presento un error: " << e.what() << endl;
                }
                break;
            case 7:
                try {
                    cout << "Ingrese cadena: ";
                    getline(cin, cadena, '\n');
                    res = extension->numerovocales(cadena);
                }catch (const exception& e) {
                    cout << "Se presento un error: " << e.what() << endl;
                }
                break;
            default :
                break;

        }
        getch(); // Esperar hasta que el usuario presione una tecla limpia pantalla
        system("cls");

    }while(opc != 0);
    return 0;
}
