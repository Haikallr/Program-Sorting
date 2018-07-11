#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int x,y,z;
	cout<<"Program Mencari Bilangan Terbesar \n"<<endl;
	cout<<"Input bilangan 1 : ";
	cin>>x;
	cout<<"Input bilangan 2 : ";
	cin>>y;
	cout<<"Input bilangan 3 : ";
	cin>>z;
	
	if (x>y){
		if (x>z){
		cout<<"Bilangan Terbesar Anda Adalah "<<x;}
		else{
		cout<<"Bilangan Terbesar Anda Adalah "<<z;
		}
		
	}else{
		if (y>z){
		cout<<"Bilangan Terbesar Anda Adalah "<<y;}
		else{
		cout<<"Bilangan Terbesar Anda Adalah "<<z;
		}
	}
}
