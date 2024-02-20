#include <iostream>
using namespace std;


int circulo() {
    double raio;
    double pi = 3.14159;

    cout << "Digite o raio do circulo: ";
    cin >> raio;

    // Calcula a área do círculo
    double area = pi * raio * raio;

    cout << "A area do circulo = " << area << endl <<endl;

    return 0;
}