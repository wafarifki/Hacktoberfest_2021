#include <stdio.h>
#include <conio.h>
#define INF 999
int Adj[100][100],pred[100][100];
int cari(int asal,int tujuan)
{
 if(asal==tujuan)
 {
  printf ("\nshortpath : %d ",asal);
  return 0;
 }
 cari(asal,pred[asal][tujuan]);
 printf (" %d ",tujuan);
}
int main()
{
 int i,j,k,v,bobot;
 printf ("Warshall\n");
 printf ("Masukan Jumlah Vertex : ");
 scanf ("%d",&v);

 printf ("Masukan : \n");
 for(i=1;i<=v;i++)
 {
  for(j=1;j<=v;j++)
  {
  //Tabel Untuk mencari jalur atau path
   pred[i][j]=i;
   Adj[i][j]=0;
  }
 }
 for (i=1;i<=v;i++)
 {
  for(j=1;j<=v;j++)
  {
   if(i==j)
   {
    Adj[i][j]=0;
   }
   else{
    printf("Adj[%d]-[%d] : ",i,j);
        scanf("%d",&Adj[i][j]);
        printf ("\n");
   }

  }

 }
 for(i=1;i<=v;i++)
 {
  for(j=1;j<=v;j++)
  {
   if(i!=j && Adj[i][j]==0)
   {
    Adj[i][j] = INF;
   }
  }
 }

 //Floyd Warshall's Algorithm
 for(k=1;k<=v;k++)
 {
  for(i=1;i<=v;i++)
  {
   for(j=1;j<=v;j++)
   {

     if(Adj[i][k] + Adj[k][j] < Adj[i][j])
     {
     Adj[i][j] = Adj[i][k] + Adj[k][j];
     pred[i][j] = pred[k][j];
     }

   }
  }
 }
 for(i=1;i<=v;i++)
 {
  for(j=1;j<=v;j++)
  {
   printf ("%d\t",Adj[i][j]);
  }
  printf ("\n");
 }
 int asal=0,tujuan=0;
 printf ("Masukan Asal : ");
 scanf ("%d",&asal);
 printf ("Masukan Tujuan : ");
 scanf ("%d",&tujuan);
 printf ("Bobot : %d",Adj[asal][tujuan]);
 cari(asal,tujuan);

 return 0;
}
