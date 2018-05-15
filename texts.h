void GameOverText(int taille, int positionX, int positionY, int R, int V, int B){
    letter(taille,'G',positionX,positionY,R,V,B);
    letter(taille,'A',positionX+taille*5,positionY,R,V,B);
    letter(taille,'M',positionX+taille*10,positionY,R,V,B);
    letter(taille,'E',positionX+taille*16,positionY,R,V,B);
    letter(taille,'O',positionX,positionY+taille*6,R,V,B);
    letter(taille,'V',positionX+taille*5,positionY+taille*6,R,V,B);
    letter(taille,'E',positionX+taille*11,positionY+taille*6,R,V,B);
    letter(taille,'R',positionX+taille*16,positionY+taille*6,R,V,B);
}

void MenuStartText(int taille, int positionX, int positionY, int R, int V, int B)
    {
    letter(taille,'S',positionX+taille*5,positionY,R,V,B);
    letter(taille,'P',positionX+taille*10,positionY,R,V,B);
    letter(taille,'A',positionX+taille*15,positionY,R,V,B);
    letter(taille,'C',positionX+taille*20,positionY,R,V,B);
    letter(taille,'E',positionX+taille*25,positionY,R,V,B); 
    letter(taille,'I',positionX+taille*9,positionY+taille*6,R,V,B);
    letter(taille,'S',positionX+taille*14,positionY+taille*6,R,V,B);
    letter(taille,'N',positionX+taille*20,positionY+taille*6,R,V,B);
   
    
}

void ScoreRandom(int taille, int positionX, int positionY, int R, int V, int B)
{
     
     number(taille, 1, positionX, positionY,R,V,B);
     number(taille, 2, positionX+taille*5, positionY,R,V,B);
     number(taille, 3, positionX+taille*10, positionY,R,V,B);
     number(taille, 4, positionX+taille*15, positionY,R,V,B);
     number(taille, 5, positionX+taille*20, positionY,R,V,B);
     number(taille, 6, positionX+taille*25, positionY,R,V,B);
     number(taille, 7, positionX+taille*30, positionY,R,V,B);
}

void MenuJouerText(int taille, int positionX, int positionY, int R, int V, int B)
    {
    letter(taille,'J',positionX+taille*9,positionY,R,V,B);
    letter(taille,'O',positionX+taille*13,positionY,R,V,B);
    letter(taille,'U',positionX+taille*18,positionY,R,V,B);
    letter(taille,'E',positionX+taille*23,positionY,R,V,B);
    letter(taille,'R',positionX+taille*28,positionY,R,V,B);
    
}

void MenuJouerDeuxText(int taille, int positionX, int positionY, int R, int V, int B)
    {
    letter(taille,'A',positionX+taille*7,positionY,R,V,B);
    letter(taille,'D',positionX+taille*14,positionY,R,V,B);
    letter(taille,'E',positionX+taille*19,positionY,R,V,B);
    letter(taille,'U',positionX+taille*24,positionY,R,V,B);
    letter(taille,'X',positionX+taille*29,positionY,R,V,B);
    
}

void MenuQuitterText(int taille, int positionX, int positionY, int R, int V, int B)
    {
    letter(taille,'Q',positionX+taille*5,positionY,R,V,B);
    letter(taille,'U',positionX+taille*10,positionY,R,V,B);
    letter(taille,'I',positionX+taille*15,positionY,R,V,B);
    letter(taille,'T',positionX+taille*19,positionY,R,V,B);
    letter(taille,'T',positionX+taille*23,positionY,R,V,B);
    letter(taille,'E',positionX+taille*27,positionY,R,V,B);
    letter(taille,'R',positionX+taille*32,positionY,R,V,B);
    
}

void ScoreText(int taille, int positionX, int positionY, int R, int V, int B)
    {
    letter(taille,'S',positionX+taille*5,positionY,R,V,B);
    letter(taille,'C',positionX+taille*10,positionY,R,V,B);
    letter(taille,'O',positionX+taille*15,positionY,R,V,B);
    letter(taille,'R',positionX+taille*20,positionY,R,V,B);
    letter(taille,'E',positionX+taille*25,positionY,R,V,B);
    
}
