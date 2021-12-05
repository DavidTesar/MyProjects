#include <iostream>
#include <string>
using namespace std;

string message();
string encrypt(string, int);
string decrypt(string, int);

int main() {

		cout << message() << endl;
	
		cout << "Enter string to encrypt: " << endl;
		string input;
		getline(cin, input);

		cout << "Enter key: " << endl;
		string key;
		getline(cin, key);

		cout << endl << "ENCRYPTED AS:\n" << encrypt(input, stoi(key)) << endl;

		cout << "\nDECRYPTED AS:" << endl;

		cout << decrypt(encrypt(input, stoi(key)), stoi(key)) << endl;

		return 0;
}

string message() {
	string out;
	out += "=============\n";
	out += "CEASAR CYPHER\n";
	out += "=============\n";

	return out;
}

string encrypt(string str,int key) {

	int length = str.length();
	for (int i = 0; i < length; ++i) {
		str.at(i) = str.at(i)+key;
	}

	return str;
}

string decrypt(string str, int key) {

	int length = str.length();
	for (int i = 0; i < length; ++i) {
		str.at(i) = str.at(i) - key;
	}

	return str;
}