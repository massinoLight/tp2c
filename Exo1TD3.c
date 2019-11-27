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

	
int main(){    
	int i;
/*
la matrice  etre alloué dynamiqueent 

*/
		int n=5,m=5;
	int **mat=malloc (n*sizeof(int*));
for (i=0; i<n; i++)
       {
	mat[i]=malloc (m*sizeof(int)); 
 for(int j=0;j<m;j++)
  mat[i][j]=1;
}
int v[]={1,2,3,4,5};

//affiche_vecteur(v,4);            
affiche_matrice(mat,n,m);
return 0;

}
