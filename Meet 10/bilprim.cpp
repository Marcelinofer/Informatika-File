/*
Program ini dibuat oleh Marcelino Fernandez tanggal 15/01/2023
*/
#include<iostream>

using namespace std;

int main(){
 int N, faktor = 0,i;
 cin>>N;

 for (i=1;i<=N; i++)
     if (N%i==0){
           faktor++;
     }
     if(faktor==2){
           cout<< "Prima \n";
     }
     else{
           cout<< "Bukan Prima \n";
     }
 return 0;
}
