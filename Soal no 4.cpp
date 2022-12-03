#include <iostream>
using namespace std;

#define I 5.5
#define X 0.1
main(){
	const float V=110;
	float R,V2,V3,V4,R3;
	int R2;
	cout <<"Peralatan listrik menarik arus 5.5 A dan tegangannya 110V\n";
	cout <<"hitung jika\na.tegangan turun 10% arus nya sekarang \n";
	cout <<"b.hambatan berkurang 10% arus nya sekarang \n\n";
	
	cout <<"Hambatan normal: "<<V/I<<"ohm\n";
	
	V2=V*X;
	V3=V-V2;
	cout <<"V jika tegangan berkurang 10%:"<< V3<<"volt\n";
	V4=V3/20;
	cout <<"Arus yang mengalir sekarang adalah:"<<V4<<"ampere\n\n";
	
	R=20*0.1;
	R2=20-R;
	cout <<"R jika hambatan berkurang 10%:"<<R2<<" ohm\n";
	R3=V/18;
	cout <<"Arus yang mengalir sekarang adalah:"<<R3<<"Ampere\n";

}
