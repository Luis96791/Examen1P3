#include "Student.h"

Student::Student(string* n,int* e,string* c,string* s)
{
    nombre = n;
    edad = e;
    carrera = c;
    sexo = s;
}

string* Student::getNombre(){
    return nombre;
}

int* Student::getEdad(){
    return edad;
}

string* Student::getCarrera(){
    return carrera;
}

string* Student::getSexo(){
    return sexo;
}

void Student::setNombre(string* n){
    nombre = n;
}

void Student::setEdad(int* e){
    edad = e;
}

void Student::setCarrera(string* c){
    carrera = c;
}

Student::~Student()
{
    //dtor
}
