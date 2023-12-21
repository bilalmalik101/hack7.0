

//place your function definitions here
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cont(const * arr,int size,int x){
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