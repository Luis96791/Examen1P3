#include "Student_club.h"

Student_club::Student_club(string n, Student *p, Student *v, Student *s, Student *t)
{
    n = nombre_club;
    p = presidente;
    v = vicepresidente;
    s = secretario;
    t = tesorero;
}

Student* Student_club::getPresidente()
{
    return presidente;
}

string Student_club::getNombre()
{
    return nombre_club;
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

void Student_club::setNombre(string n)
{
    nombre_club = n;
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
