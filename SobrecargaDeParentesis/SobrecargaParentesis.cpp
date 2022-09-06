#include<iostream>
using namespace std;

class Pareja {
private:
	float x, y;
public: 
	Pareja(int a, int b) {
		x = a;
		y = b;
	}
	void operator ()() { //(1) operados parentesis
		cout << "Pareja: (" << x << "," << y << ")" << endl;

	}
	int operator ()(int z) { //(2)
		return x + y - z;
	}
	void operator() (int a, int b) { // (3) Cuando se altera los valores de los atributos
		x = x * a;
		y = y - b;

	}
};


int main() {
	cout << "----------------Creacion de un objeto-------------" << endl;
	Pareja V(2, 3); //Creacion de un obj automatico
	cout << endl;
	cout << "Uso de la sobrecarga (1)" << endl;
	V(); //Usp de la sobrecarga (1)
	cout << endl;
	cout << "Uso de la sobrecarga (2)" << endl;
	cout<<"Laoperacion control V es tomar los dos atributos(2,3) los suma y les resta 5 y el resultado seria =  " <<V(5);
	cout << endl << endl;
	cout << "Uso de la sobrecarga (3)" << endl;
	V(5, 6); // x = x * a; ==> x = 10
			//  y = y - b; ==> y = -3
	cout << endl;
	V();
	cout << endl;

	system("pause");
	return 0;
}

