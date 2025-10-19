#include <iostream>
using namespace std;

int main(){
	
	
	cout<<"===== MENGHITUNG NILAI RATA RATA SISWA ====="<<endl<<endl;
	
	
	string nama;
	float n1, n2, n3, rata;
	int kategori;
	
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
	
	
	if(rata>=85)
		kategori = 1;
		
	else if (rata>= 70)
	kategori= 2;
	
	else
	 kategori= 3;
	 
	cout<<"siswa bernama "<<nama<<endl;
	cout<<"Nilai rata-rata nya adalah :"<<rata<<endl;
	
	switch(kategori){
		case 1:
			cout<<"Hadiah Komupter Core i5"<<endl;
			break;
		
		case 2:
			cout<<"Hadiah Uang Rp. 2.500,000"<<endl;
			break;
		
		case 3:
			cout<<"Hadiah Hiburan"<<endl;
			break;
	}
	 
	 
	 
	 
	 
}
