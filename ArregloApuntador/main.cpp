#include <iostream>

using namespace std;

int main()
{
    int tamanio=10;

    int salario[tamanio];
    for(int i=0;i<tamanio;i++){
        salario[i]=i+1;
    }
    int *ptr = salario;
    for(int c = 0;c<tamanio;c++){
        cout<<&ptr[c]<<endl;
    }
    return 0;
}
