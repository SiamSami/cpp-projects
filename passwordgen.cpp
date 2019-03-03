#include <iostream>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int main(){
	srand(time(0));
	int random = rand() % 94;
	string alpha[94] = {"q", "w", "e", "r", "t", "y", "u", "i", "o", "p", "a", "s", "d", "f", "g", "h", "j", "k", "l", "z", "x", "c", "v", "b", "n", "m", "Z", "A", "Q", "X", "S", "W", "C", "D", "E", "V", "F", "R", "B", "G", "T", "N", "H", "Y", "M", "J", "U", "K", "I", "L", "O", "P", "`", "~", "!", "@", "#", "$", "%", "^", "&", "*", "(", ")", "-", "_", "=", "+", "{", "[", "}", "]", "|", "\\", ":", ";", "\"", "\'", "<", ",", ">", ".", "?", "/", "1", "2", "3", "4", "5", "6", "7", "8", "9", "0"};
	cout << alpha[random];
	random = rand() % 94;
	cout << alpha[random];
	random = rand() % 94;
	cout << alpha[random];
	random = rand() % 94;
	cout << alpha[random];
	random = rand() % 94;
	cout << alpha[random];
	random = rand() % 94;
	cout << alpha[random];
	random = rand() % 94;
	cout << alpha[random];
	random = rand() % 94;
	cout << alpha[random] << endl;
}
