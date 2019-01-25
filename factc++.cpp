#include<iostream>
#include<conio.h>
using namespace std;
unsigned fact (int a);
int main(){
	
	int x;
	cout<<"enter number for fact:";
	cin>>x;
	cout<<" enter ="<<x<<"\t fact="<<fact(x);
	

}
unsigned fact (int a){
	if(a!=0)
	 return (a * fact(a-1) );
	else
	 return 1;
}
