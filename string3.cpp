#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(){
	
	int i;
	string a;
	vector<int> arr;
	
	getline(cin, a);	
	stringstream ss(a);
	
	while(ss >> i)
	{
		arr.push_back(i);
		
		if(ss.peek() == ',')
			ss.ignore();
			
	}
	
	for(int i = 0; i<arr.size(); i++){
		cout<<arr[i] + 1<<'\n';
	}

	
return 0;
}
