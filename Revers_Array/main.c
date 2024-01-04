#include <stdio.h>

int numbers [] = {1,2,3,4,5,6};

int revers_arr(int arr[],int length){
int temp = 0;
for(int i = 0 ; i < length/2  ; i++){
    temp = arr[i];
    arr[i] = arr[length - i - 1];
    arr[length - i - 1] = temp;
}
for(int i  = 0 ; i < length ; i++){
    printf("revers array[%d] = %d\n",i,arr[i]);
}

}


int main(){
    int rev  = revers_arr(numbers,6);
}