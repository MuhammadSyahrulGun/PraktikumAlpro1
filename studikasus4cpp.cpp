#include <iostream>
using namespace std;

class Iteratif{
	public : 
		int iteratif();
		void Akhir();
	private : 
		int uang_ortu, sbb, i,ptb,total,ttl_duit, sisa;	
};

int Iteratif::iteratif(){  
	cout<<"Aplikasi Pendataan uang"<<endl;
	cout<<"=======================\n";
    cout<<"Uang dari Orang Tua : ";cin>>uang_ortu;
    cout<<"Selama berapa bulan : ";cin>>sbb;
	for(int i=1; i<=sbb; i++){
		cout<<"bulan ke "<<i<<":";
		cin>>ptb;
		
		total =total+ptb;
	}
	cout<<"Total Pengeluaran dalam "<<sbb<<" adalah : "<<total<<endl;
}

void Iteratif::Akhir(){   
	ttl_duit=uang_ortu*sbb;
	sisa = ttl_duit-total;
	cout<<"Sisa uang tabungan adalah : "<<sisa<<endl;
}

int main(){
	Iteratif tabungan; 
	tabungan.iteratif();  
	tabungan.Akhir(); 

	return 0;
}
