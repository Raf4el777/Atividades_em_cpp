/*Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.



Entrada
O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela acima.

Saída
O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal.*/
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    int x, y;
    cin>>x>>y;
    switch (x){
    case 1:
        cout<< fixed << setprecision(2)<<"Total: R$ "<<4*y<<".00"<<endl;
        break;
    case 2:
        cout<< fixed << setprecision(2)<<"Total: R$ "<<4.50*y<<endl;
        break;
    case 3:
        cout<< fixed << setprecision(2)<<"Total: R$ "<<5*y<<".00"<<endl;
        break;
    case 4:
        cout<< fixed << setprecision(2)<<"Total: R$ "<<2*y<<".00"<<endl;
        break;
    case 5:
        cout<< fixed << setprecision(2)<<"Total: R$ "<<1.50*y<<endl;
        break;            
    }
    return 0;
}