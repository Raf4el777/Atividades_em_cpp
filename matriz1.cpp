#include <iostream>
#include <random>
int linhas = 3;
int colunas = 3;
using namespace std;
void imprimeMatriz(int matriz[3][3]);
void duplicaMatriz(int matriz[3][3]);
void multiplicaLinha(int matriz[3][3]);
void somaColuna(int matriz[3][3]);
int main() {

    
    random_device rd;
    mt19937 gen(rd());
    
    int min = 1;
    int max = 100;
    uniform_int_distribution<> distribuicao(min, max);
    int m, n;

    int matrizA[3][3];
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            
            n = distribuicao(gen);
            m = distribuicao(gen);
            matrizA[i][j] = n * m;
        }
        
    }
    cout<<"matriz a: \n \n";
    imprimeMatriz(matrizA);

    duplicaMatriz(matrizA);

    multiplicaLinha(matrizA);

    somaColuna(matrizA);

    return 0;
}

void imprimeMatriz(int matriz[3][3]){
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout<<matriz[i][j] <<" ";
        }
        
        cout<<endl;
    }
    
}

void duplicaMatriz(int matriz[3][3]){
int matrizb[3][3];
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matrizb[i][j] = matriz[i][j];
        }
    }

    cout << "matriz b: \n \n";
    imprimeMatriz(matrizb);

}

void multiplicaLinha(int matriz[3][3]){

    

int l,k;
cout<<"numero da linha: ";

cin>> l;

l = l - 1;

cout<<"numero de multiplicacao: ";

cin>> k;

cout<<"linha multiplicada: \n \n";

    for (int i = l; i == l; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matriz[i][j] = matriz[i][j] * k;
            cout<<matriz[i][j] <<" ";
        }
   
    }
cout<<endl<<endl;
}


void somaColuna(int matriz[3][3]){

    

int l,k;
cout<<"numero da coluna: ";

cin>> l;

l = l - 1;

cout<<"numero de soma: ";

cin>> k;

cout<<"coluna somada: \n \n";

    for (int i = 0; i < linhas; i++)
    {
        for (int j = l; j == l; j++)
        {
            matriz[i][j] = matriz[i][j] + k;
            cout<<matriz[i][j] <<endl;
        }
   
    }


}