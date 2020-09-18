#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grades[5];
    int input , sum;
    float average=0.0;

    for (int i=0 ; i<5 ; i++){
        printf("\nEnter grade:");
        scanf("%d" ,&input);
        grades[i] = input;

    }

    sort_arr(&grades , 5);
    for (int j=0 ; j<5 ; j++){
        printf("Grade %d is %d\n" ,j , grades[j]);
        sum += grades[j];
    }

}

void sort_arr(int* arr, int size){
    for (int i=0 ; i<size ; i++){
            for (int j=i+1 ; j<size ; j++){
                if (*(arr+i) > *(arr+j)){
                    int temp = *(arr+i);
                    *(arr+i) = *(arr+j);
                    *(arr+j) = temp;
                }
            }
    }
}
