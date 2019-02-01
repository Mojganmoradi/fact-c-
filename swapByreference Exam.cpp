#include<iostream>
#include<conio.h>
using namespace std;
void swap(int &a , int&b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	
}

int main(){
	int a,b,temp;
	cin>>a>>b;
	swap(a,b);
	cout<<a<<"\n"<<b;
	
}

