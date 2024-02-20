#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");

    int quant_num, num, res = 0;

    cout << "Quantos números você quer somar ou subtrair? ";
    cin >> quant_num;
    cout<<"\n \n OBS: não escreva caracteres, para SOMAR escreva '+' antes de cada numero e para SUBTRAIR escreva '-'"<<"\n antes de cada numero, para escrever o próximo número aperte a tecla 'enter' \n \n";
    for (int i = 1; i <= quant_num; i++) {
        cout << "Digite o " << i << "° número : ";
        cin >> num;
        res += num ;
    }

    cout << "Resultado: " << res<<endl<<endl;

    return 0;
}
