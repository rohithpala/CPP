#include<iostream>
using namespace std;

int main()
{
     int i;
     for (i = 1; i <= 10; i++){
          cout << i << " ";
     } cout << endl;

     while (i >= 1){
          cout << i << " ";
          i--;
     } cout << endl;
     
     do{
          cout << i << " ";
          i++;
     }while(i <= 10);

     return 0;
}
