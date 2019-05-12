// André Augusto César do Nascimento
// 2018001244

#include <bits/stdc++.h>
#include "data.h"

using namespace std;

int main(){
	Data d1;
	
	cin >> d1;
	cout << d1 << "\n";
	
	
	for(int i=0; i<366; i++){
		d1++;
		cout << d1 << "\n";
	}
	
	cout << "\ndata++: " << d1++ << "\ndata: " << d1 << "\n++data: " << ++d1 << "\n";
	

	return 0;
}
