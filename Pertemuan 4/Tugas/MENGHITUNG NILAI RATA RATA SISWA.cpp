#include <iostream>
using namespace std;

int main(){
	
	
	cout<<"===== MENGHITUNG NILAI RATA RATA SISWA ====="<<endl<<endl;
	
	
	string nama;
	float n1, n2, n3, rata;
	
	cout<<"Masukkan Nama Anda : ";
	cin>> nama;
	cout<<endl;
	
	cout<<"Nilai Pertandingan I : ";
	cin>> n1;
	
	cout<<"Nilai Pertandingan II : ";
	cin>> n2;
	
	cout<<"Nilai Pertandingan III : ";
	cin>> n3;
	cout<<endl;
	
	(rata =(n1+n2+n3)/3);
	
	cout<<"siswa bernama "<<nama<<endl;
	cout<<"Nilai rata-rata nya adalah :"<<rata<<endl;
	
}
