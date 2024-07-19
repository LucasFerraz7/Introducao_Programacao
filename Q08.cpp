#include <iostream>
#include <clocale>

using namespace std;

int main () {
	setlocale(LC_ALL,"Portuguese");
	float numero;
	cout<<"Informe um numero:";
	cin>>numero;
	
	if (numero < 0) {
		numero *= -1; 
	}
			
	cout<<"O modulo do numero informado é: ";
	cout<<numero;	
		
	return 0;
}
