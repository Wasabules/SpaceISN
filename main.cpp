//*                 Programme C++               *
//       ecriture & lecture fichier binaire     *
//      Affichage d'un petit dessin � l'�cran   *
//                     2017-2018                *
//***********************************************
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <cstdlib>
#include <library.h>
#include <letters.h>
#include <numbers.h>
#include <texts.h>
#include <ingame.h>
#include <menu.h>
#include <windows.h> 

using namespace std;

int main ()
{
    bool debug = true;
    InitialiseFenetreGraphique(20);
    InitializeMenu();
    Menu();
    closegraph();
    return 0;
}
