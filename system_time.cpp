#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;
int main(){
	for(int x = 0; x < 10; x++){
	time_t now = time(0);
	tm *time = localtime(&now);
	int hour = time->tm_hour;
	string hourinString = to_string(hour);
	int min = time->tm_min;
	string minute = to_string(min);
	int sec = time->tm_sec;
	string second = to_string(sec);
	if(hour > 12){
		hour = hour - 12;
	}
	if(hour < 10){
		hourinString = "0"+to_string(hour);
	}
	if(min < 10){
	minute = "0"+to_string(min);
}
    if (sec < 10){
    	second = "0"+to_string(sec);
    }
    //system("clear");
    cout << "The time is " << hourinString  << ":" << minute << ":" << second << endl;
    usleep(1000000);
}
}
