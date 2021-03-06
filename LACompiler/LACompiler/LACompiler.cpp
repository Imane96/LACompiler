// LACompiler.cpp : Defines the entry point for the console application.
//

#include "stdafx.h";
#include <iostream>;
#include "AnalyseurSyntaxique.h"
//#include "AnalyseurLexical.h";
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
	//Gestion des exceptions
	try
	{
		//if (argc > 1)	
		if(1)
		{
			//string fichier = argv[1];
			string fichier = "text.txt";

			AnalyseurSyntaxique *analyseurSyntaxique = new AnalyseurSyntaxique(fichier);

			analyseurSyntaxique->verifierSyntaxe();
			if (analyseurSyntaxique->lesErreurs.getNombreErreur() > 0)
			{
				cout << "Le programme contient " << analyseurSyntaxique->lesErreurs.getNombreErreur() << " erreurs syntaxiques : " << endl;
				analyseurSyntaxique->lesErreurs.afficherErreurs();
			}
			else
			{
				cout << "Le programme ne contient aucune erreur syntaxique";
			}
			
		}
		else

			cout << "Veuiller indiquer le scripte a compiler\n";

	}
	catch (const std::exception& e)
	{
		cout << e.what();
	}

	return 0;
}

