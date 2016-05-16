#ifndef STUDENT_CLUB_H
#define STUDENT_CLUB_H

#include <iostream>
#include "Student.h"

using namespace std;

class Student_club
{
    private:
        string *presidente, *vicepresidente, *secretario, *tesorero;
    public:
        Student** student;
        Student_club(string *p, string *v, string *s, string *t);
        string* getPresidente();
        string* getVicepresidente();
        string* getSecretario();
        string* getTesorero();
        void setPresidente(string* p);
        void setVicepresidente(string* v);
        void setSecretario(string* s);
        void setTesorero(string* t);
        virtual ~Student_club();

    protected:

    private:
};

#endif // STUDENT_CLUB_H
