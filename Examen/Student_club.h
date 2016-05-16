#ifndef STUDENT_CLUB_H
#define STUDENT_CLUB_H

#include <iostream>
#include "Student.h"

using namespace std;

class Student_club
{
    private:
        Student *presidente, *vicepresidente, *secretario, *tesorero;
    public:
        Student_club(Student* p, Student* v, Student* s, Student* t);
        Student* getPresidente();
        Student* getVicepresidente();
        Student* getSecretario();
        Student* getTesorero();
        void setPresidente(Student* p);
        void setVicepresidente(Student* v);
        void setSecretario(Student* s);
        void setTesorero(Student* t);
        virtual ~Student_club();

    protected:

    private:
};

#endif // STUDENT_CLUB_H
