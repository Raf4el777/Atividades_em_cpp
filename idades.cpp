/*
Faça um algoritmo para ler um número indeterminado de dados, contendo cada um, a idade de um indivíduo. O último dado, que não entrará nos cálculos, contém o valor de idade negativa. Calcular e imprimir a idade média deste grupo de indivíduos.

Entrada
A entrada contém um número indeterminado de inteiros. A entrada será encerrada quando um valor negativo for lido.

Saída
A saída contém um valor correspondente à média de idade dos indivíduos.

A média deve ser impressa com dois dígitos após o ponto decimal.

*/

#include <iostream>
#include <iomanip>
using namespace std;
void idade();
int main(){
   
    idade();

}

void idade(){

    int num = 0, idades = 0, cont = 0;
    float m = 0;

    while (true)
    {
        cin>>num;
        if(num < 0){
            break;
        } else {
            idades += num;
            cont++;
        }

    }
    
    
    m = static_cast<float>(idades) / cont;

    cout <<fixed << setprecision(2) << m <<endl;
}