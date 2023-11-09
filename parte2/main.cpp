#include <iostream>
#include<string>

using namespace std;

//Ej1: Operaciones Basicas
int suma(int num1, int num2) {
    return num1 + num2;
}

//Ej2: Gestion de Estudiantes
class Estudiante {
public:
    string nombre;
    int edad;
    string grado;

    void mostrar_info() {
        cout << "Nombre: " << nombre << ", Edad: " << edad << ", Grado: " << grado << endl;
    }
};

//Ej3: Optimización de Memoria
void intercambiar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    //Ej1: Operaciones Basicas
    cout << "--------------------------------" <<endl;
    cout << "Ejercicio 1: Operaciones Basicas" << endl;
    cout << "--------------------------------" <<endl;
    int num1, num2;
    cout << "Ingrese dos numeros: " <<endl;
    cin >> num1;
    cin >> num2;
    int resultado = suma(num1, num2);
    cout << "La suma es: " << resultado << endl;
    //Fin de Ej1: Operaciones Basicas

    //Ej2: Gestion de Estudiantes
    cout << "\n--------------------------------" <<endl;
    cout << "Ejercicio 2: Gestion de Estudiantes" << endl;
    cout << "--------------------------------" <<endl;
    Estudiante estudiante1;
    estudiante1.nombre = "Jose Carlos";
    estudiante1.edad = 21;
    estudiante1.grado = "Primero";
    cout << "Se ha creado un estudiante" << endl;
    estudiante1.mostrar_info();
    //Fin de Ej2: Gestion de Estudiantes

    //Ej3: Optimización de Memoria
    cout << "\n--------------------------------" <<endl;
    cout << "Ejercicio 3: Optimizacion de Memoria" << endl;
    cout << "--------------------------------" <<endl;
    int x = 5, y = 10;
    intercambiar(&x, &y);
    cout << "Despues del intercambio: x=" << x << ", y=" << y << endl;
    //Fin de Ej3: Optimización de Memoria

    return 0;
}
