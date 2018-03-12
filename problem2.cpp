#include <bits/stdc++.h>
using namespace std;


struct customer
{
	vector<int> transactions; 
	vector<string> email, phone, card;
};

vector<customer> cr;

void add_transaction(int id, string email, string phone, string card)
{
	int sama[3] = {0};
	int pass = 0;
	for(int i=0; i<cr.size(); i++) {
		for(auto it : cr[i].email) {
			if (it == email) {
				sama[0] = 1; break;
			}
		}
		for(auto it : cr[i].phone) {
			if (it == phone) {
				sama[1] = 1; break;
			}
		}
		for(auto it : cr[i].card) {
			if (it == card) {
				sama[2] = 1; break;
			}
		}
		if (sama[0] == 1) {
			cr[i].transactions.push_back(id);
			cr[i].phone.push_back(phone);
			cr[i].card.push_back(card);
			pass = 1;
			break;
		}
		else if (sama[1] == 1) {
			cr[i].transactions.push_back(id);
			cr[i].email.push_back(email);
			cr[i].card.push_back(card);
			pass = 1;
			break;
		}
		else if (sama[2] == 1) {
			cr[i].transactions.push_back(id);
			cr[i].email.push_back(email);
			cr[i].phone.push_back(phone);
			pass = 1;
			break;
		}
	}
	if (pass == 0) {
		customer now;
		now.transactions.push_back(id);
		now.email.push_back(email);
		now.phone.push_back(phone);
		now.card.push_back(card);
		cr.push_back(now);
	}
}

void merge(int x, int y)
{
	for(int i=0; i<cr[y].transactions.size(); i++) {
		cr[x].transactions.push_back(cr[y].transactions[i]);
	}

	for(int i=0; i<cr[y].email.size(); i++) {
		cr[x].email.push_back(cr[y].email[i]);
	}

	for(int i=0; i<cr[y].phone.size(); i++) {
		cr[x].phone.push_back(cr[y].phone[i]);
	}

	for(int i=0; i<cr[y].card.size(); i++) {
		cr[x].card.push_back(cr[y].card[i]);
	}

	cout << x << " " << y << "\n";
	// cr.erase(cr.begin(), cr.begin()+y);
}

int main()
{
	string email, phone, card;
	int id = 1;
	while(cin >> email >> phone >> card)
	{
		add_transaction(id++,email, phone, card);

		for(int i=0; i<cr.size(); i++) {
			for(int j=i+1; j<cr.size(); j++) {
				for(auto iti : cr[i].email) {
					for(auto itj : cr[j].email) {
						if (iti == itj) {
							merge(i, j); goto x;
						}
					}
				}

				for(auto iti : cr[i].phone) {
					for(auto itj : cr[j].phone) {
						if (iti == itj) {
							merge(i, j); goto x;
						}
					}
				}

				for(auto iti : cr[i].card) {
					for(auto itj : cr[j].card) {
						if (iti == itj) {
							merge(i, j); goto x;
						}
					}
				}				
			}
		}

		x:;
	}

	cout << "There are " << cr.size() << " customer(s).\n";
	for(int i=0; i<cr.size(); i++) {
		cout << "Customer " << i+1 << "\n";
		cout << "There are " << cr[i].transactions.size() << " Transaction(s) :\n";
		for(auto it : cr[i].transactions) {
			cout << it << "\n";
		}
		cout << "There are " << cr[i].email.size() << " Email(s) :\n";
		for(auto it : cr[i].email) {
			cout << it << "\n";
		}
		cout << "There are " << cr[i].phone.size() << " Phone(s) :\n";
		for(auto it : cr[i].phone) {
			cout << it << "\n";
		}
		cout << "There are " << cr[i].card.size() << " Card(s) :\n";
		for(auto it : cr[i].card) {
			cout << it << "\n";
		}
		cout << "\n";
	}
}
