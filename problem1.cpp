#include <bits/stdc++.h>

using namespace std;

#define pb push_back

int main()
{
	string s; getline(cin, s);

	for(int i=0; i<s.length(); i++) {
		s[i] = tolower(s[i]);
	}

	stringstream ss(s); string word;
	unordered_map <string, int> m;
	int len1 = 0, len2 = 0;
	while(ss >> word) {
		len1++;
		if (word != "jl." && word != "jalan" && word != "km" && word != "-" && word != "gg." && word != "gang" && word != "jl" && word != "jln")
			m[word] = 1;
	}

	getline(cin, s);

	for(int i=0; i<s.length(); i++) {
		s[i] = tolower(s[i]);
	}

	stringstream aa(s);
	int percentage = 0;
	while(aa >> word) {
		len2++;
		if (word != "jl." && word != "jalan" && word != "km" && word != "-" && word != "gg." && word != "gang" && word != "jl" && word != "jln") {
			if (m[word]) {
				percentage++;
			}
		}
	}
	double len = (len1+len2)/2.0;
	cout << percentage*1.0/len * 100 << " %\n";

}
