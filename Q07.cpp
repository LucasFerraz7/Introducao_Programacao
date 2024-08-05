//7. Crie um algoritmo/fluxograma/programa que 
//calcule a soma dos elementos em posi��es pares 
//de um array.

#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
	int dado[] = {-3, 0, 8, -1, 13, 7, 34, -6};
	const int tam = sizeof dado/sizeof dado[0];
	
	int soma = 0;
	for (int i = 0; i < tam; i += 2)
		soma += dado[i];

	cout<<"Soma:"<<soma<<endl;
	return EXIT_SUCCESS;	
}
