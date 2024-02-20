#include <iostream>
using namespace std;

/*
//condicional valor indesejado
    if (quant_num <= 0)
    {
        cout << "erro você digitou valor negativo";
        cout<<"\n \n---------------------------------------------------------------------------\n \n";
        return 1;
    }
*/

int main(){

    int quant_num, num, res = 1;

    cout << "Quantos números você quer multiplicar? ";

    cin >> quant_num;
    //condicional numero indesejado
    if (quant_num < 2)
    {
        cout << "erro você precisa de pelo menos 2 números para multiplicar ";
        return 1;
    }

    cout<<"\n \n OBS: não escreva caracteres, para escrever o próximo número aperte a tecla 'enter' \n \n";

    //loop for para calcular os numeros digitados

    for (int i = 1; i <= quant_num; i++) {
        cout << "Digite o " << i << "° número : ";
        cin >> num;
        res *= num ;
    }

    cout << "Resultado: " << res<<endl<<endl;

    cout<<"\n \n---------------------------------------------------------------------------\n \n";


    return 0;
}
