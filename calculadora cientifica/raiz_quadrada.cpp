#include <iostream>
using namespace std;

/*
float raiz_quadrada(float numero);

int main( int argc, char **argv){  
    float numero;
    
    cout<<"Entre com um número positivo por favor : ";
    cin >> numero;
    
    cout<<"A raiz quadrada de "<<numero<<" e "<< raiz_quadrada(numero);

    return 0;
}


float raiz_quadrada (float numero){
    int n;
    float recorre = numero;
    
    for (n = 0; n < 10; ++n){
        recorre = recorre/2 + numero/(2*recorre);
    }
        
            
    return recorre ;    
}
*/



float raiz_quadrada(){

    float num, raiz;

    cout<<"Digite um numero positivo: ";
    cin>> num;

    raiz = num;

    for (int i = 0; i<10; i++){
        raiz = raiz/2 + num/(2*raiz);
    }

    cout<<"raiz = "<<raiz<<endl<<endl;

    return 0;

}
