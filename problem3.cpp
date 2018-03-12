#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	while(cin >> s) {
		string normalized;
		if (s.length() < 3) {
			normalized = s;
 		}
 		else if (s == "(null)") {
 			normalized = s;
 		}
 		else {
 			for(int i=0; i<s.length(); i++) {
 				if (s[i] == '+' || s[i] == '*' || s[i] == '(' || s[i] == ')' || s[i] == '?' || s[i] == '.' || s[i] == '/')
 					s.erase(i, 1);
 			}
 			if (s[0] == '0')
 			{
 				s.erase(0, 1);
 				string ganti = "62";
 				ganti += s;
 				s = ganti;
 			}
 			normalized = s;
 		}
 		cout << normalized << "\n";
	}
}
