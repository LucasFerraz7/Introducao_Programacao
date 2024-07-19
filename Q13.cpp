#include <iostream>
#include <clocale>

using namespace std;
int main () {
	setlocale(LC_ALL,"Portuguese");
	float valor;
	cout<<"Informe um valor:";
	cin>>valor;
    if (valor > 100.0) {
        valor = valor * 0.95;
    }
    cout<<"Valor Final:"<<valor;
	return 0;
}
