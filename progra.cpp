#include <iostream>

using namespace std;

int main() {
	
	char yesno;
	while (yesno != 'n') {
	double dlspeed;
	int choice;
	double filesize;
	int min = 0;
	int hr = 0;
	int sec;
	cout << "Enter download speed in Mb/s: ";
	cin >> dlspeed;
	dlspeed = dlspeed * 0.125;
	cout << endl << dlspeed << " MB/s" << endl;
	cout << endl;
	cout << "Enter file size in: " << endl;
	cout << "1. GB" << endl;
	cout << "2. MB" << endl;
	cout << endl;
	cout << "Enter either 1 or 2: ";
	cin >> choice;
	cout << endl;
	
	if (choice == 1) {
		cout << "Enter file size in GB: ";
		cin >> filesize;
		filesize = filesize * 1000;
		double result = filesize/dlspeed;
		cout << endl << result << " seconds" << endl << endl;
		if (result > 60) {
		    while (result > 60) {
				min += 1;
				result = result - 60;
				sec = result;
			}
		}
		cout << endl;
		if (min > 60) {
			while (min > 60) {
				hr += 1;
				min = min - 60;
			}
		}
		if (hr > 0) {
			cout << "File will be downloaded in " << hr << " hours, "<< min << " minutes and " << sec << " seconds." << endl;
		}
		else if (min > 0) {
			cout << "File will be downloaded in " << min << " minutes and "  << result << " seconds." << endl;
		}
		else {
			cout << "File will be downloaded in " << result << " seconds." << endl;
		}
	}
	
	if (choice == 2) {
		cout << "Enter file size in MB: ";
		cin >> filesize;
		double result = filesize/dlspeed;
	    if (result > 60) {
		while (result < 60) {
				min += 1;
				result = result - 60;
				sec = result;
			}
		}
		cout << endl;
		if (min > 60) {
			while (min > 60) {
				hr += 1;
				min = min - 60;
			}
		}
		if (hr > 0) {
			cout << "File will be downloaded in " << hr << " hours, "<< min << " minutes and " << sec << " seconds." << endl;
		}
		else if (min > 0) {
			cout << "File will be downloaded in " << min << " minutes and "  << result << " seconds." << endl;
		}
		else {
			cout << "File will be downloaded in " << result << " seconds." << endl;
		}
	}
	cout << "Enter another? (y/n): ";
	cin >> yesno;
	cout << endl;
}
	
	return 0;
}
	
