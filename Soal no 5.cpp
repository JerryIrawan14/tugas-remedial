#include <iostream>
using namespace std;
main(){
	const float u=0.0000004;
	const float l=0.04;
	const float A=0.00005;
	const int n=200;
	const float phi=3.14;
	const float besi=4000;
	float L1,L2;
	cout <<"menghitung induktansi solenoid dengan\na.rongga udara\nb.intinya berisi besi\n";
	L1= n*n*phi*u*A/l;
	cout <<"Induktansi berisi udara nya adalah: "<<L1<<"H\n";
	L2= n*n*besi*A/l;
	cout <<"Induktansi berisi besi nya adalah: "<<L2<<"H";
}
