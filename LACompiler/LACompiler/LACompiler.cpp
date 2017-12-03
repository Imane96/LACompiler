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
				cout << lex.UL << " ";
			}
			cout << endl << endl << "TABLE DES MOTS CLES" << endl;
			cout  << "======================================" << endl << endl;
			analysLexic->afficherTableMotsCle();

			cout << endl << endl << "TABLE DES IDENTIFICATEURS"<< endl;
			cout  << "======================================" << endl << endl;
			analysLexic->afficherTableIdentificateurs();
		}
	}
	catch (const std::exception& e)
	{
		cout << e.what();
	}

    return 0;
}

