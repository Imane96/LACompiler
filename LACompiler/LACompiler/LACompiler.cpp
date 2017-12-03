// LACompiler.cpp : Defines the entry point for the console application.
//

#include "stdafx.h";
#include <iostream>;
#include "AnalyseurLexical.h";
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
	try
	{
		if (argc > 1) {
			string fichier = argv[1];

			AnalyseurLexical *analysLexic = new AnalyseurLexical(fichier);
			TLexeme lex = analysLexic->uniteSuivante();
			cout << lex.UL;
		}
	}
	catch (const std::exception& e)
	{
		cout << e.what();
	}

    return 0;
}

