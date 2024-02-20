#include <iostream>
using namespace std;

// Função para trocar dois elementos em um array
void troca(float &a, float &b) {
    float temp = a;
    a = b;
    b = temp;
}

// Função para ordenar o array usando Bubble Sort
void bubbleSort(float arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                troca(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Digite o numero de elementos: ";
    cin >> n;

    // Array para armazenar os dados
    float dados[n];
    cout<<"\n \n OBS: não escreva caracteres, para escrever o próximo número aperte a tecla 'enter' \n \n";
    for (int i = 0; i < n; ++i) {
        cin >> dados[i];
    }

    // Ordena o array
    bubbleSort(dados, n);

    float mediana;
    // Verifica se o número de elementos é ímpar ou par
    if (n % 2 == 0) {
        // Se for par, retorna a média dos dois valores do meio
        mediana = (dados[n / 2 - 1] + dados[n / 2]) / 2.0;
        
    } else if(n% 2 == 1) {
        // Se for ímpar, retorna o valor do meio
      
        mediana = dados[n / 2];
    }

    cout << "A mediana dos dados e: " << mediana << endl;

    return 0;
}
