#include<iostream>
using namespace std;
int main(){
    int num;
    cout <<"digite qualquer numero inteiro: ";
    cin >> num;
    if (num % 2 == 0){
        cout<< "numero par \n";
    } else {
        cout <<"numero impar\n";
    }

    if (num >= 0){
        cout <<"numero positivo\n";
    
    } else {
        cout<<"numero negativo \n";
    }

    if (num < 100){
        cout <<"numero menor que 100\n";
    
    } else if (num == 100) {
        cout<<"numero igual a 100 \n";
    } else {
        cout <<"maior que 100";
    }

    return 0;
}