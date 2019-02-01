#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i,sum=0;
	for(i=1; i<=100; i++)
	if(i%2==0)
	sum=i+sum;	
	
	cout<<"sum is:"<<sum;
	
	
}
