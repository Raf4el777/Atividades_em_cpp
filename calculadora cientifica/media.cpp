#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    
    int quant_num;
    double  num, res = 0;

    cout << "Quantos números você quer para sua média? ";
    cin >> quant_num;

    //condicional numero indesejado

    if (quant_num <= 0)
    {
        cout << "erro você digitou valor negativo";
        return 1;
    }

    cout<<"\n \n OBS: não escreva caracteres, para escrever o próximo número aperte a tecla 'enter' \n \n";

    //loop for para calcular os numeros digitados

    for (int i = 1; i <= quant_num; i++) {
        cout << "Digite o " << i << "° número : ";
        cin >> num;
        res += num ;
    }

    cout << "Resultado: " << res / quant_num <<endl<<endl;

    return 0;
}