#include<stdio.h>

int size = 0;

void swap(int *x, int *y){
    int temp = *y;
    *y = *x;
    *x = temp;
}

void heap(int array[], int size, int i){
    int largest = i;
    int leftnode = 2*i + 1;
    int rightnode = 2*i + 2;

    if(leftnode < size && array[leftnode] > array[largest])
        largest = leftnode;

    if(rightnode < size && array[rightnode] > array[largest])
        largest = rightnode;

    if(largest != i){
        swap(&array[i], &array[largest]);
        heap(array, size, largest);
    }
}

void insertion(int array[], int newele){
    int i;
    array[size] = newele;
    size++;

    for(i = size/2 - 1; i >= 0; i--){
        heap(array, size, i);
    }
}

void print(int array[], int size){
    int i;
    for(i=0; i<size; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main(){
    int array[10];

    insertion(array,10);
    insertion(array,3);
    insertion(array,4);
    insertion(array,2);
    insertion(array,6);

    printf("The heapified max heap elements are: ");
    print(array, size);

    return 0;
}
