#include <iostream>
#include <string>

using namespace std;

class Perulangan{
  public:
    int rekursif_n(int n);
    int proses();
    void input(); 
    void output();
   
  private:
  	char nama[50];
    int nim,sks,total,diskon,n;
    int total_sks, jml, biaya_sks, ttl_pem,matkul;
	
};

void Perulangan::input(){
	cout<<"	Mata Kuliah "<<endl;
	cout<<"---------------------------"<<endl;
    cout << "1. Algoritma Pemrograman" << endl;
    cout << "2. Pemrograman WWEb" << endl;
    cout << "3. Matematika Diskrit" << endl;
    cout<<"Input data diri mahasiswa: "<<endl;
    cout<<"Masukkan Nama : ";cin>>nama;
    cout<<"Masukkan NIM : ";cin>>nim;
    cout<<"======================"<<endl;
    biaya_sks=120000;
    cout<<"Biaya Per SKS: "<<biaya_sks<<endl;   
    cout<<endl;
    
  }

  int Perulangan::rekursif_n(int n){
    
    if(n >= 1){
      rekursif_n(n-1);
		cout<<"jumlah sks"<<n<<" :";cin>>sks;
      	jml+=sks;
	  }
	  
    }
    
 
  int Perulangan::proses(){
  		
    	total=biaya_sks*jml;
    	ttl_pem=total*0.15;
    
  }
  void Perulangan::output(){
  	cout<<"\n";
    cout<<"<<Matkul dan SKS Yang Dipilih>>"<<endl;
    cout<<"Nama : "<<nama<<endl;
    cout<<"NIM : "<<nim<<endl;
    cout<<"<Daftar MatkulYang Diambil>"<<endl;
    cout<<"---------------------------"<<endl;
    cout << "1. Algoritma Pemrograman" << endl;
    cout << "2. Pemrograman WWEb" << endl;
    cout << "3. Matematika Diskrit" << endl;
    cout<<"Jumlah SKS: "<<jml<<endl;
    cout<<"Total Pembayaran: "<<ttl_pem<<endl;
        
  }

int main(){
	Perulangan sks; 
	sks.input();
    sks.rekursif_n(3);
    sks.proses();
	sks.output(); 
	return 0;
}
