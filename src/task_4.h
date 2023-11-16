int numberOfSmallerElements(int numbers[], int size){
    int count = 0;
    for (int i = 0; i < size; i++){
        if(i == 0){
            if(numbers[i] > numbers[i+1]){
                count++;
            }
        } else if(i == size - 1){
            if(numbers[i] < numbers[i-1]){
                count++;
            }
        } else {
            if(numbers[i-1] < numbers[i] && numbers[i] > numbers[i+1]){
                count++;
            }
        }
    }
    return count;
}