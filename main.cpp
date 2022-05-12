#include <iostream>

int main() {
    std::initializer_list<int> mList = {1,2,3,4,5};
    for(auto t : mList)
        std::cout << t;
    return 0;
}
