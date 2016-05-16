#include "Student_club.h"
#include <iostream>
#include <vector>

using namespace std;

vector<Student_club> club;
vector<Student> student;

void nuevoEstudiante(string nombre, string cargo, int edad)
{
    student.push_back(Student(nombre,edad,cargo));
}

int buscarEstudiante(string n){
    for(int c=0;c<student.size();c++){
        if(student[c].getNombre()==n){
            return c;
        }
    }
    return -1;
}

int main()
{
    int opc =0;
    string nombre_est, cargo_est;
    string nombre, presidente,vicepresidente,secretario,tesorero;
    int edad_est;

    do{
        cout<<"1- Crear Estudiante"<<endl;
        cout<<"2- Crear Club"<<endl;
        cin>>opc;

        switch(opc){
        case 1:
            cout<<"Ingrese Nombre: ";
            cin>>nombre_est;
            cout<<"Ingrese Cargo: ";
            cin>>cargo_est;
            cout<<"Ingrese Edad: ";
            cin>>edad_est;
            nuevoEstudiante(nombre_est,cargo_est,edad_est);
            break;
        case 2:
            cout<<"Nombre del Club: ";
            cin>>nombre;
            cout<<"Presidente: ";
            cin>>presidente;
            cout<<"Vicepresidente: ";
            cin>>vicepresidente;
            cout<<"Secretario: ";
            cin>>secretario;
            cout<<"Tesorero: ";
            cin>>tesorero;
            int pres = buscarEstudiante(presidente);
            int vice = buscarEstudiante(vicepresidente);
            int sec = buscarEstudiante(secretario);
            int tes = buscarEstudiante(tesorero);
            if(pres!=-1 && vice!=-1 && sec!=-1 && tes!=-1){
                club.push_back(Student_club(nombre, &student[pres], &student[vice], &student[sec], &student[tes]));
            }
            break;
        }
    }while(opc!=0);
    return 0;
}
