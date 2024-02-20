#include <iostream>
using namespace std;
int main(){

    int vetor[50];
    int vetor2[50];
    cout<<"informe os numeros do vetor\n";
    for (int i = 0; i < 50; i++)
    {
        cin>> vetor[i];
    }  


    for (int i = 0; i < 50; i++)
    {
        vetor2[i] = vetor[i];
    }

    for (int i = 0; i < 50; i++)
    {
        cout<<"vetor 1: "<<vetor[i] <<"  vetor 2: "<<vetor2[i]<<endl;
    }
    
    return 0;
}