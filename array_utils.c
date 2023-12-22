

//place your function definitions here
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cont(const*arr,int size,int x){
    if(size<=0){
        printf("invalid input\n");
        return 0;

    }
    int check=0;
    // loop to check element
    for(int i=0;i<size;i++){
        if(arr[i]==x){
         check++;
         break;
        }    
}
if(check !=0){
    return 1;
}
else{
    return 0;
}

}
 int containsWithin(const int *arr, int size, int x, int i, int j){
  
    if(size<=0||i<0||j>size){
        printf("Invalide input to function...");
        return 0;
    }
    int check=0;
    for(int index=i;index<j;index++){
        if(arr[index]==x){
            check++;
            break;
        }
    }
    if(check==1){
        return 1;
    }
    else{
        return 0;
    }
}
//make dynamic array
int * paddedCopy(const int *arr, int oldSize, int newSize){
    if(arr==NULL||oldSize <=0|| newSize<=0){
        printf("Invalide Input to function...\n");
        return NULL;}
}
int*copyArray=(int*)malloc(newSize * sizeof(int));
if(copyArray==NULL){
    printf("memory allocation ");
    return NULL;

}
//loop for run and chheck condition
for(int i=0;i<newSize;i++){
    if(i<oldSize){
        copyArray[i]=arr[i];

    }else{
        copyArray[i]=0;
    }
}
return copyArray;
