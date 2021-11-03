#include <iostream>
using namespace std;

int main(){	
	int input_User;

	cout << "Masukkan angka: ";
	cin >> input_User;
	
	if(input_User % 2 == 0){
		cout << input_User << " Adalah angka  genap" << endl;
	}
	else {
		cout << input_User << " Adalah angka ganjil" << endl;
	}
return 0;	
}
