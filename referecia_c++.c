#include<iostream>
using namespace std;
void potencia( int *variavel,int elevado){
     int original = 2;
     if (elevado == 0){
                 *variavel = 1;
                 return;
     }
     if (elevado == 1) return;
     for(int i = 2; i <= elevado; i++){
             *variavel = *variavel*original;
             }
             }
             int main()
             {
                 int dois = 2;
                 int j = 5;
                 potencia( &dois, j);
                 cout << "dois elevado a "<< j <<" : "<< dois << endl;
                 system("PAUSE > null");
                 return 0;
                 }
