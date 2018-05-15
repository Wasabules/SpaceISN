void letter(int taille, char lettre, int positionX, int positionY, int R, int V, int B)
{
if(lettre == 'A'){
    MetPoint(taille,positionX,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*4,R,V,B);
}else if(lettre == 'B'){
    MetPoint(taille,positionX,positionY,R,V,B);
    MetPoint(taille,positionX,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*3,R,V,B);
}else if(lettre == 'C'){
    MetPoint(taille,positionX,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX,positionY+taille*3,R,V,B);
    
    MetPoint(taille,positionX+taille*1,positionY,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*4,R,V,B);
}else if(lettre == 'D'){
    MetPoint(taille,positionX,positionY,R,V,B);
    MetPoint(taille,positionX,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*3,R,V,B);
}else if(lettre == 'E'){
    MetPoint(taille,positionX,positionY,R,V,B);
    MetPoint(taille,positionX,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*4,R,V,B);
}else if(lettre == 'F'){
    MetPoint(taille,positionX,positionY,R,V,B);
    MetPoint(taille,positionX,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY,R,V,B);
}else if(lettre == 'G'){
    MetPoint(taille,positionX,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*2,R,V,B);
}else if(lettre == 'H'){
    MetPoint(taille,positionX,positionY,R,V,B);
    MetPoint(taille,positionX,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*4,R,V,B);
}else if(lettre == 'I'){
    MetPoint(taille,positionX,positionY,R,V,B);
    MetPoint(taille,positionX,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY+taille*4,R,V,B);
}else if(lettre == 'J'){
    MetPoint(taille,positionX,positionY,R,V,B);
    MetPoint(taille,positionX,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY,R,V,B);
}else if(lettre == 'K'){
    MetPoint(taille,positionX,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*4,R,V,B);
}else if(lettre == 'L'){
    MetPoint(taille,positionX,positionY,R,V,B);
    MetPoint(taille,positionX,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY+taille*4,R,V,B);
}else if(lettre == 'M'){
    MetPoint(taille,positionX,positionY,R,V,B);
    MetPoint(taille,positionX,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX+taille*4,positionY,R,V,B);
    MetPoint(taille,positionX+taille*4,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX+taille*4,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*4,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX+taille*4,positionY+taille*4,R,V,B);
}else if(lettre == 'N'){
    MetPoint(taille,positionX,positionY,R,V,B);
    MetPoint(taille,positionX,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX+taille*4,positionY,R,V,B);
    MetPoint(taille,positionX+taille*4,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX+taille*4,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*4,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX+taille*4,positionY+taille*4,R,V,B);
}else if(lettre == 'O'){
    MetPoint(taille,positionX,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*3,R,V,B);
}else if(lettre == 'P'){
    MetPoint(taille,positionX,positionY,R,V,B);
    MetPoint(taille,positionX,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*1,R,V,B);
}else if(lettre == 'Q'){
    MetPoint(taille,positionX,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*4,positionY+taille*5,R,V,B);
}else if(lettre == 'R'){
    MetPoint(taille,positionX,positionY,R,V,B);
    MetPoint(taille,positionX,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*4,R,V,B);
}else if(lettre == 'S'){
    MetPoint(taille,positionX,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*3,R,V,B);
}else if(lettre == 'T'){
    MetPoint(taille,positionX,positionY,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY,R,V,B);
}else if(lettre == 'U'){
    MetPoint(taille,positionX,positionY,R,V,B);
    MetPoint(taille,positionX,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*3,R,V,B);
}else if(lettre == 'V'){
    MetPoint(taille,positionX,positionY,R,V,B);
    MetPoint(taille,positionX,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX+taille*4,positionY,R,V,B);
    MetPoint(taille,positionX+taille*4,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX+taille*4,positionY+taille*2,R,V,B);
}else if(lettre == 'W'){
}else if(lettre == 'X'){
    MetPoint(taille,positionX,positionY,R,V,B);
    MetPoint(taille,positionX,positionY+taille*4,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX+taille*1,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX+taille*2,positionY+taille*2,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*1,R,V,B);
    MetPoint(taille,positionX+taille*3,positionY+taille*3,R,V,B);
    MetPoint(taille,positionX+taille*4,positionY,R,V,B);
    MetPoint(taille,positionX+taille*4,positionY+taille*4,R,V,B);
}else if(lettre == 'Y'){
}else if(lettre == 'Z'){
               
}
               
}

