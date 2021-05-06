#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
using namespace std;
int main(void) {
   //numero de casas decimais
   int precisao;
   printf("Entre com a precisao de casas decimais: ");
   scanf("%d",&precisao);
   cout<<setprecision(precisao)<< fixed;
   
   float a[10][10], b[10], m[10], n[10];
   int p = 0, q = 0, i = 0, j = 0, k=0;
   float *b1,*m1;
   b1 = b;
   m1 = m;

   cout << "\nEntre com o tamanho da matriz : ";
   cin >> p;
   for (i = 0; i < p; i++) {
      for (j = 0; j < p; j++) {
         cout << "a[" << i+1 << ", " << j+1 << " ]=";
         cin >> a[i][j];
      }
   }
   cout << "\nEntre com os termos independentes\n";
   for (i = 0; i < p; i++) {
      printf("\n[%d]:",i+1);
      scanf("%f",&b1[i]);
   }
   cout << "Entre com os valores iniciais de x\n";
   for (i = 0; i < p; i++) {
      printf("\n[%d]:",i+1);
      scanf("%f",&m1[i]);
                   
   }
   cout << "\nEntre com o numero de iteracoes : ";
   cin >> q;
   while (q> 0) {
      printf("\n%d iteracao: ",k+1);
      printf("\n");
      for (i = 0; i < p; i++) {
         n[i] = (b[i] / a[i][i]);
         for (j = 0; j < p; j++) {
            if (j == i)
               continue;
            n[i] = n[i] - ((a[i][j] / a[i][i]) * m[j]);
            m[i] = n[i];
         }
         cout<<"x"<<i + 1 << "="<<n[i]<<" ";
      }
      cout << "\n";
      q--;
      k++;
   }
   cout<<"\n\n";
   system("pause");
   return 0;
}