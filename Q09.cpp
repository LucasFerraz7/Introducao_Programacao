#include <iostream>
#include <clocale>

using namespace std;

int main () {
	setlocale(LC_ALL,"Portuguese");
	int numero;
	cout<<"Informe um numero:";
	cin>>numero;
	
	if (numero % 2 == 0)
		cout<<"Par"<<endl;
	else
		cout<<"Impar"<<endl;
		
	return 0;
}
