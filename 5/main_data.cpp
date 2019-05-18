// André Nascimento
// GitHub: https://github.com/AndreNasci
// Linkedin: linkedin.com/in/andré-nascimento-a01095185

#include <bits/stdc++.h>
#include "data.h"   // classe Data 

using namespace std;

int main(){
	Data d1;               // declara um objeto da classe Data
	
	cin >> d1;             // faz a leitura do objeto (>> sobrecarregado)
	cout << d1 << "\n";    // faz a impressão do objeto (<< sobrecarregado)
	
	for(int i=0; i<366; i++){
		d1++;                         // pós-incrementa d1 366 vezes (volta completa no ano)
		cout << d1 << "\n";
	}
	
	cout << "\ndata++: " << d1++ << "\ndata: " << d1 << "\n++data: " << ++d1 << "\n";  // teste pré e pós-incremento
	
	return 0;
}
