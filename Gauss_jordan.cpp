#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>

#define   SIZE   10

using namespace std;

int main()
{
	 float a[SIZE][SIZE], x[SIZE], ratio;
	 int i,j,k,n;

     /* Selecionando precisão de casas decimais*/
     cout<< setprecision(3)<< fixed;

	 /* Inputs */
	 /* 1. Lendo tamanho da matriz */
	 cout<<"escreva o numero de linhas: ";
	 cin>>n;

	 /* 2. lendo numeros da matriz */
	 cout<<"escreva os numeros da matriz: "<< endl;
	 for(i=1;i<=n;i++)
	 {
		  for(j=1;j<=n+1;j++)
		  {
			   cout<<"a["<< i<<"]"<< j<<"]= ";
			   cin>>a[i][j];
		  }
	 }
    /* Aplicando eliminação de gauss jordan */
     for(i=1;i<=n;i++)
     {
          if(a[i][i] == 0.0)
          {
               cout<<"Erro na formula!";
               exit(0);
          }
          for(j=1;j<=n;j++)
          {
               if(i!=j)
               {
                    ratio = a[j][i]/a[i][i];
                    for(k=1;k<=n+1;k++)
                    {
                        a[j][k] = a[j][k] - ratio*a[i][k];
                    }
               }
          }
     }
     /* Obtendo solução */
     for(i=1;i<=n;i++)
     {
        x[i] = a[i][n+1]/a[i][i];
     }

	 /* Mostra solução */
	 cout<< endl<<"Solucao: "<< endl;
	 for(i=1;i<=n;i++)
	 {
	  	cout<<"x["<< i<<"] = "<< x[i]<< endl;
	 }

	 return(0);
}