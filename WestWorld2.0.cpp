// WestWorld2.0.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

class Host
{
public:
	void talk(string words)
	{
		cout << name << " says: " << words << endl;
	}
	string location = "Sweetwater";
	string name = "";

private:
	
	
 };


int main()
{
	Host HostDelores;
	Host HostArnold;
	Host HostTeddy;
	HostDelores.name = "Delores";
	HostDelores.talk("Welcome to WestWorld. enjoy your stay");

	HostTeddy.name = "Teddy";
	HostTeddy.talk("Howdy partner!");
	HostDelores.talk("Where am I?");
	system("pause");
    return 0;
}

