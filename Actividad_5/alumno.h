#include <string>

using namespace std;

class Alumno {
    private:
        string matricula;
        string nombre;
        int edad;
        string carrera;

    public:
        Alumno();
        Alumno(string matricula, string nombre, int edad, string carrera);
        void setMatricula(string matricula);
        string getMatricula();  
        void setNombre(string nombre);
        string getNombre();
        void setEdad(int edad);
        int getEdad();
        void setCarrera(string carrera);
        string getCarrera();
        void imprimeAlumno();
        void cumpleaños();
};