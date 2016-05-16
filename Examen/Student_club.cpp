#include "Student_club.h"

Student_club::Student_club(string *p, string *v, string *s, string *t)
{
    p = presidente;
    v = vicepresidente;
    s = secretario;
    t = tesorero;
    student = new Student*[100];
}

string* Student_club::getPresidente()
{
    return presidente;
}

string* Student_club::getVicepresidente()
{
    return vicepresidente;
}

string* Student_club::getSecretario()
{
    return secretario;
}

string* Student_club::getTesorero()
{
    return tesorero;
}

void Student_club::setPresidente(string* p)
{
    presidente = p;
}

void Student_club::setVicepresidente(string* v)
{
    vicepresidente = v;
}

void Student_club::setSecretario(string* s)
{
    secretario = s;
}

void Student_club::setTesorero(string* t)
{
    tesorero = t;
}

Student_club::~Student_club()
{
    //dtor
}
