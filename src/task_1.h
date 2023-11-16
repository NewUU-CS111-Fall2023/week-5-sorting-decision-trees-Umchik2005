/*
 * Author:
 * Date:
 * Name:
 */
void bubbleSort(std::string arr[], int size){
    int i, j;
        for (i = 0; i < size - 1; i++){
            for(int j = 0; j < size - i - 1; j++){
                if(arr[j] > arr[j+1]){
                    std::swap(arr[j], arr[j+1]);
                }
            }
        }
    }  
void printTitles(std::string bookTitles[], int size){
    for(int k = 0; k < size; k++){
        std::cout << bookTitles[k] << "\n";
    }
}  


