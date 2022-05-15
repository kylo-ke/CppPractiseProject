#pragma once
#include <exception>
#include <iostream>
#include <string>

using namespace std;

class BaseClass
{
public:
	BaseClass();
	BaseClass(const char* pName);
	BaseClass(char* name, int number);
	~BaseClass();

	//virtual  void printClassInfo()  const;

	static int mStaticNum;

	void PrintInfo() const;
private:
	unsigned int mNumber;
	char* mName;
};


class ChildClass : public BaseClass
{
public:
	void PrintInfo() const;
	//virtual void printClassInfo() const;

private:
	int testNum;

};
