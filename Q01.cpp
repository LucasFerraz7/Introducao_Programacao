#include <iostream>
#include <clocale>
using namespace std;
int main () {
	setlocale(LC_ALL,"Portuguese");
	int dia;
	cout<<"Informe o dia da semana [1..7]:";
	cin>>dia;
	switch(dia) {
		case 1:
			cout<<"Segunda-feira"<<endl;
			break;
		case 2:
			cout<<"Ter�a-feira"<<endl;
			break;
		case 3:
			cout<<"Quarta-feira"<<endl;
			break;
		case 4:
			cout<<"Quinta-feira"<<endl;
			break;
		case 5:
			cout<<"Sexta-feira"<<endl;
			break;
		case 6:
			cout<<"Sábado"<<endl;
			break;
		case 7:
			cout<<"Domingo"<<endl;
			break;			
		default:
			cout<<"Dia inv�lido!"<<endl;
	}
	return 0;
}
