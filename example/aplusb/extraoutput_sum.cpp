#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << a + b << "\n";

    for(int i = 0; i < 100; ++i)
        std::cout << "extra line " << i << "\n";

    return 0;
}
