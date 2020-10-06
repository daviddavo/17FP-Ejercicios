#include <iostream>
#include <assert.h>

using namespace std;

bool esValido(int n){
	assert(n >= 100 && n < 1000);
	int c1 = n % 10, c2 = n /10 % 10, c3 = n / 100 % 10;
	return n == c1 * c1 * c1 + c2 * c2 * c2 + c3 * c3 * c3;
}

int main(){
	
	int x;
	
	while (cin >> x && x > 0){
		cout << esValido(x) << endl;
	}
	
	return 0;
}
