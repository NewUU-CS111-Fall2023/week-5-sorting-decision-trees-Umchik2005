
void swappingSoldiers(std::string soldiers[], int size){ 
        for (int i = 0; i < size - 1; i = i + 2){
        std::swap(soldiers[i], soldiers[i+1]);
        }
}