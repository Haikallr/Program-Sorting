#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int pil,jmlh,data[200],temp;
	
	cout<<"=================="<<endl;
	cout<<"|| Bubble Sort\t||"<<endl;
	cout<<"=================="<<endl;
	cout<<"\nMasukan Jumlah Data Inputan: ";
	cin>>jmlh;
	
	for(int i=0;i<jmlh;i++){
			cout<<"\nMasukan angka "<<i+1<<": ";
			cin>>data[i];
		}
			cout<<"\nBefore BubbleSort : ";
			cout<<endl;
	for(int i=0;i<jmlh;i++){
			cout<<data[i]<<" ";
		}
			cout<<endl;
	for(int i=0;i<(jmlh-1);i++){
			int a=jmlh-1-i;	
	for(int b=0;b<a;b++){
			if(data[b]>data[b+1]){
			temp=data[b];
			data[b]=data[b+1];
			data[b+1]=temp;
		}
			}
		}
			cout<<"\nAfter BubbleSort : ";
			cout<<endl;
	for(int i=0;i<jmlh;i++){
			cout<<data[i]<<" ";
	}
	cout<<endl;
	cout<<"\nTHANK YOU (^_^)";
}
