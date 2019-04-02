#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    float a,b;
    int kode;
    
    cout<< " pilih menu : \n" ;
    cout<< " 1. perkalian (*)\n";
    cout<< " 2.pembagian (/)\n\n";
    cout<< "silahkan masuk kode menu : ";
    cin>> kode;
    cout<< "masukkan angka pertama : ";
    cin>> a;
    cout << "masukkan angka kedua : ";
    cin>> b;
    if (kode == 2 ){
       cout << "\nhasil perkalian dari "<<a<<" * "<<b<<" adalah : "<<a*b<< endl;
    }
    else if ( kode == 2 ){
       cout << "\nhasil pembagian dari "<<a<<" / "<<b<<" adalah : "<<a/b<< endl;
    }
  return 0;
  }
