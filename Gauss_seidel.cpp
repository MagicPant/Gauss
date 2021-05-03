#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main(void) {
   //numero de casas decimais
   cout<< setprecision(5)<< fixed;
   
   float a[10][10], b[10], m[10], n[10];
   int p = 0, q = 0, i = 0, j = 0;
   cout << "Entre com o tamanho da matriz : ";
   cin >> p;
   for (i = 0; i < p; i++) {
      for (j = 0; j < p; j++) {
         cout << "a[" << i << ", " << j << " ]=";
         cin >> a[i][j];
      }
   }
   cout << "\nEntre com os termos independentes\n";
   for (i = 0; i < p; i++) {
      cout << "b[" << i << ", " << j << " ]=";
      cin >> b[i];
   }
   cout << "Entre com os valores iniciais de x\n";
   for (i = 0; i < p; i++) {
      cout << "x:[" << i<<"]=";
      cin >> m[i];
   }
   cout << "\nEntre com o numero de iteracoes : ";
   cin >> q;
   while (q> 0) {
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
   }
   return 0;
}