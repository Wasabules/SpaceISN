#include <formes.h>
#include <cstdlib>
#include <ctime>


    bool debug = true;
    int compteurScore = 0;
    int score;   
    int oldn1, oldn2, oldn3, oldn4, oldn5, oldnb;
    int vie = 1;  // Le nombre de coeur en jeu (Les coeurs affich�s s'adaptent) 
    int const viec = vie;
    int compteurdebug;
    
void clear() {       // Fonction r�cup�rer sur internet pour vider la console
    COORD topLeft  = { 0, 0 };
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO screen;
    DWORD written;

    GetConsoleScreenBufferInfo(console, &screen);
    FillConsoleOutputCharacterA(
        console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written
    );
    FillConsoleOutputAttribute(
        console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE,
        screen.dwSize.X * screen.dwSize.Y, topLeft, &written
    );
    SetConsoleCursorPosition(console, topLeft);
}    


int aleatoire(int a, int b){
    return rand()%(b-a) + a;   
}
    



// Fonction qui permet d'afficher une ligne (Fonctionne a moiti�)
void Ligne(int taille,int positionX, int positionY)
{

     bar(positionX, positionY, 800, positionY+taille);

}

     // Fonction qui permet au programme entier d'attendre X milliseconds
      void Attendre(int ms){
           Sleep(ms);
      }

      // Les positions de bases des coeurs
      int vieX,vieY;
      int vieXbase = 1;
      int vieYbase = 28;
      
      int n1,n2,n3,n4,n5;

      void AffichageScore(int nb){
         
         
        // On sauvegarde le score actuel
        oldnb = nb;   
        
        // On s�pare le nombre du score en 5 chiffres
        n1 = nb%10; 
        nb /= 10;
        n2 = nb%10;
        nb /= 10;
        n3 = nb%10;
        nb /= 10;
        n4 = nb%10;
        nb /=10;
        n5 = nb%10;
        nb /= 10;
        
        if (vie==0) // Si le joueur n'a plus de vie (donc mort)
        {
           number(8, n5, 240, 320,243,214,23);
           number(8, n4, 320, 320,243,214,23);
           number(8, n3, 400, 320,243,214,23);
           number(8, n2, 480, 320,243,214,23);
           number(8, n1, 560, 320,243,214,23);
              
       }else {
             setfillstyle(SOLID_FILL,BLACK);
            // Chaque chiffres sont affich�s ind�pendament
            if (oldn5 != n5) // Pour �viter de raffraichir tout le temps, on le fait d�s que le nombre est diff�rent que le pr�c�dent
            {
               setfillstyle(SOLID_FILL,BLACK);
               bar(((vieXbase + 10 + viec*2)*20),vieYbase*20,((vieXbase + 11 + viec*2)*20),(vieYbase+2)*20); // On affiche un carr� noir avant d'afficher le nombre pour "effacer" l'ancien
               number(5, n5, ((vieXbase + 10 + viec*2)*20), 560,200,200,200); // On affiche le nombre
               oldn5 = n5; // On sauvegarde le nombre actuel
            }
            if (oldn4 != n4) // M�me chose qu'au dessus mais pour le chiffre d'apr�s
            {
               setfillstyle(SOLID_FILL,BLACK);
               bar((vieXbase+12 + viec*2)*20,vieYbase*20,((vieXbase + 13 + viec*2)*20),(vieYbase+2)*20);
               number(5, n4, ((vieXbase + 12 + viec*2)*20), 560,200,200,200);
               oldn4 = n4;
            }
            if (oldn3 != n3)// M�me chose qu'au dessus mais pour le chiffre d'apr�s
            {
               setfillstyle(SOLID_FILL,BLACK);
               bar(((vieXbase + 14 + viec*2)*20),vieYbase*20,((vieXbase + 15 + viec*2)*20),(vieYbase+2)*20);
               number(5, n3, ((vieXbase + 14 + viec*2)*20), 560,200,200,200);
               oldn3 = n3;
            }
            if (oldn2 != n2)// M�me chose qu'au dessus mais pour le chiffre d'apr�s
            {
               setfillstyle(SOLID_FILL,BLACK);
               bar(((vieXbase + 16 + viec*2)*20),vieYbase*20,((vieXbase + 17 + viec*2)*20),(vieYbase+2)*20);
               number(5, n2, ((vieXbase + 16 + viec*2)*20), 560,200,200,200);
               oldn2 = n2;
            }
            if (oldn1 != n1)// M�me chose qu'au dessus mais pour le chiffre d'apr�s
            {
               setfillstyle(SOLID_FILL,BLACK);
               bar(((vieXbase + 18 + viec*2)*20),vieYbase*20,((vieXbase + 20 + viec*2)*20),(vieYbase+2)*20);
               number(5, n1, ((vieXbase + 18 + viec*2)*20), 560,200,200,200);
               oldn1 = n1;
            }
        }
        
        
        
      }



