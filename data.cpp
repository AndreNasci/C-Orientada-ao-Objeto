// André Augusto César do Nascimento
// 2018001244

#include "data.h"
#include <bits/stdc++.h>

using namespace std;


istream& operator>>(istream& in, Data& d){
	int aux=0;
	while(aux == 0){	
		do{
			cout << "Dia: ";
			in >> d.dd;
		}while(d.dd < 1 || d.dd > 31);
		do{
			cout << "Mes: ";
			in >> d.mm;
		}while(d.mm < 1 || d.mm > 12);
		do{
			cout << "Ano: ";
			in >> d.yy;
		}while(d.yy < 0);
		
		if((d.mm==2 && d.dd>28) || (((d.mm<=7 && d.mm%2==0) || (d.mm>=8 && d.mm%2==1)) && d.dd > 30)){
			cout << "Data inválida.\n";
			continue;
		}
		else{
			aux++;
		}
	}		 
	return in;
}

ostream& operator<<(ostream& out, const Data& d){
	int aux;
	aux = d.mm;
	out << d.dd << " de ";
	switch(aux){
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
	out << " de " << d.yy;
	return out;
}

void Data::incrementa(void){
	dd++;	
	if(dd == 29 && mm == 2){ //fevereiro
		dd = 1;
		mm++;
	} else if((mm<=7 && mm%2==1) || (mm>=8 && mm%2==0)){ // meses ímpares do primeiro semestre
		if(dd == 32){                                   // e pares do segundo semestre
			dd = 1;
			mm++;
			if(mm == 13){
				mm = 1;
				yy++;
			}
		}
	} else{              // meses pares do primeiro semestre
		if(dd == 31){    // e ímpares do segundo semestre
			dd = 1;
			mm++;
		}
	}
}

Data Data::operator++(void){

	incrementa();

	return *this;
}

Data Data::operator++(int){
	Data temp;
	temp.dd = dd;
	temp.mm = mm;
	temp.yy = yy;
	
	incrementa();

	return temp;
}


















