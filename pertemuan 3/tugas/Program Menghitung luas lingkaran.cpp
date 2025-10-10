#include <iostream>
using namespace std;

int main(){
	
	float phi= 3.14 ,  luas;
	int r;
	
	cout<<"*****MENGHITUNG LUAS LINGKARANG*****"<<endl<<endl;
	
	cout<<"Masukan Jari-Jari Lingkaran = ";
	cin>> r;
	cout<<endl;
	
	luas = phi*r*r;
	
	cout<<"Rumus Luas Lingkaran = Phi * r * r "<<endl<<endl;
	cout<<"Luas lingkaran = "<<luas<<" cm2";
}
