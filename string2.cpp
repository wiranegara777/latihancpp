#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	
	string cr; getline(cin, cr);
	
	stringstream ss(cr); string word;
	
	int len1 = 0;
	while(ss >> word) {
		
		if (word == "jl."){
			len1++;
			//m[word] = 1;
		}
	}
	
	cout<<len1<<"\n";
	
	return 0;
	}
