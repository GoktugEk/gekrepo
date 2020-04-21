#include<stdio.h>

void bubble_sort(int array[],int length){
    int issorted = 1,i,temp;
    while(issorted){
        issorted = 0;
        for(i=1;i<length;i++){
            if(array[i-1] > array[i]){
                temp = array[i];
                array[i] = array[i-1];
                array[i-1] = temp;
                issorted =1;
            }
        }
    }

}



