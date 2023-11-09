#include <iostream>
#include<string>
#include<vector>

using namespace std;

//Ej1: Operaciones Basicas
int suma(int num1, int num2) {
    return num1 + num2;
}

//Ej8: Filtrado de Estudiantes por Grado
class Matregis : public std::runtime_error {
public:
    Matregis() : std::runtime_error("Error: Materia ya registrada.") {}
};

//Ej2: Gestion de Estudiantes
class Estudiante {
public:
    string nombre;
    int edad;
    string grado;
    //Ej5: Registro de Materias
    std::vector<std::string> materias;

    void mostrar_info() {
        cout << "Nombre: " << nombre << ", Edad: " << edad << ", Grado: " << grado << endl;
    }

    //Ej5: Registro de Materias
    void registrar_materia(const std::string& materia) {
        //Ej8: Filtrado de Estudiantes por Grado
        for (const auto& mat : materias) {
            if (mat == materia) {
                throw Matregis();
            }
        }
        materias.push_back(materia);
    }

    //Ej5: Registro de Materias
    void mostrar_materias() {
        std::cout << "Materias registradas:" << std::endl;
        for (const auto& materia : materias) {
            std::cout << "- " << materia << std::endl;
        }
    }

};



//Ej10: Registro de Profesores
class Profesor {
public:
    std::string nombre;
    int edad;
    std::string materia;
    int añosExperiencia;

    void mostrar_info_profesor() {
        std::cout << "Nombre: " << nombre << ", Edad: " << edad << ", Materia: " << materia
                  << ", Años de Experiencia: " << añosExperiencia << std::endl;
    }
};

//Ej3: Optimización de Memoria
void intercambiar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Ej4: Manejo de Excepciones
int dividir(int a, int b) {
    if (b == 0) {
        throw runtime_error("Error: Division por cero.");
    }
    return a / b;
}

//Ej6: Promedio del Estudiante
class RegistroAsistencia {
public:
    std::string fecha;
    std::string estado;

    void mostrar_asistencia() {
        std::cout << "Fecha: " << fecha << ", Estado: " << estado << std::endl;
    }
};

//Ej7: Manejo de Ausencias
class RegistroAusencias {
public:
    std::string fecha;
    std::string estado;

    void mostrar_ausencia() {
        std::cout << "Fecha: " << fecha << ", Estado: " << estado << std::endl;
    }
};

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

    //Ej5: Registro de Materias
        cout << "\n--------------------------------" <<endl;
        cout << "Ejercicio 5: Registro de Materias" << endl;
        cout << "--------------------------------" <<endl;
        estudiante1.mostrar_info();
        estudiante1.registrar_materia("Matematicas");
        estudiante1.registrar_materia("Historia");
        estudiante1.mostrar_materias();
    //Fin de Ej5: Registro de Materias

    //Ej6: Promedio del Estudiante
        cout << "\n--------------------------------" <<endl;
        cout << "Ejercicio 6: Promedio del Estudiante" << endl;
        cout << "--------------------------------" <<endl;
        RegistroAsistencia clase1;
        clase1.fecha = "2023-11-09";
        clase1.estado = "Asistió";

        clase1.mostrar_asistencia();
    //Fin de Ej6: Promedio del Estudiante

    //Ej7: Manejo de Ausencias
        cout << "\n--------------------------------" <<endl;
        cout << "Ejercicio 7: Manejo de Ausencias" << endl;
        cout << "--------------------------------" <<endl;
        RegistroAusencias clase2;
        clase2.fecha = "2023-11-09";
        clase2.estado = "Asistio";

        clase2.mostrar_ausencia();
    //Fin de Ej7: Manejo de Ausencias

    //Ej8: Filtrado de Estudiantes por Grado
        cout << "\n--------------------------------" <<endl;
        cout << "Ejercicio 8: Filtrado de Estudiantes por Grado" << endl;
        cout << "--------------------------------" <<endl;
        try {
            estudiante1.registrar_materia("Matemáticas");
            estudiante1.registrar_materia("Historia");
        } catch (const Matregis& e) {
            cerr << "Excepción atrapada: " << e.what() << endl;
        }
    //Fin de Ej8: Filtrado de Estudiantes por Grado

    //Ej10: Registro de Profesores
        cout << "\n--------------------------------" <<endl;
        cout << "Ejercicio 9: Registro de Profesores" << endl;
        cout << "--------------------------------" <<endl;
        Profesor profesor1;
        profesor1.nombre = "Dr. García";
        profesor1.edad = 40;
        profesor1.materia = "Física";
        profesor1.añosExperiencia = 15;

        profesor1.mostrar_info_profesor();
    //Fin de Ej10: Registro de Profesores


    //    //Ej4: Manejo de Excepciones
//        cout << "\n--------------------------------" <<endl;
//        cout << "Ejercicio 4: Manejo de Excepciones" << endl;
//        cout << "--------------------------------" <<endl;
//        try {
//            int resultado = dividir(10, 0);
//            cout << "Resultado: " << resultado << endl;
//        } catch (const std::runtime_error& e) {
//            cerr << "Excepcion atrapada: " << e.what() << endl;
//        }
//    //Fin de Ej4: Manejo de Excepciones
    return 0;
}
