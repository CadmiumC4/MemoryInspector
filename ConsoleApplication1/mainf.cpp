#include <iostream>
#include <string>
#include <cstdint>

int main() {
    std::cout << u8" Blok sayısını girin: \n";
    std::string amountInput;
    std::getline(std::cin, amountInput);
    std::cout << u8"Blok uzunluğunu girin: \n";
    std::string lengthInput;
    std::getline(std::cin, lengthInput);

    int amount = std::stoi(amountInput);
    int length = std::stoi(lengthInput);

    std::cout << length << u8" bayttan " << amount << u8" adet blok (" <<
        (amount * length) << u8" bayt)\n [(E)vet veya (H)ayır]\n";
    if (std::cin.get() != 'H') {
        std::string block;
        const int size = amount * length;
        block.reserve(size);
        for (int index = 0; index < size; index += 1)
            std::cout << "\t" << index << ":\t" << block[index] << '\n';
    }
    return 0;
}