#include <iostream>
#include <clocale>

using namespace std;
int main () {
	setlocale(LC_ALL,"Portuguese");
	int mes;
	cout<<"Informe um n�mero referente a um ";
	cout<<"m�s:";
	cin>>mes;
	switch(mes) {
		case 1:
			cout<<"Janeiro"<<endl;
			break;
		case 2:
			cout<<"Fevereiro"<<endl;
			break;
		case 3:
			cout<<"Mar�o"<<endl;
			break;
		case 4:
			cout<<"Abril"<<endl;
			break;
		case 5:
			cout<<"Maio"<<endl;
			break;
		case 6:
			cout<<"Junho"<<endl;
			break;
		case 7:
			cout<<"Julho"<<endl;
			break;
		case 8:
			cout<<"Agosto"<<endl;
			break;
		case 9:
			cout<<"Setembro"<<endl;
			break;
		case 10:
			cout<<"Outubro"<<endl;
			break;
		case 11:
			cout<<"Novembro"<<endl;
			break;
		case 12:
			cout<<"Dezembro"<<endl;
			break;
		default:
			cout<<"M�s inv�lido!"<<endl;
	}
	return 0;
}
