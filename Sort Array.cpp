#include<iostream>
#include<conio.h>
using namespace std;
int main (){

	const int arraysize=6;
	int a[6]={12,10,7,11,8,9};
	int temp;
	for(int i=0;i<=6;i++){
	  for(int j=0;j<6;j++){
	  	if (a[j+1]<a[j]){
	  	
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
	  	
	  }
	}
   for(int i=0;i<6;i++)
   cout<<a[i]<<'\t';
	
}
