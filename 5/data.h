// André Nascimento
// GitHub: https://github.com/DrumNasci
// Linkedin: linkedin.com/in/andré-nascimento-a01095185

#ifndef DATA_H
#define DATA_H

#include <bits/stdc++.h>
using namespace std;

class Data{

	private:
		int dd;   // dia
		int	mm;   // mês
		int yy;   // ano
		
		void incrementa(void);
		
	public:
		Data(){       // construtor da classe 
			dd = 1;
			mm = 1;
			yy = 1990;	
		};
		~Data() {}    // destrutor da classe
		
		Data operator++(void);   // sobrecarga ++ (pré-incrementado)
		Data operator++(int);    // sobrecarga ++ (pós-incrementado)
		
		friend istream& operator>>(istream& out, Data& d);       // sobrecarga >>
		friend ostream& operator<<(ostream& in, const Data& d);  // sobrecarga <<
};

#endif
