#include <iostream>
#include <vector>

int main() {
    std::vector<int> array;
    int n;
    int element;

    // data input
    do {
        std::cout << "Enter N:";
        std::cin >> n;
    }while( n <= 0 );

    array.resize(n);

    std::cout << "Enter element:";
    for(int i=0; i<n; i++) {
        std::cin >> array[i];
    }

    std::cout << "Enter element test:";
    std::cin >> element;

    // task completion
    for(int i=0; i<array.size(); i++) {
        int newSize = array.size();
        while( (i<newSize) && (array[i] == element) ) {
            newSize--;
            for(int j=i; j<newSize; j++)
                array[j] = array[j+1];
        }
        array.resize(newSize);
    }

    // result output
    std::cout << "Result:";
    for(int i=0; i<array.size(); i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;

    return 0;
}
