#include <iostream>

using namespace std;

int main()
{
    int num, cont, res=1;

    cout << "Insira o valor: ";
    cin >> num;
    //condicional numero indesejado
    if (quant_num <= 0)
    {
        cout << "erro você precisa digitar um número maior que 0 \n ";
        return 1;
    }
    // loop para calculo do fatorial
    for(cont=1 ; cont<=num ; cont++)
        res *= cont;

    cout << "Fatorial: " << res << endl;

    cout<<"\n \n---------------------------------------------------------------------------\n \n";

    return 0;
}