#ifndef STUDENT_CLUB_H
#define STUDENT_CLUB_H

#include <iostream>
#include "Student.h"

using namespace std;

class Student_club
{
    private:
        string nombre_club;
        Student *presidente, *vicepresidente, *secretario, *tesorero;
    public:
        Student_club(string n, Student* p, Student* v, Student* s, Student* t);
        string getNombre();
        Student* getPresidente();
        Student* getVicepresidente();
        Student* getSecretario();
        Student* getTesorero();
        void setNombre(string n);
        void setPresidente(Student* p);
        void setVicepresidente(Student* v);
        void setSecretario(Student* s);
        void setTesorero(Student* t);
        virtual ~Student_club();

    protected:

    private:
};

#endif // STUDENT_CLUB_H
