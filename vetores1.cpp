#include <iostream>
using namespace std;
bool impares(int vetor[]);

int main(){

    int vetor[20];
    cout<<"informe os numeros do vetor\n";
    for (int i = 0; i < 20; i++)
    {
        cin>> vetor[i];
    }
    
   
    
    if(impares(vetor)){
        cout<<"nao sao pares";
    } else {
        cout<<"sao pares";
    }
    
    
    

    return 0;
}


bool impares(int vetor[]){

    for (int i = 0; i < 20; i++){
        if(vetor [i]% 2 == 1){
            return true;
        } 
    }
    
    return false;
}