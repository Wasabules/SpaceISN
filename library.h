#include <iostream>   // librairie gérant les flux d'entree et de sortie
#include <fstream>   // librairie gérant les fichiers
#include <math.h>
#include <graphics.h>
using namespace std;  // espace de noms contenant les flux  cin/cout

//************************************
//      Zones des Fonctions          *
//************************************
void InitialiseFenetreGraphique(int f)
{
     initwindow(800,600,"Space Invader",0,0);
     setbkcolor(BLACK);
     cleardevice();
}//initialisation mode graphique et l'écran     

void FermeFenetreGraphique()
{
   closegraph();
   cout<< "A bientot..."<<endl;       
}//Fin fonction FermeFenetreGraphique   


void MetPoint(int taille, int x, int y, int R = 255, int V = 255, int B = 255)
{
     setfillstyle(SOLID_FILL,COLOR(R,V,B));
     bar(x, y, x+taille, y+taille);
}

