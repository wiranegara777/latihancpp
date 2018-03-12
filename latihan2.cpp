#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	float a,b,c,d;
	//float hasil1,hasil2;
	
	cin>>a>>b>>c>>d;
	if(b == 0){
		cout << "Divide by zero\n";
		}else{
		 cout<< a/b <<fixed<<setprecision(2)<<'\n';
		}
		
	if(d == 0){
		cout << "Divide by zero\n";
		}else{
		 cout<< c/d <<fixed<<setprecision(2)<<'\n';
		}
	return 0;
	}
