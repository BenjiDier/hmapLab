#include<iostream>
#include<map>
#include<unordered_map>
#include<string>
using namespace std;

int main() {
	unordered_map<string, int> population;
	population["Germany"] = 83500000;
	population["France"] = 63500000;
	population["Iceland"] = 400000;
	population["Spain"] = 48810000;
	population["Canada"] = 48290000;

	for (auto& [country, pop]: population) {
		cout << country << ": " << pop << endl; // WORKS DONT QUESTION IT. (if it doesnt, put it into online compiler.)
	}

string name;
	cout << "Enter name of country: ";
	cin >> name;
	if (population.find(name) != population.end()) {
		cout << name << ": " << population[name];
	}
	else { cout << "Country name not in list."; }
}
