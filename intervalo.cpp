/*Você deve fazer um programa que leia um valor qualquer e apresente uma mensagem dizendo em qual dos seguintes intervalos ([0,25], (25,50], (50,75], (75,100]) este valor se encontra. Obviamente se o valor não estiver em nenhum destes intervalos, deverá ser impressa a mensagem “Fora de intervalo”.

O símbolo ( representa "maior que". Por exemplo:
[0,25]  indica valores entre 0 e 25.0000, inclusive eles.
(25,50] indica valores maiores que 25 Ex: 25.00001 até o valor 50.0000000

Entrada
O arquivo de entrada contém um número com ponto flutuante qualquer.

Saída
A saída deve ser uma mensagem conforme exemplo abaixo.*/
#include <iostream>
using namespace std;
 
int main() {
 
    float x;
    cin>>x;
    if(x <= 25 && x > 0){
        cout<<"Intervalo [0,25]"<<endl;
    } else if(x <= 50 && x > 25){
        cout<<"Intervalo [25,50]"<<endl;
    } else if(x <= 75 && x > 50){
        cout<<"Intervalo [50,75]"<<endl;
    } else if(x <= 100 && x > 75){
        cout<<"Intervalo [75,100]"<<endl;
    } else {
        cout<<"Fora de intervalo"<<endl;
    }
    return 0;
}