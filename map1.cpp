#include <iostream>
#include <map>

using namespace std;

int main(){
	
	map<string,int> cus;
	map<string,int>:: iterator it;
	
	cus.insert(pair <string, int> ("wira",21));
	cus.insert(pair <string, int> ("farqon",22));
	cus.insert(pair <string, int> ("hehe", 19));
	
	cout<<"Nama\tUmur\n";
	for(it = cus.begin(); it!=cus.end(); it++)
		cout<<it->first<<'\t'<<it->second<<'\n';
		
	
	return 0;
	}
