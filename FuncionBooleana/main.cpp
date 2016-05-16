#include <iostream>

using namespace std;

bool mayorLongitud(char* pal1, char*pal2)
{
    int p=0,p1=0;
    while(pal1[p]!='\0'){p++;}
    while(pal2[p1]!='\0'){p1++;}

    return p>p1 ? true : false;
}

int main()
{
    cout<<mayorLongitud("amarillo","rojo")<<endl;
    return 0;
}
