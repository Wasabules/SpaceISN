//-------------------------------------
//         Menu Principale
//-------------------------------------

int posLevel = 0;
int compteurSelector = 0;


int etape = 0;
bool menuPrincipal = true;

void selector(int posX,int posY){ // Permet d'afficher/déplacer le selecteur de menu
     setfillstyle(SOLID_FILL,BLACK);
     bar(18*10, 32*10, 27*10, 58*10);
     bar(55*10, 32*10, 62*10, 58*10);
     forme(10,'m',posX-40,posY,255,255,255);
     forme(10,'m',posX+330,posY,255,255,255); 
    
}

//Couleur Texte Accueil
int CouleurMenuStartTextR = 255;
int CouleurMenuStartTextV = 0;
int CouleurMenuStartTextB = 0;

void InitializeMenu() // Affiche les principaux texts + Lignes blanche
{
    Ligne(18,0,280);
    
    MenuJouerText(8,240,352,255,255,255);
    MenuJouerDeuxText(8,240,432,255,255,255);
    MenuQuitterText(8,240,512,255,63,148);
    MenuStartText(20,40,20,CouleurMenuStartTextR,CouleurMenuStartTextV,CouleurMenuStartTextB);
    selector(220,350);
    posLevel = 0;



}

/*
posLevel = 0 >> Selecteur premier niveau
posLevel = 1 >> Selecteur second niveau
posLevel = 2 >> Selecteur troisième niveau
*/

void menu(char value){ // Déplace le sélecteur
     if(value == 'D'){ // On monte le sélecteur
         if(posLevel == 0){        // Premier niveau, tout en haut
            selector(220,430);
            posLevel = 1;          // On le passe alors au niveau du dessous
         }else if(posLevel == 1){  // Second niveau
            selector(220,510);
            posLevel = 2;          // On le passe alors au troisième niveau
         }
     }else if(value == 'U'){ // On le descend
         if(posLevel == 1){        // Deuxième niveau
            selector(220,350);
            posLevel = 0;          // On le passe alors au premier
         }else if(posLevel == 2){  // Troisième niveau
            selector(220,430);
            posLevel = 1;          // On le passe alors au second
         }
     }
}


/*---------------------------------------*/
/* Animation du Texte du menu principale */
/*---------------------------------------*/

int compteurMenu = 0;
int anim = 1;

void AnimeText(){ // Permet de faire bouger le texte "Space Invader"
        Attendre(10);

        /*----------------------------*/

        if(etape == 0){                    // Permet de faire le dégradé de couleur Rouge/Vert/Bleu
            CouleurMenuStartTextR--;
            CouleurMenuStartTextV++;
            if(CouleurMenuStartTextV == 255) etape = 1;
        }else if(etape == 1){
            CouleurMenuStartTextV--;
            CouleurMenuStartTextB++;
            if (CouleurMenuStartTextB == 255) etape = 2;
        }else if(etape == 2){
            CouleurMenuStartTextB--;
            CouleurMenuStartTextR++;
            if (CouleurMenuStartTextR == 255) etape = 0;
        }
     
        /*----------------------------*/
        
        if (anim == 1){  // Position initial
            MenuStartText(20,40,20,CouleurMenuStartTextR,CouleurMenuStartTextV,CouleurMenuStartTextB);
        }else if (anim == 2){ // Position vers le bas
            MenuStartText(20,40,40,CouleurMenuStartTextR,CouleurMenuStartTextV,CouleurMenuStartTextB);
        }else if(anim == 3){ // Position à droite
            MenuStartText(20,60,40,CouleurMenuStartTextR,CouleurMenuStartTextV,CouleurMenuStartTextB);
        }else if(anim == 0){ // Position à haut
            MenuStartText(20,60,20,CouleurMenuStartTextR,CouleurMenuStartTextV,CouleurMenuStartTextB);
        }
        
        /*----------------------------*/

     
        if(compteurMenu > 40){
            compteurMenu = 0;
            setfillstyle(SOLID_FILL,BLACK);
            bar(0, 0, 40*20, 14*20); // Avec un gros bloc noir, on efface le text présent avant d'afficher le prochain
            
            if (anim == 0){  // Position initial
                MenuStartText(20,40,20,CouleurMenuStartTextR,CouleurMenuStartTextV,CouleurMenuStartTextB);
                anim++;
            }else if (anim == 1){ // Position vers le bas
                MenuStartText(20,40,40,CouleurMenuStartTextR,CouleurMenuStartTextV,CouleurMenuStartTextB);
                anim++;
            }else if(anim == 2){ // Position à droite
                MenuStartText(20,60,40,CouleurMenuStartTextR,CouleurMenuStartTextV,CouleurMenuStartTextB);
                anim++;
            }else if(anim == 3){ // Position à haut
                anim = 0; // On remet la valeur à la position initial pour qu'a la prochaine execution, ce sois la position initial qui sois affiché
                MenuStartText(20,60,20,CouleurMenuStartTextR,CouleurMenuStartTextV,CouleurMenuStartTextB);
            }
        
        }else{
              compteurMenu++;
        }


     
}

/*-------------------------------------------*/
/* Fin Animation du Texte du menu principale */
/*-------------------------------------------*/


/*------------------------------*/
/* Affichage du menu principale */
/*------------------------------*/

void Menu()
{
    while(menuPrincipal){
        
        AnimeText(); // Fonction pour animer le text
        if (compteurSelector > 10){ // On attend 10 boucles avant de revérifier
            if((GetKeyState('Z') & 0x8000) || (GetKeyState(VK_UP) & 0x8000))  // On vérifie si la touche Z est pressé
            {
             compteurSelector = 0;
                menu('U');
                Attendre(25);
                
            } else if ((GetKeyState('S') & 0x8000) || (GetKeyState(VK_DOWN) & 0x8000)) // On vérifie si la touche S ou touche du bas est pressé
            {
                   compteurSelector = 0;
                   menu('D');
                   Attendre(25);
            } else if ((GetKeyState(VK_SPACE) & 0x8000) || (GetKeyState(VK_RETURN) & 0x8000)) // On vérifie si la touche Espace ou Enter est pressé >> Valide le choix du menu
            {
                   compteurSelector = 0;
                   if(posLevel == 0){ // Si le selecteur était en position 0 > Jeu solo
                               cleardevice(); 
                               StartParty();
                               break;
                   }else if(posLevel == 1){ // Si le selecteur était en position 1 > Jeu a 2
                         gameover();
                         break;
                         cout << "Fonction pas encore disponible" << endl;
                   }else if(posLevel == 2){ // Si le selecteur était en position 2 > Quitter
                         break;
                   }
            }
            
        }
        compteurSelector++;
        
    }
}

/*----------------------------------*/
/* Fin affichage du menu principale */
/*----------------------------------*/
