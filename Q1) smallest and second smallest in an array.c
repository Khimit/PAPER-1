#include <stdio.h>

int main() {
   
   int arr[] = {12,13,1,10,34,1};
   int n = sizeof(arr) / sizeof(arr[0]);
   int minimum_in_array = arr[0];
   int first_smallest , second_smallest;

   // traverse first time and get first_smallest element in array
   for(int i = 0 ; i < n ; i++){
       if(arr[i] < minimum_in_array){
           minimum_in_array = arr[i];
       }
   }

   first_smallest = minimum_in_array;
   minimum_in_array = arr[0];

   // traverse second time and get second_smallest element in array
   for(int i = 0 ; i < n ; i++){
       if(arr[i] < minimum_in_array && arr[i] > first_smallest){
           minimum_in_array = arr[i];
       }
   }

   second_smallest = minimum_in_array;

   printf("The smallest element is %d and second smallest element is %d", first_smallest, second_smallest);
}
