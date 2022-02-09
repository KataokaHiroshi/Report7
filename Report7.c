#include<stdio.h>

void sortArray(int array[], int size){
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(array[i] < array[j]){
                int tmp = array[i];
                array[i] = array[j];
                array[j] =tmp;
            }
        }
    }
}

int main(){
    const int SIZE = 6; //定数として配列のサイズを宣言                          
    int scores[SIZE] = {100, 60, 70, 100, 90, 80};
    //処理コード
    printf("score = ");
    for(int i=0; i<SIZE; i++){
        printf("%d ", scores[i]);
    }
    printf("\n");
    sortArray(scores, SIZE);
    printf("results = ");
    for(int i=0; i<SIZE; i++){
        printf("%d ", scores[i]);
    }
    return 0;
}