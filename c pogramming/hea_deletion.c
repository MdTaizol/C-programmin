#include<stdio.h>

int size = 0;

void swap(int *x, int *y){
    int temp = *y;
    *y = *x;
    *x = temp;
}

void heapify(int array[], int size, int i){
    int largest = i;
    int leftnode = 2*i + 1;
    int rightnode = 2*i + 2;

    if(leftnode < size && array[leftnode] > array[largest])
        largest = leftnode;

    if(rightnode < size && array[rightnode] > array[largest])
        largest = rightnode;

    if(largest != i){
        swap(&array[i], &array[largest]);
        heapify(array, size, largest);
    }
}

void insertion(int array[], int newele){
    int i;
    array[size] = newele;
    size++;

    for(i = size/2 - 1; i >= 0; i--){
        heapify(array, size, i);
    }
}

// ⭐ Delete specific value
void deletion(int array[], int value){
    int i, index = -1;
    // Find the index of the value
    for(i = 0; i < size; i++){
        if(array[i] == value){
            index = i;
            break;
        }
    }

    if(index == -1){
        printf("Value %d not found in heap!\n", value);
        return;
    }

    // Replace with last element
    array[index] = array[size - 1];
    size--;

    // Heapify at index
    for(i = size/2 - 1; i >= 0; i--){
        heapify(array, size, i);
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

    printf("Initial Max Heap: ");
    print(array, size);

    deletion(array,6);  // Value 6 delete

    printf("Heap after deleting 6: ");
    print(array, size);

    return 0;
}
