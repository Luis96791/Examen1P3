#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

class Student
{
    private:
        int* edad;
        string *nombre,*carrera,*sexo;
        public:
        Student(string* n,int* e,string* c,string* s);
        string* getNombre();
        int* getEdad();
        string* getCarrera();
        string* getSexo();
        void setNombre(string* n);
        void setEdad(int* e);
        void setCarrera(string* c);
        virtual ~Student();

    protected:
};

#endif // STUDENT_H
