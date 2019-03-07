#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
	string line;
	if(argc > 1){
		string argument = argv[1];
		if (argument == "-encrypt") {
			getline(cin, line);
			for (int i = 0; i <= line.length(); ++i) {
				line[i] = line[i] + 1;
			}
		}
		else if (argument == "-decrypt") {
			getline(cin, line);
			for (int i = 0; i <= line.length(); ++i) {
				line[i] = line[i] - 1;
			}
		}
		else if (argument == "-h" || argument == "-help") {
			cout << "Usage:\n";
			cout << "Flags\t-encrypt - Encrypts a message using Siam's algorithm\n" ;
			cout << "     \t-decrypt - Decrypts a message which was encrypted using this program";
		}
		else{
			cout << "Unknown command\n";
		}
		cout << line << endl;
	}
	else{
		cout << "Please use a flag. Run \"crypter -h\" for more info\n";
}
	
}