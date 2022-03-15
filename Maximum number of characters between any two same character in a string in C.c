#include <stdio.h>
#include <stdio.h>
#include <math.h>
int maxChars(char str[],int n){
   int size = n;
   int maxC = -1;
   for (int i = 0; i < n - 1; i++)
      for (int j = i + 1; j < n; j++)
         if (str[i] == str[j]){
            int temp=abs(j-i-1);
            maxC = maxC>temp?maxC:temp;
         }
   return maxC;
}
int main(){
   char Str[] = "AbcAaBcbC";
   printf("Maximum number of characters between any two same character in a string :%d",
   maxChars(Str,9) );
   return 0;
}