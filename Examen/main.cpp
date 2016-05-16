#include "Student_club.h"
#include <iostream>


using namespace std;

Student_club** club = new Student_club*[100];

void nuevoClub(string p,string v,string s,string t,int cont)
{
    club[cont] = new Student_club(&p,&v,&s,&t);
}

int main()
{

    int opc =0;
    int cont=0;

    do{
        cout<<"1- Nuevo Club"<<endl;
        cout<<"2- Imprimir Estudiantes"<<endl;
        cin>>opc;

        switch(opc){
        case 1:
            cont++;
            nuevoClub("","","","",cont);
            break;
        case 2:
            break;
        }
    }while(opc!=0);
    return 0;
}
