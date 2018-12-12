#include <iostream>
using namespace std;
int main(){
	char name;
	int toan, ly , hoa, TB;
	cout<<"Ten SV :";	
	cin >> name;
	cout<<"Diem toan :";	
	cin >> toan;
	cout<<"Diem ly :";	
	cin >> ly;
	cout<<"Diem hoa :";	
	cin >> hoa;
	TB=(toan + ly + hoa)/2;
	cout<<"\nDiem TB Mon Cua SV la : "<<TB;
	if(TB >=8){
		cout<<"\nSV DAT LOAT XUAT SAC";
	}else if(TB>=7 || TB <8){
		cout<<"\nSV DAT LOAI GIOI";
	}else if(TB>=6 || TB <7){
		cout<<"\nSV DAT LOAI KHA";
	}else if(TB>=5 || TB <6){
		cout<<"\nSV DAT LOAI TB";
	}else if(TB <8){
		cout<<"\nSV DAT LOAI YEU";
	}
	return 0;
}

