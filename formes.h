void forme(int taille, char forme, int positionX, int positionY,int R,int V,int B)
     {
     if(forme == 'c'){ // Chevron
             MetPoint(taille,positionX,positionY,R,V,B); // Fonction dans "Library.h"
             MetPoint(taille,positionX,positionY+taille*4,R,V,B);
             MetPoint(taille,positionX+taille*1,positionY+taille*1,R,V,B);
             MetPoint(taille,positionX+taille*1,positionY+taille*3,R,V,B);
             MetPoint(taille,positionX+taille*2,positionY+taille*2,R,V,B);
}else if(forme == 'i') { // Chevron inversé
             MetPoint(taille,positionX,positionY+2,R,V,B);
             MetPoint(taille,positionX+taille*1,positionY+taille*1,R,V,B);
             MetPoint(taille,positionX+taille*1,positionY+taille*3,R,V,B);
             MetPoint(taille,positionX+taille*2,positionY,R,V,B);
             MetPoint(taille,positionX+taille*2,positionY+taille*4,R,V,B);
}else if(forme == 'm') { // Coeur de lion
             MetPoint(taille,positionX,positionY+taille*1,R,V,B);
             MetPoint(taille,positionX,positionY+taille*2,R,V,B);
             MetPoint(taille,positionX+taille,positionY,R,V,B);
             MetPoint(taille,positionX+taille,positionY+taille,R,V,B);
             MetPoint(taille,positionX+taille*2,positionY+taille,R,V,B);
             MetPoint(taille,positionX+taille,positionY+taille*2,R,V,B);
             MetPoint(taille,positionX+taille,positionY+taille*3,R,V,B);
             MetPoint(taille,positionX+taille*2,positionY,R,V,B);
             MetPoint(taille,positionX+taille*2,positionY+taille*2,R,V,B);
             MetPoint(taille,positionX+taille*2,positionY+taille*3,R,V,B);
             MetPoint(taille,positionX+taille*2,positionY+taille*4,R,V,B);
             MetPoint(taille,positionX+taille*3,positionY+taille*1,R,V,B);
             MetPoint(taille,positionX+taille*3,positionY+taille*2,R,V,B);
             MetPoint(taille,positionX+taille*3,positionY+taille*3,R,V,B);
             MetPoint(taille,positionX+taille*3,positionY+taille*4,R,V,B);
             MetPoint(taille,positionX+taille*3,positionY+taille*5,R,V,B);
             MetPoint(taille,positionX+taille*4,positionY,R,V,B);
             MetPoint(taille,positionX+taille*4,positionY+taille*1,R,V,B);
             MetPoint(taille,positionX+taille*4,positionY+taille*2,R,V,B);
             MetPoint(taille,positionX+taille*4,positionY+taille*3,R,V,B);
             MetPoint(taille,positionX+taille*4,positionY+taille*4,R,V,B);
             MetPoint(taille,positionX+taille*5,positionY,R,V,B);
             MetPoint(taille,positionX+taille*5,positionY+taille*1,R,V,B);
             MetPoint(taille,positionX+taille*5,positionY+taille*2,R,V,B);
             MetPoint(taille,positionX+taille*5,positionY+taille*3,R,V,B);
             MetPoint(taille,positionX+taille*6,positionY+taille*1,R,V,B);
             MetPoint(taille,positionX+taille*6,positionY+taille*2,R,V,B);



}else if(forme == 'b') { 



}
               
}
