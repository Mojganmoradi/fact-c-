#include<iostream>
#include<conio.h>
using namespace std;
void print(string f, string l){
	 cout<<f<<l;
	 cout<<l;
}
int main(){
	string first, last;
	cin>>first>>last;
	print(first,last);
}
