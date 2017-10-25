// Figure.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Figure
{
public:
	Figure() {}
	virtual void drawMe() { }
};

class Figure_11 : public Figure
{
public:
	Figure_11() {};
	void drawMe()
	{
		cout << "\n  *\n * *\n*   *\n";
		return;
	}
};

class Figure_12 : public Figure
{
public:
	Figure_12() {};
	void drawMe()
	{
		cout << "\n *  *\n*    *\n *  *\n";
		return;
	}