//David Tesar
//Standard model of Ceasar Cipher. Capable of shifting(encrypting) character values upto n shifts.
//Loop for repeated user input is not yet implemented, however program is fully tested.

#include <iostream>
#include <string>
using namespace std;

//Ceasar Cipher message
string message();

//Encrypting method taking string and a key, and returning encrypted string
string encrypt(string, int);

//Decrypting method, taking string an a key, returning decrypted string
string decrypt(string, int);

int main() {

		cout << message() << endl;
	
		//Prompting user and gathering input
		cout << "Enter string to encrypt: " << endl;
		string input;
		getline(cin, input);

		cout << "Enter key: " << endl;
		string key;
		getline(cin, key);

		//Encrypting message and prompting user.
		cout << endl << "ENCRYPTED AS:\n" << encrypt(input, stoi(key)) << endl;

		//Decrypted message taking in encrypted message and initial key used with encryption.
		cout << "\nDECRYPTED AS:" << endl << decrypt(encrypt(input, stoi(key)), stoi(key)) << endl;

		return 0;
}

string message() {
	string out;
	out += "=============\n";
	out += "CEASAR CIPHER\n";
	out += "=============\n";

	return out;
}

string encrypt(string str,int key) {

	//Shifts every character in the string "key" times forward in the alphabeth and returns changed string
	int length = str.length();
	for (int i = 0; i < length; ++i) {
		str.at(i) = str.at(i)+key;
	}

	return str;
}

string decrypt(string str, int key) {

	//Shifts every character in the string "key" times backward in the alphabeth and returns changed string
	int length = str.length();
	for (int i = 0; i < length; ++i) {
		str.at(i) = str.at(i) - key;
	}

	return str;
}