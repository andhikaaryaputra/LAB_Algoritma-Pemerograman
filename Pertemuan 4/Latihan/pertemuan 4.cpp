#include <iostream>
using namespace std;
 
 int main(){
	
	double a, b=0, c=0;
	
	cout<< "Total Pembelian Rp. ";
	cin>> a;
	
	if(a >= 50000){
		b = 0.2*a;
		cout<< "Besar Potongan Rp." << b << endl;
		
	}
	
	c= a-b;
	
	cout << "Jumlah yang harus di bayar Rp. "<< c;
	
	getchar();	
 }
