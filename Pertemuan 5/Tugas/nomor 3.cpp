#include<iostream>
using namespace std;

int main(){
	
	int angka;
	char pilihan;
	
	do{
		cout<<"masukan bilangan : ";
		cin>> angka;
		
		while (angka<0){
			cout<<"Faktorial tidak didefinisikan untuk bilangan negatif"<<endl;
			cout<<"Masukan bilangan bulat positif : ";
			cin >> angka;
		}
		
		int hasil =1;
		int i =1;
		
		while (i <= angka){
			hasil *=i;
			i++;
		}
		
		cout<< "Hasil " << angka<<"!"<< " = "<<hasil<<endl;
		
		cout << "Ulangi lagi? (y/n): ";
		cin>> pilihan;
		
	} while (pilihan == 'y'|| pilihan == 'Y');
	
	cout << "Terima kasih. program selesai."<<endl;
	
	
}
