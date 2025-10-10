#include <iostream>
using namespace std;

int main(){
	
	double pi = 3.14159;
	int r, t;
	
	cout<<"***** Menghitung volume tabung *****"<<endl<<endl;
	
	cout<<"Berapa jari-jari Tabung(cm) = ";
	cin>> r ;
	cout<<endl;
	
	cout<<"Berapa tinggi Tabung(cm) = ";
	cin>> t ;
	cout<<endl;
	
	cout<<"Rumus Volume tabung = phi * r * r * t"<<endl<<endl;
	
	cout<<"Volume tabung adalah = "<< pi*r*r*t<<" cm3";
	
}
