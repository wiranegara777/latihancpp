#include <iostream>

using namespace std;

int main(){
	
	//int a,b,c;
	int count = 3;
	int c;
//	cin >> a>>b;
	cin >> c;
	while(c != -9){
		cout << c; 
		if(count == 1){
			cout << '\n';
			count = 4;
			}
		else{
			cout << ' ';
			}
		count--;
		cin >> c;
		}
	if(count == 2){
		cout<< "0 0\n";
		} 
		else if (count == 3)
		{
		cout << "0\n";	
		}
		
	
	return 0;
	}
