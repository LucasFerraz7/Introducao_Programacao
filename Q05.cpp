#include <iostream>
#include <clocale>

using namespace std;
int main () {
	setlocale(LC_ALL,"Portuguese");
	int ano, resto;
	cout<<"Informe o ano:";
	cin>>ano;
	resto = ano % 4;
	if (resto == 0) {
		cout<<ano<<"� um ano bissexto!";
	} else {
		cout<<ano<<"N�o � um ano bissexto!";
	}
	return 0;
}
