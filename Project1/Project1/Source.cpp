/*
 * Source.cpp
 *
 *  Date: July 10, 2021
 *  Author: Nichole Griffith
 */

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <ctime>

using namespace std;


void initializeTime(int &hour, int &min, int &sec) {
	// gets the current time from the system
	struct tm currentTime;
	time_t now = time(0);
	localtime_s(&currentTime, &now);
	hour = currentTime.tm_hour;
	min = currentTime.tm_min;
	sec = currentTime.tm_sec;
}

void clearScreen() {
	system("CLS");
}
void printAstrikLine() {
	cout << " **************************      **************************" << endl;
}

void printClockScreen(int hour, int minute, int second) {
	// Fix me
	printAstrikLine();
	cout << " *     12-Hour Clock      *      ";
	cout << "*     24-Hour Clock      *" << endl;
	cout << " *     " << hour << ":" << minute << ":" << second << " P M       *      ";
	cout << "*        " << hour << ":" << minute << ":" << second << "        *" << endl;
	printAstrikLine();
}

void main() {
	int userinput;

	// time parts in 24-hour time as integers
	int hour;
	int min;
	int sec;

	initializeTime(hour, min, sec);

	cout << "This is a test" << endl;
	printClockScreen(hour, min, sec);
	/*
	printAstrikLine();
	Sleep(1000);
	printAstrikLine();
	Sleep(1000);
	printAstrikLine();
	Sleep(1000);
	printAstrikLine();
	Sleep(1000);
	printAstrikLine();
	*/
	cin >> userinput;
	clearScreen();
}