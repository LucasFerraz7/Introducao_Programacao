#include <iostream>
#include <clocale>

using namespace std;
int main () {
	setlocale(LC_ALL,"Portuguese");
	float preco, venda;
	cout<<"Informe o preco:";
	cin>>preco;

    if (preco < 20.0)
        venda = preco * 1.4;
    else 
        venda = preco * 1.3;
    
    cout<<"Preco de Venda:"<<venda;
	return 0;
}
