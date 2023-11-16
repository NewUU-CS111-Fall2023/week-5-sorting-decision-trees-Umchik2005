
    void displayColors(const std::vector<std::vector<char>>& matrix) {
    const char blue = 'b';
    const char yellow = 'y';
    const char white = 'w';
    for (const auto& row : matrix) {
        for (char symbol : row) {
            if (symbol == blue) {
                std::cout << "\033[44m  ";
            } else if (symbol == yellow) {
                std::cout << "\033[43m  ";
            } else if (symbol == white) {
                std::cout << "\033[47m  ";
            } else {
                std::cout << "Unknown symbol";
            }
        }
        std::cout << "\033[0m" << std::endl;
    }
    std::cout << 4 << std::endl;
}
    
