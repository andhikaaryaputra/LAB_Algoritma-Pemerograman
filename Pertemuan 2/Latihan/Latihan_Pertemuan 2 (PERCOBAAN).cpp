#include <iostream>
using namespace std;
#define harga 500

int main()
{
	float jumlah,total;
	
	cout << "masukan jumlah barang =" ;
	cin >> jumlah ;
	total = harga*jumlah;
		
	cout<<"\n yang harus dibayar =" <<total;
}
