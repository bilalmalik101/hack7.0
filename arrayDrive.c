#include<stdio.h>
#include"array_utils.h"
int main(){
    //check array for num
    int n=7;
int testArray[]={8,6,7,5,3,0,9};
int check=contains(testArray,n,5);
if(check==1){
    printf("The numb %d in array\n",5);

}
else{
    printf("the numb %d not in array\n,",5);
}
int i=0;
int j=6;
int arr[]={3,4,5,3,2,1,3,4};
int checkelement=containsWithin(arr,8,4,i,j);
if(checkelement=1){
printf("the number %d in array in range %d to %d\n",4,i,j);

}
int oldSize=6;
  int arr2[]={2,3,4,5,6,7};
  int newSize=8;
  int*copyArray=paddedcopy(arr2,oldSize,newSize);
  if(copyArray!=NULL){
    printarray(copyArray,newSize);
  }
  int arr3[]{10,15,5,25,0};
  printarray(arr3,5);
  reverse(arr3,5);
  printarray(arr3,5);
  printarray(arr,8);
  int*reverseCpyAry=reversecopy(arr,8);
  if(reverseCpyAry !=NULL){
    printfarray(reverseCpyAry,8);
  }

}