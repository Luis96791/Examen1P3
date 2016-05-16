#include "Student.h"

Student::Student(string n,int e,string c)
{
    nombre = n;
    edad = e;
    cargo = c;
}

string Student::getNombre(){
    return nombre;
}

int Student::getEdad(){
    return edad;
}

string Student::getCargo(){
    return cargo;
}

void Student::setNombre(string n){
    nombre = n;
}

void Student::setEdad(int e){
    edad = e;
}

void Student::setCargo(string c){
    cargo = c;
}

Student::~Student()
{
    //dtor
}
