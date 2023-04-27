#include <iostream>
using namespace std;

int main() {
   int n, suma = 0;

   cout << "Ingrese un valor para n: ";
   cin >> n;

   for(int i = 0; i <= n; i++) {
      suma += i;
   }

   cout << "La sumatoria de los " << n << " primeros numeros es: " << suma << endl;

 
   return 0;
}