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
			while (!analysLexic->codeEstFini())
			{
				TLexeme lex = analysLexic->uniteSuivante();
				cout << lex.UL << endl;
			}

			cout << "Table des mots cles" << endl;
			analysLexic->afficherTableMotsCle();
			cout << "Table des identificateurs"<< endl;
			analysLexic->afficherTableIdentificateurs();
		}
	}
	catch (const std::exception& e)
	{
		cout << e.what();
	}

    return 0;
}