int gestionScore(int param = 0){ // Si aucun param�tre n'est ajout�, la fonction incr�mente par d�faut le score. L'ajout d'un param�tre permet d'emp�cher cela
     //Gestion du score
     if(param == 0){ 
       if (compteurScore > 10)
       {
          score += 1; // On incr�mente le score de 1 � chaque tour de boucle
          compteurScore = 0;
          }
       compteurScore++;
       AffichageScore(score); // On envoit la valeur du score dans la fonction pour l'afficher
     }
       return score;
}

    void AffichageVie(int vie, int viec){

   
        vieX = vieXbase;
        vieY = vieYbase;


       for(int i = 0; i < viec; i++){
           
           forme(5,'m',vieX*20,vieY*20,20,20,20); // On supprimes les coeurs
           vieX += 2; // On d�place le prochain coeur de deux
           
       }

       setfillstyle(SOLID_FILL,COLOR(20,20,20));
       bar((vieX*20)+15,545,(vieX*20)+20,600);
       
       ScoreText(5,((vieX*20)+15),560,200,200,200);
       
        vieX = vieXbase;
        vieY = vieYbase;
        for(int i = 0; i < vie; i++){
           
           forme(5,'m',vieX*20,vieY*20,255,0,0); // On affiche les coeurs
           vieX += 2; // On d�place le prochain coeur de deux
        }
      
       

    }

  


    void gameover(){
         
         for(int i = 0; i <= 3; i++){ 
             setbkcolor(RED);
             cleardevice();
             Attendre(100);
             setbkcolor(BLACK);
             cleardevice();
             Attendre(100);
         }
         
             setbkcolor(BLACK); // On remet le background sur Noir
             cleardevice(); // On efface l'�cran pour afficher le background noir + r�afficher de future �l�ments 

             GameOverText(20,200,60,255,255,255); // On affiche le texte du GameOver
             MenuQuitterText(7, 280, 420, 255, 255, 255);
             
             AffichageScore(gestionScore()); // On affiche le score avec vie = 0
            while(1){ 
                Attendre(10);
                
                
                if (GetKeyState(VK_SPACE) & 0x8000) // On v�rifie si la touche Espace est press� >> Valide le choix du menu
                {
                   break; //permet d'arreter la boucle 
                }
            }
           closegraph(); //fermer le programe 
                               
            
         
    
    }
        int positionX = 400;
        int positionY = 500;
        
