#include <iostream>
#include <vector>

int main() {
    std::vector<int> dynamicVector;
    std::cout << "Initial capacity: " << dynamicVector.capacity() << std::endl;

    for (int i = 0; i < 10; ++i) {
        dynamicVector.push_back(i);
        std::cout << "Added element: " << i << ", Size: " << dynamicVector.size()
                  << ", Capacity: " << dynamicVector.capacity() << std::endl;
    }

    std::cout << "\nAdding more elements to demonstrate dynamic resizing...\n";
    for (int i = 10; i < 20; ++i) {
        dynamicVector.push_back(i);
        std::cout << "Added element: " << i << ", Size: " << dynamicVector.size()
                  << ", Capacity: " << dynamicVector.capacity() << std::endl;
    }

    return 0;
}
