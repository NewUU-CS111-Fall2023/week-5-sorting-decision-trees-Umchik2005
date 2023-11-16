void selectionSort(int arr[], int size){
    int i, j, minInt;
    for(i = 0; i < size - 1; i++){
        minInt = i;
        for(j = i + 1; j < size; j++){
            if(arr[j] < arr[minInt]){
                minInt = j;
            }
        }
        if(minInt != i){
            std::swap(arr[minInt], arr[i]);
        }
    }
}