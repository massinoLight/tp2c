#include<stdio.h>
#include<stdlib.h>

struct livre{
char titre[50];
int code;
int prix;
};


struct livre *init_biblio(int n){
int i;
struct livre *resultat=malloc(n*sizeof(struct livre));

for(i=0;i<n;i++){
resultat[i].titre[0]='\0';
resultat[i].code=0;
resultat[i].prix=0;
}
return resultat;
}


//fonction pour afficher une biblio
void affiche_bib(int n,struct livre *bib){
for(int i=0;i<n;i++){
printf("titre: %s , code : %d , prix : %d  \n",bib[i].titre,bib[i].code,bib[i].prix);
}

}

int main(){

struct livre *l=init_biblio(3);

//livre 1
l[0].titre[0]='l';
l[0].titre[1]='i';
l[0].titre[2]='v';
l[0].titre[3]='r';
l[0].titre[4]='e';
l[0].titre[5]='1';
l[0].code=11254;
l[0].prix=125;

//livre 2
l[1].titre[0]='l';
l[1].titre[1]='i';
l[1].titre[2]='v';
l[1].titre[3]='r';
l[1].titre[4]='e';
l[1].titre[5]='2';
l[1].code=11458;
l[1].prix=125;

//livre 3
l[2].titre[0]='l';
l[2].titre[1]='i';
l[2].titre[2]='v';
l[2].titre[3]='r';
l[2].titre[4]='e';
l[2].titre[5]='3';
l[2].code=11459;
l[2].prix=125;

affiche_bib(3,l);
return 0;

}
