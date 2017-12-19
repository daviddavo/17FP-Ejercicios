#include <iostream>
#include <assert.h>

using namespace std;

int lecturaConLimites(int a, int b){
	assert(a < b);
	int n;

	cout << "Introduce un número entre " << a << " y " << b << ": ";
	cin >> n;
	while (!(a<=n && n<=b)){
		cout << "Introduce un numero dentro del intervalo: ";
		cin >> n;
	}

	return n;
}

int main(){
	lecturaConLimites(10, 20);
	
	return 0;
}