#include <iostream>
using namespace std;
main(){
	int pil,c1,c2,c3,c4,c5,v;
	float c12,c34,cser,ctot,muatan;
	
	cout <<"MENGHITUNG KAPASITOR DENGAN 5 TITIK (2 PARAREL 3 SERI)\n\n";
	cout <<"1.a.Program menghitung nilai kapasitor pengganti\n";
	cout <<"  b.Jika v=15 maka muatannya adalah:\n";
	cout <<"Ketik 1 Untuk lanjut: ";
	cin >>pil;
	system ("cls");
	
	if (pil==1){
		cout <<"HITUNG NILAI KAPASITOR PARAREL DAHULU\n\n";
		cout <<"Masukan nilai kapasitor pertama: \n";
		cin >>c1;
		cout <<"Masukan nilai kapasitor kedua: \n";
		cin >>c2;
		c12=c1+c2;
		cout <<"Nilai kapasitor 1 dan 2 (PARAREL) adalah: \n" <<c12;
		cout <<"\n";
		
		cout <<"HITUNG NILAI KAPASITOR SERI\n\n";
		cout <<"Masukan nilai kapasitor ketiga: \n";
		cin>> c3;
		cout <<"Masukan nilai kapasitor keempat: \n";
		cin>> c4;
		c34= c3*c4/c3+c4;
		cout << "Nilai Kapasitor 3 dan 4 (SERI) adalah: \n"<<c34;
		cout <<"\n";
		
		cser=c34+c12;
		cout <<"NILAI KAPASITOR TITIK 1,2,3 DAN 4 ADALAH: \n"<<cser;
     	cout <<"\n";
		
		cout <<"Masukan nilai kapastior ke lima: \n";
		cin >>c5;
		ctot=cser*c5/cser+c5;
		cout <<"Nilai Kapasitor pengganti nya adalah: "<<ctot;
		cout <<"\n";
	
		cout <<"Masukan Nilai tegangan : \n";
		cin>>v;
		muatan=ctot*v;
		cout <<"Nilai Muatannya adalah: \n"<<muatan;
	}
	else if (pil!=1){
		cout <<"Input harus ketik 1!";
	}
}
