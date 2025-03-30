#include <iostream>

int main() {
    int N;
    while (std::cin >> N && N != 0) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                int value;
                if (i < j)
                    value = i;
                else
                    value = j;

                if (N - 1 - i < value)
                    value = N - 1 - i;

                if (N - 1 - j < value)
                    value = N - 1 - j;

                value += 1;

                if (j == 0)
                    std::cout << "  " << value;
                else
                    std::cout << "   " << value;
            }
            std::cout << "\n";
        }
        std::cout << "\n";
    }
    return 0;
}