void StartParty(){
     
        


// Initialisation des variables utiles pour le jeu
        bool mort = false;     
        bool mousemode = false;
        bool quitter = false;
        int score = 0;
        int compteur = 0;
        int ennemiPositionX = 400;
        int ennemiPositionY = 100;
        int compteurScore = 0, compteurVaisseau = 0, compteurMousemode = 0, compteurTirBalle = 0;
        int acceleration = 0;
        int BalleTirerY, BalleTirerX;
        int compteurTir = 0;
        bool tirer = false;  
        bool toucher = false;  
        bool reverse = false;


        setfillstyle(SOLID_FILL,COLOR(20,20,20)); // Barre de s�paration des informations/jeu (Coeurs/Score)
        bar(0,545,800,550);
        
        
        // On affiche le score � 0
       number(5, 0, ((vieXbase + 10 + viec*2)*20), 560,200,200,200);
       number(5, 0, ((vieXbase + 12 + viec*2)*20), 560,200,200,200);
       number(5, 0, ((vieXbase + 14 + viec*2)*20), 560,200,200,200);
       number(5, 0, ((vieXbase + 16 + viec*2)*20), 560,200,200,200);
       number(5, 0, ((vieXbase + 18 + viec*2)*20), 560,200,200,200);
        
     
        AffichageVie(vie, viec);
        

        
        while(mort == 0) // Tant que le joueur n'est pas mort, la boucle continue d'�tre execut�
        {
                   Sleep(10);
                   if(debug == 1){       // Permet d'afficher des informations utiles dans la console
                       if(compteurdebug > 5){
                           clear();
                           cout << "Position Vaisseau // X : " << positionX  << " Y : " << positionY << endl;
                           cout << "Position Ennemi // X : " << ennemiPositionX  << " Y : " << ennemiPositionY << endl;
                           cout << "Balle tir� // ";
                           if(tirer == 0) cout << "Non" << endl;
                           if(tirer == 1) cout << "Oui // X : " << BalleTirerX << " Y : " << BalleTirerY << endl;;
                           cout << "Position Souris // X : " << mousex() << " Y : " << mousey() << endl;
                           cout << "Score // " << gestionScore(1) << endl;
                           cout << "Vie(s) // " << vie << endl;
                           cout << "Toucher // " << toucher << endl;
                           
                           compteurdebug = 0;
                       }
                       compteurdebug++;
                   }
                   

                   
                   gestionScore();
                   
                   // D�placement de l'�nnemie
                   MetPoint(20,ennemiPositionX,ennemiPositionY,0,0,0); // Effacement de l'ancienne position

                   if ((ennemiPositionX >= 760  && reverse == false) || (ennemiPositionY >= 460) || (ennemiPositionX <= 20  && reverse == true)) // Une fois arriv� au bout de l'�cran, on le renvoit au d�but // **PositionPatched**
                   {
                       if (ennemiPositionX >= 760){ // **PositionPatched**
                          ennemiPositionY += 20; // **PositionPatched**
                          reverse = true;
                       }else if(ennemiPositionX <= 20){ // **PositionPatched**
                             reverse = false;
                             ennemiPositionY += 20;
                       }else{
                             ennemiPositionY = 5;
                             ennemiPositionX = 1;   
                       }
                   }else{ // Sinon on le d�place vers la gauche
                          if (reverse == false){
                                      ennemiPositionX += 1;
                             }else{ 
                                    ennemiPositionX -= 1;
                             }
                                   
                         }
                   if (ennemiPositionY >= 500) // Une fois arriv� en bas de l'�cran, on le renvoit au d�but **PositionPatched**
                   {
                      ennemiPositionY = 100; // **PositionPatched**
                   }

                   MetPoint(20,ennemiPositionX,ennemiPositionY,70,70,70);

                   
                   if (tirer == 0) { // Si "Tirer" = false, (qu'il n'y ai pas de balle sur l'�cran)
                    if (aleatoire(0,50) == 7 ){ // Si le nombre al�atoire vaut 7, une balle est envoy�
                      BalleTirerY = ennemiPositionY+20;
                      BalleTirerX = ennemiPositionX+5;
                       
                      MetPoint(10,BalleTirerX,BalleTirerY,255,255,0);

                      tirer = true;
                      compteurTir = 0;
                    }
                    compteurTir++;
                }else{ // S'il y a une balle, on la d�place sur l'�cran
                       if (compteurTirBalle > (8-acceleration)){ // D�placement de la balle toutes les 8 boucles, nombre de boucle n�c�ssaire qui se r�duit de plus en plus que l'acc�l�ration augmente
                           if(BalleTirerY <= 500){
                                             
                               MetPoint(10,BalleTirerX,BalleTirerY,0,0,0);
                               BalleTirerY += 8;
                               
                               if (acceleration < 20) acceleration += 1;
                               
                               MetPoint(10,BalleTirerX,BalleTirerY,255,255,0);
                           }else{
                                 acceleration = 0;
                                 MetPoint(10,BalleTirerX,BalleTirerY,0,0,0);
                                 tirer = false;
                                 
                           }
                           compteurTirBalle = 0;
                       }
                       compteurTirBalle++;
                    // Dans le cas o� le vaisseau serait touch�
                    if((BalleTirerX >= positionX) && (BalleTirerX <= positionX+20) && (BalleTirerY >= positionY) && (BalleTirerY <= positionY+20)){
                           
                           
                           if(toucher == 0){      // Si le vaisseau est touch�, on �vite de relancer deux fois les op�rations si dessous
                                toucher = true;   // On passe "toucher" sur vrai pour emp�cher une seconde �xecution
                                
                                MetPoint(20,BalleTirerX,BalleTirerY,0,0,0);
                                BalleTirerX = 0,BalleTirerY = 0;
                                tirer = false;    // On passe "toucher" sur faux vu que la balle a �t� d�plac�  
                                vie--;            // On r�duit la vie du joueur
                                   
                                cout << "Vous etes touche !" << endl;
                                
                                if(vie < 1){
                                   cout << "Vous etes mort !" << endl;
                                   mort = true;
                                   gameover();
                                }else{
                                    cout << "Il vous reste " << vie << " coeurs" << endl;
                                    AffichageVie(vie, viec);
                                    toucher = false;
                                }
                          }
                          }
                     }
                   if(mort == 0){
                           
                        // D�placement de l'alli�
                        if (compteurMousemode > 10){
                            if((GetKeyState('M') & 0x8000) && (mousemode == 1)){      // Si la touche "M" est press�, on passe en mode Souris ou Clavier
                                                 compteurMousemode = 0;
                                                 mousemode = false;                           // Si le mode souris �tait d�j� activ�, on le d�sactive
                             }else if((GetKeyState('M') & 0x8000) && (mousemode == 0)){
                                   compteurMousemode = 0;
                                   mousemode = true;
                             
                             }
                         }
                         compteurMousemode++;
                        if(mousemode == 0) {      // Si le mode souris est sur "FALSE" 
                            if((GetKeyState('Q') & 0x8000) || (GetKeyState(VK_LEFT) & 0x8000)) // Si la touche Q ou la fl�che de gauche est press�, on va vers la gauche
                            {
                                if (positionX >= 40)
                                {
                                   MetPoint(20,positionX,positionY,0,0,0);
                                   positionX -= 5;
                                   MetPoint(20,positionX,positionY,255,255,255);
                                }
                                   
                            } else if((GetKeyState('D') & 0x8000) || (GetKeyState(VK_RIGHT) & 0x8000)) // Si la touche D est press�, on va vers la droite
                            {
                                   if (positionX <= 740)         // On emp�che au vaisseau de sortir de l'�cran, on le d�place vers la droite uniquement si sa position est inf�rieur ou �gal � 740
                                                {
                
                                   MetPoint(20,positionX,positionY,0,0,0);     // On efface l'ancien vaisseau pour ensuite le r�afficher
                                   positionX += 5;               // On incr�mente sa position X de 5, ce qui le fait d�placer
                                   MetPoint(20,positionX,positionY,255,255,255);  // On r�affiche le vaisseau
                                   }
                            }else if(GetKeyState(VK_SPACE) & 0x8000){ // Au cas o�..
                                  cout << "vous avez appuyez sur ESPACE !" << endl;
                                  }
                        }else{
                              
                            MetPoint(20,positionX,positionY,0,0,0);
                            
                            if ((mousex() >= 40) && (mousex() <= 740)) { // On v�rifie que la souris ne soit pas hors du cadre du jeu
                               positionX = mousex(); // Position X de la souris = Position du vaisseau
                            }
                            MetPoint(20,positionX,positionY,255,255,255); 
                        
                        }
                        
                        MetPoint(20,positionX,positionY,255,255,255);

                }

                
                   
                        
        }
}
