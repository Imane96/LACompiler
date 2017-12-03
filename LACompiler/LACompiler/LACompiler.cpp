// LACompiler.cpp : Defines the entry point for the console application.
//

#include "stdafx.h";
#include <iostream>;
#include "AnalyseurLexical.h";

using namespace std;

int main(int argc, string argv[])
{
	try
	{
		AnalyseurLexical *analysLexic = new AnalyseurLexical("debut fin");
		cout << (analysLexic->uniteSuivante()).UL;
	}
	catch (const std::exception& e)
	{
		cout << e.what();
	}

    return 0;
}

