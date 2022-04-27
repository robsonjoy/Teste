#include <iostream>
using namespace std;
int main(){
    int idade, somaidade, total;
    float peso, somapeso, medpeso, medidade;

    total = 0;
    somapeso = 0;
    somaidade = 0;

    cout << "Diga seu peso: ";
    cin >> peso;

    while (peso != 0)
    {
        cout << "Diga sua idade: ";
        cin >> idade;

        total++;
        somapeso += peso;
        somaidade += idade;

        cout << "Diga seu peso: ";
        cin >> peso;
    }
    medpeso = somapeso / total;
    medidade = somaidade / total;

    cout << "Total de pessoas entrevistadas: " << total << "\n";
    cout << "Média de peso geral: " << medpeso << "\n";
    cout << "Média da idade dos entrevistados: " << medidade << "\n";
    
}