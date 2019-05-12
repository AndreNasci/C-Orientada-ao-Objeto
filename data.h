// André Augusto César do Nascimento
// 2018001244

#ifndef DATA_H
#define DATA_H

#include <bits/stdc++.h>
using namespace std;

class Data{

	private:
		int dd;
		int	mm;
		int yy;
		
		void incrementa(void);
		
	public:
		Data(){
			dd = 1;
			mm = 1;
			yy = 1990;	
		};
		~Data() {}
		
		Data operator++(void);
		Data operator++(int);
		
		friend istream& operator>>(istream& out, Data& d);
		friend ostream& operator<<(ostream& in, const Data& d);
};

#endif
