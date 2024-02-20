/*Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.

Entrada
O arquivo de entrada contém dois valores inteiros.

Saída
O programa deve imprimir um valor inteiro. Este valor é a soma dos valores ímpares que estão entre os valores fornecidos na entrada que deverá caber em um inteiro.*/

#include <iostream>
using namespace std;

int main(){

int x, y, s, i;

s = 0;

cin >> x >> y;

for(i = y + 1; i < x; i++){
    if(i % 2 != 0){
        s = s + i ;
    }
}
cout << s << endl;

return 0;
}