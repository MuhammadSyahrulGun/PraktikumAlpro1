#include<iostream>
using namespace std;

class kuliah{
	public:
		int input();
		int ouput();
		void proses();
	private:
		string dosen, matkul;
		int nim, mhs, i, total;
		float nilai, max, min, rata;
};

int kuliah::input(){
	cout<<"----Input----"<<endl;
	cout<<"Nama Dosen : ";cin>>dosen;
	cout<<"Matakuliah : ";cin>>matkul;
	cout<<"\nJumlah Mahasasiswa Di kelas : ";cin>>mhs;
}
void kuliah::proses(){
	for(i=1; i<=mhs; i++){
		cout<<"Input Nilai Mahasiswa Absen ke-"<<i<<" :";cin>>nilai;
		if(i==1){
			max=nilai;
			min=nilai;
		}
		else if(min > nilai){
			min=nilai;
		}
		else if(max < nilai){
			max = nilai;
		}
		total+=nilai;
		rata=total/i;
	}
}

int kuliah::ouput(){
	cout<<"\n=========================="<<endl;
	cout<<"Nama Dosen Yang Mengajar : "<<dosen;
	cout<<"\nMatakuliah yang diajar : "<<matkul<<endl;
	cout<<"\nNilai Maximumnya adalah : "<<max<<endl;
	cout<<"Nilai Minimumnya adalah : "<<min<<endl;
	cout<<"Nilai Rata-rata Mahasiswa adalah : "<<rata;
}
int main(){
	kuliah x;
	x.input();
	x.proses();
	x.ouput();
}
