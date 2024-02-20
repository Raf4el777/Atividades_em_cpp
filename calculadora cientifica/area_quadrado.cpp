#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    int quad;
    cout<<"Informe o lado do quadrado: ";
    cin>>quad;

    quad = quad * quad;

    cout<<"Área = "<<quad;

    return 0;
}
