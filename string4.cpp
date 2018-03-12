#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string no,ganti,temp,temp2;
	string salah = "62";
	string tes = "Hayo tebak AinG Dimana?";
	size_t pos;
	
	cin >> no;
	//memperbaiki jika inputan ada yang salah
	for(int i=0; i<no.length();i++){
		if(no[i] == ')'|| no[i] == '(')
			{
			no.erase(i,1);
			}
		}
	temp2 = no;
	//indeks ke 0 sebanyak 2 kali
	temp = no.substr(0,2);
	if(temp == "62"){
		temp = no.substr(2,no.length());
		ganti = "0" + temp;
		no = ganti;
		cout <<no<<"\n Maaf no anda telah kami ganti \n";
		}
	
	for(int i=1; i<tes.length(); i++){
		tes[i] = tolower(tes[i]);
		}
	   pos = tes.find("aing");
	   
	   cout<<pos<<'\n';
	
	   cout << temp2<<'\n';
	return 0;
	}
