#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Digite a quantidade de notas: ";
    cin >> n;

    double notas[n];
    double soma = 0;
    for (int i = 0; i < n; i++) {
        cout << "Digite a nota " << i+1 << ": ";
        cin >> notas[i];
        soma += notas[i];
    }

    double media = soma / n;
    cout << "Média: " << media << endl;

    double maior = notas[0];
    double menor = notas[0];
    for (int i = 1; i < n; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
        if (notas[i] < menor) {
            menor = notas[i];
        }
    }
    cout << "Maior nota: " << maior << endl;
    cout << "Menor nota: " << menor << endl;

    cout << "Notas informadas: ";
    for (int i = 0; i < n; i++) {
        cout << notas[i] << " ";
    }
    cout << endl;

    cout << "Notas acima da média: ";
    for (int i = 0; i < n; i++) {
        if (notas[i] > media) {
            cout << notas[i] << " ";
        }
    }
    cout << endl;

    cout << "Notas abaixo da média: ";
    for (int i = 0; i < n; i++) {
        if (notas[i] < media) {
            cout << notas[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
