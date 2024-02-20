#include<iostream>
using namespace std;
int main(){
    char sexo;
    float altura, result;
    cout <<"introduza o genero: M (maculino) ou F(feminino) : \n";
    cin >> sexo;
    switch (sexo){

    case 'm':
    case 'M':
        cout <<"introduza altura: \n";
        cin >> altura;
        result = 72.7*altura - 58;
        
        break;

    case 'f':
    case 'F':
        cout <<"introduza altura: \n";
        cin >> altura;
        result = 62.1*altura - 44.7 ;
        
        break;    
    
    default:
    cout <<"erro!!! por favor insira apenas uma letra: M ou F";
        break;
    }

    cout <<"peso ideal: "<< result;

    return 0;
}