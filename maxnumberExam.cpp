#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int var1, var2, var3, max;
	cout<<"please enter 3 number:";
	cin>>var1>>var2>>var3;
	
	max=var1;
	if(var2>max) max=var2;
	if(var3>max) max=var3;
	cout<<"max is: "<<max;
	
}
