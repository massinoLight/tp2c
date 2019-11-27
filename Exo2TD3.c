#include<stdio.h>
#include<stdlib.h>


//fonction pour afficher un vecteur 
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

//fonction pour afficher une matrice        
 void affiche_matrice(int **matrice,int ligne,int colonne)//ecrire matrice[][] ou **matrice c'est la meme chose 
	{
			int i;
		for(i=0;i<ligne;i++)
		{
			affiche_vecteur(matrice[i],colonne);
		}
		}


//fonction pour allouer dynamiquement un vecteur 

int *alloue_vecteur(int dim,int n){

int i;
int *vecteur=(int *)malloc(dim*sizeof(int));
for(i=0;i<dim;i++){
vecteur[i]=n;
}
return vecteur;
}

//fonction pour libérer un vecteur 
void liberer_vecteur(int  *vecteur){

free(vecteur);
}

//fonction pour déclarer dynamiquement une matrice 
int **alloue_matrice(int ligne,int colonne,int val){

int i,j;
int **matrice=malloc(ligne*sizeof(int *));
for(i=0;i<ligne;i++){
matrice[i]=malloc(colonne *sizeof(int));
}

for(i=0;i<ligne;i++){
 for(j=0;j<colonne;j++){
matrice[i][j]=val+j+i;
}
}
return matrice;
}


//fonction pour liberer l'espace memoire occupé par une matrice
void liberer_matrice(int  **matrice,int ligne){
int i;
for(i=0;i<ligne;i++){
free(matrice[i]);
}
free(matrice);
}


int main(){
int *vec=alloue_vecteur(3,2);
affiche_vecteur(vec,3);
int **m=alloue_matrice(5,5,1);
affiche_matrice(m,5,5);
liberer_matrice(m,5);
printf("la matrice a bien etait libéré \n");
return 0;

}
