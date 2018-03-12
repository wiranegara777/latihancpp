#include <iostream>
using namespace std;

#define SIZE 100
int main()
{
	int i,j;
	int foo[SIZE][SIZE];
	int foo2[SIZE][SIZE];
	for(i = 0; i < 3; i++)
		{
			for(j=0;j<3;j++)
				cin >> foo[i][j];
		}
	cout << "masukkan array\n";
	
	for(i = 0; i < 3; i++)
		{
			for(j=0;j<3;j++)
				cin >> foo2[i][j];
		}
	
	cout<< "hasil\n";
	for(i = 0; i < 3; i++)
		{
			for(j=0;j<3;j++) {
				cout << foo2[i][j] + foo[i][j];
				if(j==2)
					cout << "\n";
				else 
					cout << " ";
			}
		}
	
	
	
	return 0;
}
