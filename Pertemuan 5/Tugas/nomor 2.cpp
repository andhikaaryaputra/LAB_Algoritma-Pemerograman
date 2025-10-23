#include <iostream>
using namespace std;

int main(){
	
	int angka;
	bool prima = true;
	char ulang;
	
do{

	cout<<"Masukkan sebuah bilangan : ";
	cin>> angka;
	
	if(angka < 2){
		prima = false;
		
	} else {
		
		for(int i = 2; i< angka; i++){
			if(angka % i ==0){
				prima =false;
				break;
			}
		}
	}
	
	if (prima){
		cout<< "Termasuk bilangan Prima"<<endl<<endl;;
		
	} else {
		cout<<" Bukan termasuk bilangan Prima"<<endl<<endl;
	}

	cout<<"Coba angka lain? (y/n)";
	cin>> ulang;
	
} while (ulang =='y' || ulang =='Y');
	cout<<"Terima kasih";
	
}
