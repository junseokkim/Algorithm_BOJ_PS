#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 


int main() {
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		vector<char> st;
		string sentence;
		getline(cin, sentence);
		for (int j = 0; j < sentence.size(); j++) {
			if (sentence[j] == ' ') {
				while (!st.empty()) {
					cout << st.back();
					st.pop_back();
				}
				cout << " ";
			}
			else {
				st.push_back(sentence[j]);
			}
		}
		while (!st.empty()) {
			cout << st.back();
			st.pop_back();
		}
		cout << "\n";
	}
}