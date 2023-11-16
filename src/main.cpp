/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include <string>
#include "task_1.h"
#include "task_2.h"

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
