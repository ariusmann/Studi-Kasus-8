#include <iostream>
using namespace std;

class data{
	public:
		void tabel();
		void proses();
		void output();
		
	private:
		string a[6]= {"Samsung Evo", "SanDisk 16GB", "Logitech M170", "WD Green 120GB", "Garmin Venu SQ", "Espon L3210 AIO"};
		int harga[6][2]= {{30,200000}, {45,60000}, {55,120000}, {23,400000}, {12,3100000}, {14,2500000}};
		int sub, hasil[6];
		int total = 0;
};

void data::tabel(){
	cout << "|   Nama Barang   |   Stok   |   Harga   |" << endl;
    cout << "|-----------------|----------|-----------|" << endl; 
    for(int i = 0; i < 6; i++){
    	cout << "| " << a[i];
  	  	for (int j = 0; j < 2; j++){
  		  	cout << " | " << harga[i][j];
	    }
	    cout << " | " << endl;
    }
    cout << "|----------------------------------------|\n" << endl;
}

void data::proses(){
	for(int i = 0; i < 6; i++){
		hasil[i] = harga[i][0] * harga[i][1];
		total += hasil[i];
	}
}

void data::output(){
	cout << "|----------------------------------------|" << endl;
	cout << "|   Nama Barang   |   Stok   |   Harga   |" << endl;
    cout << "|-----------------|----------|-----------|" << endl; 
    for(int i = 0; i < 6; i++){
    	cout << "| " << a[i] << " | "<< harga[i][0];
  	  	for (int j = 0; j < 1; j++){
  		  	cout << " | " << hasil[i] << " |";
		}
	    cout << endl;
    }
    cout << "|----------------------------------------|" << endl;
    cout << "  Total : " << total;
}

int main(){
	data e;
	
	e.tabel();
	e.proses();
	e.output();
}
