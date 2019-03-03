/*
Please leave a like if you liked it :)
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	string comchoice;
	srand(time(0));
    int x = rand()%21;
    if(x <= 7){
	comchoice = "Rock";
    }
    else if(x <= 14){
	comchoice = "Paper";
    }
    else{
	comchoice = "Scissor";
}
    int choice;
	cout <<"Which one do you choose?\n1)Scissor\n2)Paper\n3)Rock\n";
	cin >> choice;
	if(choice == 1 && comchoice == "Paper"){
		cout << "Congratulations!! You won !! You chose Scissor and computer chose " << comchoice << "!" << endl;
	}
	else if(choice == 1 && comchoice == "Rock"){
		cout << "Sorry... but it seems that you lose and computer won... \n You chose Scissor and computer chose " << comchoice << ":(" << endl;
	}
	else if(choice == 1 && comchoice == "Scissor"){
		cout << "Looks like it's a tie.... don't worry try again... You \nchose Scissor and computer chose " << comchoice << " too!" << endl;
	}
	else if(choice == 2 && comchoice == "Paper"){
		cout << "Looks like it's a tie.... don't worry try again... You \nchose Paper and computer chose " << comchoice << " too!" << endl;
	}
	else if(choice == 2 && comchoice == "Scissor"){
		cout << "Sorry... but it seems that you lose and computer won... \n You chose Paper and computer chose " << comchoice << ":(" << endl;
	}
	else if(choice == 2 && comchoice == "Rock"){
		cout << "Congratulations!! You won !! You chose Paper \nand computer chose " << comchoice << "!" << endl;
	}
	else if(choice == 3 && comchoice == "Scissor"){
		cout << "Congratulations!! You won !! You chose Rock and\n computer chose " << comchoice << "!" << endl;
	}
	else if(choice == 3 && comchoice == "Paper"){
		cout << "Sorry... but it seems that you lose and computer won... \n You chose Rock and computer chose " << comchoice << ":(" << endl;
	}
	else if(choice == 3 && comchoice == "Rock"){
		cout << "Looks like it's a tie.... don't worry try again... You chose\n Rock and computer chose " << comchoice << " too!" << endl;
	}
	else if(!(choice == 1 || choice == 2 || choice == 3)){
		cout << "Please enter a valid number...\n";
	}
}
