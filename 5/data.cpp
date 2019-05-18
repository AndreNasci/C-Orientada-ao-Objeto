// André Nascimento
// GitHub: https://github.com/DrumNasci
// Linkedin: linkedin.com/in/andré-nascimento-a01095185

#include "data.h"
#include <bits/stdc++.h>

using namespace std;

// SOBRECARGA DO OPERADOR (>>)
istream& operator>>(istream& in, Data& d){
	while(true){	
    		// repete a leitura do dia enquanto o valor lido for menor que 1 ou maior que 31 
		do{
			cout << "Dia: ";
			in >> d.dd;
		}while(d.dd < 1 || d.dd > 31);    
    
   		 // repete a leitura do mês enquanto o valor lido for menor que 1 ou maior que 12
		do{
			cout << "Mes: ";
			in >> d.mm;
		}while(d.mm < 1 || d.mm > 12);
    
    		// repete a leitura do ano enquanto o valor lido for menor que 0
		do{
			cout << "Ano: ";
			in >> d.yy;
		}while(d.yy < 0);
		
   		 // verifica se a data escolhida não é
   		 //  1. maior que dia 28 no mês de fevereiro, ou
   		 //  2. maior que 30 nos meses pares do primeiro semestre e impares do segundo semestre (meses que só vão até dia 30)
		if((d.mm==2 && d.dd>28) || (((d.mm<=7 && d.mm%2==0) || (d.mm>=8 && d.mm%2==1)) && d.dd > 30)){
			cout << "Data inválida.\n";
			continue;
		}
		else{
			break;   // sai do while (todas as variáveis de data dentro do padrão)
		}
	}		 
	return in;
}

// SOBRECARGA DO OPERADOR (<<)
ostream& operator<<(ostream& out, const Data& d){
	int aux;
	aux = d.mm;
	out << d.dd << " de ";   // imprime o dia
	switch(aux){             // switch para imprimir o nome do mês
		case 1:
			out << "janeiro";
			break;
		case 2:
			out << "fevereiro";
			break;
		case 3:
			out << "março";
			break;
		case 4:
			out << "abril";
			break;
		case 5:
			out << "maio";
			break;
		case 6:
			out << "junho";
			break;
		case 7:
			out << "julho";
			break;
		case 8:
			out << "agosto";
			break;
		case 9:
			out << "setembro";
			break;
		case 10:
			out << "outubro";
			break;
		case 11:
			out << "novembro";
			break;
		case 12: 
			out << "dezembro";
			break;
		default:
			break;
	}
	out << " de " << d.yy;    // imprime o ano
	return out;
}

// INCREMENTA DATA EM 1 DIA
void Data::incrementa(void){
	dd++;	                      	 // incrementa o dia
	if(dd == 29 && mm == 2){     	 // se a data é (29 de fevereiro)
		dd = 1;                  // reseta dia para 1
		mm++;                    // incrementa o mês
	} else if((mm<=7 && mm%2==1) || (mm>=8 && mm%2==0)){  	 // meses ímpares do primeiro semestre
		if(dd == 32){                                    // e pares do segundo semestre (meses que vão até dia 31)
			dd = 1;            	 // reseta dia para 1
			mm++;             	 // incrementa o mês
			if(mm == 13){      	 // se mês = 13
				mm = 1;          // reseta mês para 1
				yy++;            // incrementa o ano
			}
		}
	} else{                		// meses pares do primeiro semestre
		if(dd == 31){      	// e ímpares do segundo semestre (meses que vão até dia 30)
			dd = 1;         // reseta dia para 1
			mm++;           // incrementa o mês
		}
	}
}

// SOBRECARGA DO OPERADOR (++) PRÉ-INCREMENTADO
Data Data::operator++(void){

	incrementa();   // incrementa data

	return *this;
}

// SOBRECARGA DO OPERADOR (++) PÓS-INCREMENTADO
Data Data::operator++(int){
	Data temp;      // cria um objeto temporário de Data 
	temp.dd = dd;   // armazena dia em temp
	temp.mm = mm;   // armazena mês em temp
	temp.yy = yy;   // armazena ano em temp
	
	incrementa();   // incrementa data

	return temp;
}
