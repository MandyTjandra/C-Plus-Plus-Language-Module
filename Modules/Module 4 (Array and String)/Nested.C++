#include <iostream>

int main() {
    int i, j;
    for (i = 1; i <= 10; ++i) {
        std::cout << "Outer loop, iteration " << i << std::endl;

        for (j = 1; j <= 10; j++) {
            std::cout << "Inner loop, i = " << i << ", j = " << j << std::endl;

            if (i == 10) {
                std::cout << "This is the 10th iteration of the outer loop." << std::endl;
            }
        }
    }

    return 0;
}
