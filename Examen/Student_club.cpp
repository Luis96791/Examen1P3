#include "Student_club.h"

Student_club::Student_club(Student *p, Student *v, Student *s, Student *t)
{
    p = presidente;
    v = vicepresidente;
    s = secretario;
    t = tesorero;
}

Student* Student_club::getPresidente()
{
    return presidente;
}

Student* Student_club::getVicepresidente()
{
    return vicepresidente;
}

Student* Student_club::getSecretario()
{
    return secretario;
}

Student* Student_club::getTesorero()
{
    return tesorero;
}

void Student_club::setPresidente(Student* p)
{
    presidente = p;
}

void Student_club::setVicepresidente(Student* v)
{
    vicepresidente = v;
}

void Student_club::setSecretario(Student* s)
{
    secretario = s;
}

void Student_club::setTesorero(Student* t)
{
    tesorero = t;
}

Student_club::~Student_club()
{
    //dtor
}
