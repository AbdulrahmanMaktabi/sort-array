#include <stdio.h>
#include <stdlib.h>

int compare(int a , int b){
  if (a > b) return 1;
  else return -1;
}

void sortArray(int *arr , int length , int (*compare)(int , int)){

  int i , j , temp;
  for(i=0; i<length; i++){
    for(j=0; j<length-1; j++){
      if (compare(arr[j] , arr[j+1]) < 0){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }

  for(int i=0; i<length; i++){
    printf("%d ",arr[i]);
    }
}

int main(){

  int arr[] = {5 , 9 , 4 , 7 , 1 , 3};
  sortArray(arr , 6 , compare);

  return 0;
}
