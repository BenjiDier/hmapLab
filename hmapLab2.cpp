#include<iostream>
#include<map>
#include<unordered_map>
#include<string>
using namespace std;

int main() {
	string input;
	string word;
	unordered_map<string, int> frequency;
	cout << "Type a sentence: " << endl;
	getline(cin, input);

	for (int i = 0; i < input.length(); i++) {
		if (input[i] != ' ') {
			if (input[i] >= 97 && input[i] <= 122) {
				input[i] -= 32;
			}
			word += input[i];
		}
		else {
			frequency[word] += 1;
			word = "";
		}
	}
	frequency[word] += 1;
	
	for (auto& pair: frequency) {
		cout << "Word: " << pair.first << "appeared: "<< pair.second << "times." << endl;
	}

}
