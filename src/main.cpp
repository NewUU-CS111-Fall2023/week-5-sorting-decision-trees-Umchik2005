/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include <string>
#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_4.h"

int main() {
    std::cout << "Task 1" << std::endl;
    std::string booksTitle[] = {"Catcher in the Rye", 
                                "Pride and Prejudice",
                                "To Kill a Mockingbird",
                                "The Great Gatsby", 
                                "Moby Dick" 
                                };
    int size = sizeof(booksTitle) / sizeof(booksTitle[0]);

    std::cout << "Before sorting: " << std::endl;
    for(std::string s: booksTitle){
        std::cout << s << std::endl;
    }

    std::cout << "After sorting: " << std::endl;
    bubbleSort(booksTitle, size);
    printTitles(booksTitle, size);

    std::cout << "////////////////////////////////////////////" << std::endl;

    std::cout << "Task 2" << std::endl;
    int arr[] = {8, 3, 12, 6, 1};
    int size2 = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Before sorting: " << std::endl;
    for(int a: arr){
        std::cout << a << " ";
    }
    std::cout << std::endl;

    selectionSort(arr, size2);

    std::cout << "After sorting: " << std::endl;

    for(int b:arr){
        std::cout << b << " ";
    }
    std::cout << std::endl;
    std::cout << "////////////////////////////////////////////" << std::endl;
    
    std::cout << "Task 3" << std::endl;

    std::string soldiers[] = {"Alpha", "Bravo", "Charlie", "Delta", "Echo"};
    int size3 = sizeof(soldiers) / sizeof(soldiers[0]);
    
    std::cout << "Before sorting: " << std::endl;
    for(std::string s: soldiers){
        std::cout << s << " ";
    }
    std::cout << std::endl;

    std::cout << "After sorting: " << std:: endl;
    swappingSoldiers(soldiers, size3);

    for(std::string s: soldiers){
        std::cout << s << " ";
    }
    std::cout << std::endl;
    std::cout << "////////////////////////////////////////////" << std::endl;

    std::cout << "Task 4" << std::endl;
    int numbers[] = {5, 2, 8, 1, 4, 6};
    int size4 = sizeof(numbers) / sizeof(numbers[0]);

    int numOfSmallerNum = numberOfSmallerElements(numbers, size4);
    std::cout << numOfSmallerNum << std::endl;
    std::cout << "////////////////////////////////////////////" << std::endl;
    // std::cout << "Task 1" << std::endl;
    // // call for task 1
    // std::cout << "Task 2" << std::endl;
    // // call for task 2
    // std::cout << "Task 3" << std::endl;
    // // call for task 3
    // std::cout << "Task 4" << std::endl;
    // // call for task 4
    // std::cout << "Task 5" << std::endl;
    // // call for task 5
    return 0;
}
