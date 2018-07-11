#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int pil,jmlh,temp,awal;
	int data[200];
	
	cout<<"=================="<<endl;
	cout<<"||Selection Sort||"<<endl;
	cout<<"=================="<<endl;
	cout<<"\nMasukan Jumlah Data Inputan : ";
	cin>>jmlh;
	
	for(int i=0;i<jmlh;i++){
			cout<<"\nMasukan angka "<<i+1<<": ";
			cin>>data[i];
	}
			cout<<"\nBefore SelectionSort : ";
			cout<<endl;
			
	for(int i=0;i<jmlh;i++){
			cout<<data[i]<<" ";
	}
			cout<<endl;
	for(int i=jmlh-1;i>0;i--){
			awal=0;
			
	for(int b=1;b<=i;b++){
		if(data[b]>data[awal])
	{
			awal=b;
	}
		}
			temp=data[awal];
			data[awal]=data[i];
			data[i]=temp;
	}
			cout<<"\nAfter SelectionSort : "<<endl;
			
	for(int i=0;i<jmlh;i++){
			cout<<data[i]<<" ";
	}
getch();
}
