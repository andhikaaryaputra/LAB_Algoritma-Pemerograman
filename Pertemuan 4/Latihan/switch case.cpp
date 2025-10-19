#include <iostream>
using namespace std;

int main(){
	
	char kode;
	
	cout<<"masukan kode barang [A/B/C] = ";
	cin >>kode;
	
	switch(kode){
		case 'A':
			cout<<"alat olahraga";
			break;
		
		case 'B':
			cout<<"alat Elektronik";
			break;
		
		case 'C':
			cout<<"Alat Masak";
			break;
		
		default:
			cout<<"kode anda tidak di temukan";
			break;
	}
}
