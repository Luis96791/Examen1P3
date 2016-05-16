#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

class Student
{
    private:
        int edad;
        string nombre,cargo;
    public:
        Student(string n,int e,string c);
        string getNombre();
        int getEdad();
        string getCargo();
        string getSexo();
        void setNombre(string n);
        void setEdad(int e);
        void setCargo(string c);
        virtual ~Student();

    protected:
};

#endif // STUDENT_H
