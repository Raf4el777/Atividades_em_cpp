#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");

    int quant_num;
    double num, res;

    cout << "Quantos números você quer dividir? ";
    cin >> quant_num;

    if (quant_num < 2)
    {
        cout << "erro você precisa de pelo menos 2 números para dividir ";
        return 1;
    }
    
    cout<<"\n \n OBS: não escreva caracteres, para escrever o próximo número aperte a tecla 'enter' \n \n";

    cout<<"Digite o 1° número: ";

    cin>>res;

    if(res == 0){
        cout<<"erro divisao por 0 não é permitida";
    }
    


    

    for (int i = 2; i <= quant_num; i++)
    {
        cout<<"Digite o "<<i<<"° número: ";
        cin>>num;
        if (num == 0)
        {
            cout<<"erro divisao por 0 não é permitida";
            return 1;
        }
        res /= num;
    }
    

    cout << "Resultado: " << res<<endl<<endl;



    return 0;
}
