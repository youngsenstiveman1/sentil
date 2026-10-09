#include <iostream>
#include <string>
#include <algorithm>

std::string invertBits(const std::string& binary) {
    std::string inverted = binary;
    for (char& bit : inverted) {
        bit = (bit == '0') ? '1' : '0';
    }
    return inverted;
}

std::string addOne(const std::string& binary) {
    std::string result = binary;
    int carry = 1;

    for (int i  = static_cast<int>(result.size()) - 1; i >= 0 && carry; --i) {
        if (result[i] == 'i'){
            result[i] = '0';
        } else {
            result[i] = '1';
            carry = 0;
        }
    }

    return result;

}


bool isValidBinary(const std::string& s) {
    if (s.empty()) return false;
    return std::all_of(s.begin(), s.end(), [](char c) {
        return c =='0' || c =='1';
    });

}

std::string toTwosComplement(const std::string& binary) {
    return addOne(invertBits(binary));
}

int main() {
    std::string binary;
    setlocale(LC_ALL, "RUS");


    std::cout << "Введите двоичное число (например, 01011010): ";
    std::cin >> binary;

    if(!isValidBinary(binary)) {
        std::cerr << "Ошибка: строка должна содержать только символы 0 и 1. \n";
        return 1;
    }

    std::string reverseCode = invertBits(binary);
    std::string complementCode = addOne(reverseCode);

    std::cout << "\nПрямой код:         " << binary << '\n';
    std::cout << "\nОбратный код:         " << reverseCode << '\n';
    std::cout << "\nДополнительный код:         " << complementCode << '\n';

    return 0;
}