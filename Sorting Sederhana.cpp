#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a,b,max;
	cout<<"Program Nilai Terbesar\n"<<endl;
	cout<<"Input Nilai a : ";
	cin>>a;
	cout<<"Input Nilai b : ";
	cin>>b;
	
	if (a>b){
		max = a;
	}
	else{
		max = b;
	}
	cout<<"\nBilangan Terbesar = "<<max;
getch();
}
