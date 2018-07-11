#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int array[5],length=5,tmp,flag;
	int i,j;

	cout<<"=================="<<endl;
	cout<<"|| Shell Sort\t||"<<endl;
	cout<<"=================="<<endl;
 	
	for (i=0;i<length;i++){
		cout<<"\nMasukan Angka : ";
 		cin>>array[i];
	}
 		j=length;
 		flag=i;
 		while(flag||(j>1))
	{
 			flag=0;
 			j=(j+1)/2;
 			
 	for(i=0;i<(length-j);i++){
 		if(array [i+j]>array[i])
		{
 			tmp=array[i+j];
 			array[i+j]=array[i];
 			array[i]=tmp;
 			flag=1;
 		}
 	}
 	}
 		cout<<"\nHasilnya adalah : "<<endl;
 	
 	for(i=0;i<5;i++)
	{
 		cout<<array[i]<<" ";
	}
getch();
}
