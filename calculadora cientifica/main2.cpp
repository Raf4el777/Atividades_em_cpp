#include <iostream>
#include <locale>

using namespace std;

// Função para imprimir o menu de opções
void printMenu() {
    cout << "Escolha a operação que deseja realizar:\n";
    cout << "1. Soma e Subtração\n";
    cout << "2. Multiplicação\n";
    cout << "3. Divisão\n";
    cout << "4. Raiz Quadrada\n";
    cout << "5. Quadrado de um número\n";
    cout << "6. Área de um Círculo\n";
    cout << "7. Média\n";
    cout << "8. Mediana\n";
    cout << "9. Conversão de Quilograma para Grama\n";
    cout << "10. Conversão de Celsius para Fahrenheit\n";
    cout << "Digite o número correspondente à operação desejada: ";
}

// Função para realizar a soma e subtração
void soma_E_subtracao() {
    // Implemente sua lógica aqui
}

// Implemente as demais funções de cálculo da mesma forma

int main() {
    // Habilita acentuação no C++
    setlocale(LC_ALL, "portuguese");

    int z;
    char escolha;

    // Impressão do cabeçalho
    cout << "------------------------------------------------------------\n";
    cout << "                        CALCULADORA                         \n";
    cout << "------------------------------------------------------------\n\n";

    // Loop principal do programa
    while (true) {
        // Imprime o menu
        printMenu();
        cin >> z;

        switch (z) {
            case 1:
                cout << "Escolheu Soma e Subtração\n\n";
                soma_E_subtracao();
                break;
            case 2:
                cout << "Escolheu Multiplicação\n\n";
                multiplicar();
                break;
            // Implemente o restante dos casos de acordo com as opções do menu

            default:
                cout << "Opção inválida!\n";
                break;
        }

        // Pergunta se deseja realizar outra operação
        cout << "Deseja realizar mais uma operação? [S] ou [N]: ";
        cin >> escolha;

        if (escolha == 'n' || escolha == 'N') {
            break;
        } else if (escolha != 's' && escolha != 'S') {
            cout << "Erro: digite [S] para sim ou [N] para não.\n";
            cout << "Deseja realizar mais uma operação? [S] ou [N]: ";
            cin >> escolha;
        }
    }

    return 0;
}
