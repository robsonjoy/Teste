#include <iostream>
#include <string>
using namespace std;
int main (){

    int i, j;
    string nome[5], x;

    for ( i = 0; i <= 4; i++)
    {
        cout << "Digite o " << i+1 << "º nome: ";
        cin >> nome[i];
    }
    for ( i = 0; i <= 3; i++)
    {
        for ( j = i + 1; i <= 4; i++)
        {
            if (nome[i] > nome[j])
            {
                x = nome[i];
				nome[i] = nome[j];
				nome[j] = x;
            }

        }

    }
    for (i = 0; i <= 4; i++)
    {
        cout << nome[i] << "\n";
    }



}
