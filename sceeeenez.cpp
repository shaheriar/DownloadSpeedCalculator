#include <list>
#include <iostream>
#include <stdlib.h>

using namespace std;
void separate(list <int>, list <int>&, list <int>&);

int main() {
	list <int> lalu;
	list <int> tempo;
	list <int> evens;
	list <int> odds;
	
	for (int i = 0; i < 1000; i++) {
		int b = rand() % 100 + 1;
		lalu.push_back(b);
	}
	
	tempo = lalu;
	
	cout << "Unsorted: ";
	while(!tempo.empty()) {
		cout << tempo.front() << " ";
		tempo.pop_front();
	}
	
	tempo = lalu;
	tempo.sort();
	
	cout << endl << "Sorted: ";
	while(!tempo.empty()) {
		cout << tempo.front() << " ";
		tempo.pop_front();
	}
	
	separate(lalu, evens, odds);
	evens.sort();
	odds.sort();
	
	cout << endl << "Evens: ";
	while (!evens.empty()) {
		cout << evens.front() << " ";
		evens.pop_front();
	}
	
	cout << endl << "Odds:  ";
	while (!odds.empty()) {
		cout << odds.front() << " ";
		odds.pop_front();
	}
	int num;
	cin >> num;
	return 0;
	
}

void separate(list <int> a, list<int>&  evens, list<int>&  odds) {
	list <int> temp = a;
	
	while (!temp.empty()) {
		if (temp.front() % 2 == 0) {
			evens.push_back(temp.front());
		}
		else {
			odds.push_back(temp.front());
		}
		temp.pop_front();
	}
}
