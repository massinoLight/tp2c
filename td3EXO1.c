#include<stdio.h>
#include<stdlib.h>



void affiche_vecteur(int *vecteur,int dimantion)
{//ecrire vecteur[] ou *vecteur c'est la meme chose 
int i;
printf("(");
for(i=0;i<dimantion;i++)
{
printf("%d",vecteur[i]);
}
printf(")\n");
}

void affiche_matrice(int **matrice,int ligne,int colonne)//ecrire matrice[][] ou **matrice c'est la meme chose 
{
int i;
for(i=0;i<ligne;i++){
affiche_vecteur(matrice[i],colonne);
}
}

int main(){


return 0;

}
