#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

void swap(char *x, char *y){
     char t = *x;
     *x = *y;
     *y = t;
}

int main()
{
     string num;
     cin >> num;
     int i, j, n = num.length();

     for(i = n-1 ; i > 0 ; i--){
          if(num[i] > num[i-1])
               break;
     }

     if(i == 0)
          cout << "-1";
     else{
          int min = i;
          for(j = i ; j < n ; j++){
               if(num[min] >= num[j]){
                    min = j;
               }
          }
          swap(&num[min], &num[i-1]);
          sort(num.begin()+i, num.end());
          cout << num;
     }
     return 0;
}
