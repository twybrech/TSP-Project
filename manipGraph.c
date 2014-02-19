#include 'manipGraph.h'
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>

struct graphe 
{
  int taille;
  int* matrice;
};

int rand_a_b(int a,int b)
{
  return rand()%(b-a) +a // Tire un nombre dans l'intervalle [a,b]
}

int distanceSommetFullMatrice(graphe graph,int s1,int s2) // Les sommets sont numérotés de 1 à 10
{
  s1--;
  s2--;
  return graphe->matrice[(graphe.taille*s1)+s2];
}

void initialise_1_n(int* tab,int taille)
{
  for(int i=1;i<taille;i++)
    *tab+i=i;
}

int plusProcheVoisin(int sommet,int* tab_dispo,int taille)
{
  int min,distance,tmp=-1
  for(int i=0;i<taille;i++)
  {
    if(tab_dispo[i]!=-1)
    {
      tmp=distanceSommetFullMatrice(graphe,sommet,i);
      if(tmp<distance)
      {
	distance=tmp;
	min=i;
      }
    }
  }
  return min;
}

void HeuristiquePlusProcheVoisin(graphe graph)
{
  int* tab_a_parcourir= calloc(graph.taille,sizeof(int));
  initialise_1_n(graph.taille);
  int alloue,dernierVisite, = 0;
  aloue++;
  dernierVisite=rand_a_b(1,10);
  printf("%d->",dernierVisite);
  tab_a_parcourir[dernierVisite]=-1;
  while (alloue != graph.taille)
  {
    dernierVisite=plusProcheVoisin(dernierVisite,tab_a_parcourir,graph.taille);
    aloue++;
    tab_a_parcourir[dernierVisite]=-1;
    printf("%d->",dernierVisite);
  }
}

      
	  
	   
  
  

	  
      
      
      
      
  
  



