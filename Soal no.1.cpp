#include <iostream>
using namespace std;
int main(){
    int s,hamb,data[50];
    float jum,rpeng,v,r,v2,i,r1,r2,r3,r4,nil;
    int pil;
    string x;
    do{
	
	cout <<"1. Menghitung R pengganti:\n";
	cout <<"2. Arus yang keluar dari sumber pengganti:\n";
	cout <<"3. Arus yang melewati masing-masing resistor:\n";
	cout <<"Pilih Rumus: ";
	cin >>pil;
	system ("cls");
	if (pil==1){
	cout <<"Jumlah hambatan: ";
	cin >>hamb;
		for (s=0; s<hamb; s++)
        {
           cout<<"Jumlah hamb  ke-"<<s+1<<" = ";
           cin>>data[s];
           jum += data[s];
        }
    rpeng = hamb*hamb/hamb+hamb;
	cout <<"Hambatan pengganti nya adalah :" <<rpeng;
	}
	else if (pil==2){
		cout <<"Masukan nilai tegangan :\n";
		cin >>v;
		cout <<"Masukan nilai hambatan :\n";
		cin >>r;
		i = v/r;
		cout <<"Besarnya hambatan pengganti adalah : " << i << "ohm";
	}
	else if (pil==3){cout <<"nilai tegangan: ";
	cin >> v2;
	cout <<"nilai arus pertama: ";
	cin >>r1;
	nil= v2/r1;
	cout <<"Nilai arus yang melewati pertama adalah:" <<nil ;
	cout <<"\n\n";
    
	cout <<"nilai tegangan: ";
	cin >> v2;
	cout <<"nilai arus kedua: ";
	cin >>r2;
	nil= v2/r2;
	cout <<"Nilai arus yang melewati kedua adalah: " <<nil;
	cout <<"\n\n";
	
	cout <<"nilai tegangan: ";
	cin >> v2;
	cout <<"nilai arus ketiga: ";
	cin >>r3;
	nil= v2/r3;
	cout <<"Nilai arus yang melewati ketiga adalah: " <<nil;
	cout <<"\n\n";
	
	cout <<"nilai tegangan: ";
	cin >> v2;
	cout <<"nilai arus keempat: ";
	cin >>r4;
	nil= v2/r4;
	cout <<"Nilai arus yang melewati keempat adalah: " <<nil;}
	
	cout << "\nmengulang program (y/n) : ";
	cin >> x;
	system ("cls");
} while (x== "y");
cout << "TERIMA KASIH :)";
}


