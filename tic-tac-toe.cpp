#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
string a = "1";
string s = "2";
string d = "3";
string f = "4";
string g = "5";
string h = "6";
string j = "7";
string k = "8";
string l = "9";
int choice;
int c;
bool stop = false;
bool winner;
bool game_a;
bool game_s;
bool game_d;
bool game_f;
bool game_g;
bool game_h;
bool game_j;
bool game_k;
bool game_l;
void game(){
	     cout << a <<"|"<< s <<"|"<< d <<"\n"
	         "------\n"
	          << f <<"|"<< g <<"|"<< h <<"\n"
	         "------\n"
	          << j <<"|"<< k <<"|"<< l <<"\n";
	     cout << "On which number would you like to put the X (cross) ? \nNOTE: IF COMPUTER TRIES TO PUT THE \"#\" ON YOUR CROSS(X) \nTHEN IT WILL BE REMOVED AUTOMATICALLY!\nAND THE SAME THING WILL HAPPEN TO YOU, \nIF YOU TRY TO PUT THE CROSS(X) ON THE COMPUTER'S \"#\"!!\nPut the cross on number: ";
	     cin >> choice;
}
int main(){
	while(stop == false){
	srand(time(0));
	c = (rand()%10);
	game();
	if(choice == 1){
		if(a == "#"){
			cout << "You can't put the cross (X) here because computer has already put the \"#\" here...\n";

		}else{
		a = "X";
		 game_a = false;
	}
	}else if(choice == 2){
		if(s == "#"){
			cout << "You can't put the cross (X) here because computer has already put the \"#\" here...\n";
		}else{
		s = "X";
		 game_s = false;
}
	}else if(choice == 3){
		if(d == "#"){
			cout << "You can't put the cross (X) here because computer has already put the \"#\" here...\n";
		}else{
		d = "X";
		 game_d = false;
}
	}else if(choice == 4){
		if(f == "#"){
			cout << "You can't put the cross (X) here because computer has already put the \"#\" here...\n";
		}else{
		f = "X";
		 game_f = false;
	}
	}else if(choice == 5){
		if(g == "#"){
			cout << "You can't put the cross (X) here because computer has already put the \"#\" here...\n";
		}else{
		g = "X";
		 game_g = false;
	}
	}else if(choice == 6){
		if(h == "#"){
			cout << "You can't put the cross (X) here because computer has already put the \"#\" here...\n";
		}else{
		h = "X";
		 game_h = false;
	}
	}else if(choice == 7){
		if(j == "#"){
			cout << "You can't put the cross (X) here because computer has already put the \"#\" here...\n";
		}else{
		j = "X";
		 game_j = false;
	}
	}else if(choice == 8){
		if(k == "#"){
			cout << "You can't put the cross (X) here because computer has already put the \"#\" here...\n";
		}else{
		k = "X";
		 game_k = false;
	}
	}else if(choice == 9){
		if(l == "#"){
			cout << "You can't put the cross (X) here because computer has already put the \"#\" here...\n";
		}else{
		l = "X";
		 game_l = false;
	}
	}
	if(a == "X"){
	 game_a = false;
	}else if(s == "X"){
		 game_s = false;
	}else if(d == "X"){
		game_d = false;
	}else if(f == "X"){
		 game_f = false;
	}else if(g == "X"){
		 game_g = false;
	}else if(h == "X"){
		game_h = false;
	}else if(j == "X"){
		 game_j = false;
	}else if(k == "X"){
		 game_k = false;
	}else if(l == "X"){
		 game_l = false;
	}
	
	if(c == choice){
		cout << "You and computer chose the same number! Please try again!!";
	}
	else if(c == 1){
		if(game_a == true){
		a = "#";
	}
     }else{
		srand(time(0));
	c = (rand()%10);
	}
	if(c == 2){
		if(game_s = true){
		s = "#";
	}
    }else{
		srand(time(0));
	c = (rand()%10);
	}if(c == 3){
		if(game_d = true){
		d = "#";
	}
}   else{
		srand(time(0));
	c = (rand()%10);
	}if(c == 4){
		if(game_f = true){
		f = "#";
	}
}   else{
		srand(time(0));
	c = (rand()%10);
	}if(c == 5){
		if(game_g = true){
		g = "#";
	}
}	else{
		srand(time(0));
	c = (rand()%10);
	}if(c == 6){
		if(game_h = true){
		h = "#";
	}
}   else{
		srand(time(0));
	c = (rand()%10);

	}if(c == 7){
		if(game_j = true){
		j = "#";
	}
}   else{
		srand(time(0));
	c = (rand()%10);
	}if(c == 8){
		if(game_k = true){
		k = "#";
	}
}   else{
		srand(time(0));
	c = (rand()%10);
	}if(c == 9){
		if(game_l = true){
		l = "#";
	}
}   else{
		srand(time(0));
	c = (rand()%10);
	}
	if((a == "X" && g == "X" && l == "X") || (a == "X" && f == "X" && j == "X") || (s == "X" && g == "X" && k == "X") || (d == "X" && h == "X" && l == "X") || (d == "X" && g == "X" && j == "X") || (a == "X" && s == "X" && d == "X") || (f == "X" && g == "X" && h == "X") || (j == "X" && k == "X" && l == "X") ){
		stop = true;
		winner = true;
	}if((a == "#" && g == "#" && l == "#") || (a == "#" && f == "#" && j == "#") || (s == "#" && g == "#" && k == "#") || (d == "#" && h == "#" && l == "#") || (d == "#" && g == "#" && j == "#") || (a == "#" && s == "#" && d == "#") || (f == "#" && g == "#" && h == "#") || (j == "#" && k == "#" && l == "#") ){
		stop = true;
		winner = false;
	}
	if((a == "X" || a == "#") && (s == "X" || s == "#") && (d == "X" || d == "#") && (f == "X" || f == "#") && (g == "X" || g == "#") && (h == "X" || h == "#") && (j == "X" || j == "#") && (k == "X" || k == "#") && (l == "X" || l == "#") ){
		stop = true;
	}
if(winner == true){

	cout << a <<"|"<< s <<"|"<< d <<"\n"
	         "------\n"
	          << f <<"|"<< g <<"|"<< h <<"\n"
	         "------\n"
	          << j <<"|"<< k <<"|"<< l <<"\n";
	cout << "Congratulations!! You won the game!!\n";
}else if(winner == false){
	cout << a <<"|"<< s <<"|"<< d <<"\n"
	         "------\n"
	          << f <<"|"<< g <<"|"<< h <<"\n"
	         "------\n"
	          << j <<"|"<< k <<"|"<< l <<"\n";
	cout << "Ohh.... It looks like you lose the game :( ..... \n";
	
}
}
}
