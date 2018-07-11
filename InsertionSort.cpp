#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int data[10] = {9,5,12,6,3,2,1,8,6,4};
	int i,j,temp;
	
	cout<<"=================="<<endl;
	cout<<"||Insertion Sort||"<<endl;
	cout<<"=================="<<endl;
	cout<<"\nData sebelum diurutkan : "<<endl;
    for(i=0; i<10; i++){
        cout<<data[i]<<" ";
    }
    	cout<<endl;
    
    
	for(i=0; i<10; i++)
	{
		temp=data[i];
		j=i-1;
		while((temp<data[j]) && (j>=0))
		{
			data[j+1]=data[j];
			j=j-1;
		}
		data[j+1]=temp;
	}
		cout<<"\nData setelah diurutkan  : "<<endl;
	
	for(i=0; i<10; i++)
	{
		cout<<data[i]<<" ";
	}
getch();
}
