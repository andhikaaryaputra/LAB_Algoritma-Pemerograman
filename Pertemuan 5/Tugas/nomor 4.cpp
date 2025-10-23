#include <iostream>
using namespace std;

int main(){

    int a, i, j;
    char ulang;
    
	cout<<"membuat pola ketupat\n";
	cout<<endl;
	
do{
	
	 cout  <<"Masukkan angka =  ";
    cin >> a;
    cout << endl;

    for (i = 1; i <= a; i++) {
        for (j = 1; j <= a - i + 1; j++) {
            cout << " *";
        }

        for (j = 1; j <= (2 * i - 2); j++) {
            cout << "  ";
        }

        for (j = 1; j <= a - i + 1; j++) {
            cout << " *";
        }

        cout << endl;
    }

    for (i = 1; i <= a; i++) {
        for (j = 1; j <= i; j++) {
            cout << " *";
        }
        
        for (j = 1; j <= (2 * (a - i)); j++) {
            cout << "  ";
        }
        
        for (j = 1; j <= i; j++) {
            cout << " *";
        }

        cout << endl;
    }
    
    cout<<"ingin melakukan nya lagi? (y/n)";
	cin>> ulang;

}  while(ulang == 'y' || ulang =='Y');
	
	cout<<"********* terima kasih sudah bermain :> ************";

	
   
}


