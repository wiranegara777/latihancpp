#include <iostream>
#include <vector>

#define pb push_back;
using namespace std;

struct customer
{
	 int id;
	 string nama,nim;
	};

int main(){
	vector<customer> cr;
	vector<int> arr;
	//vector<int>::iterator it;
	vector<customer>::iterator it;
	string name, ni;
	
	for(int i = 0; i<3; i++){
		//arr.push_back(i);
		customer now;
		now.id = i;
		//now.id.push_back(i);
		cin >> name;
		//now.nama.push_back(name);
		now.nama = name;
		cin>> ni;
		//now.nim.push_back(ni);
		now.nim = ni;
		cr.push_back(now);
	}
	
//	for(it = cr.begin(); it!=cr.end();it++)
	//	cout << *it.nama <<'\n';
	for(int i =0; i<cr.size(); i++){
			cout << cr[i].nama <<' '<<cr[i].nim<<"\n";
	}
	
return 0;
	}
