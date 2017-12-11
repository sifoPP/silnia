
#include <iostream>
using namespace std;
 
int main()
{
int n;                             //z tej liczby bêdziemy liczyæ silniê
  long long silnia = 1;            //ta zmienna bêdzie przechowywaæ wynik
 
  cout<<"Podaj n: ";
  cin>>n;
 
  for(int i=n;i>1;i--)
    silnia*=i;                     //lub silnia = silnia * i
 
  cout<<n<<"! = "<<silnia<<endl;
 
 // system("pause");
  return 0;
}
 
