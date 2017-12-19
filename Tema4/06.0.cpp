#include <iostream>
#include <cmath>

using namespace std;

const short int decimales = 2;

double redondeo(double n){
	return ceil( ( n * pow( 10,decimales ) ) - 0.49 ) / pow( 10,decimales );
}

int main(){
	cout << redondeo(3.141592) << endl;
	
	return 0;
}