#include <iostream>
#include <clocale>
using namespace std;
int main () {
	setlocale(LC_ALL,"Portuguese");
	int dia;
	cout<<"Informe o dia da semana:";
	cin>>dia;
	switch(dia) {
		case 1: "Segunda-feira"
		case 2: "Terca-feira"
		case 3: "Quarta-feira"
		case 4: "Quinta-feira"
		case 5: "Sexta-Feira"
			cout<<"Dia �til"<<endl;
			break;
		case 6: "S�bado"			
		default:
			cout<<"Domingo"<<endl;
	}
	return 0;
}

