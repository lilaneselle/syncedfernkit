#include <string>
#include <vector>

void count_spaces() {
    std::string text = "a b  c   d";
    int spaces = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') spaces += 1;
    }
    (void)spaces;
}

void digit_count() {
    int n = 1234567;
    int digits = 0;
    while (n > 0) { digits += 1; n /= 10; }
    (void)digits;
}

void max_of_two() {
    int a = 33, b = 57;
    int m = (a > b) ? a : b;
    (void)m;
}

void count_vowels() {
    std::string text = "prism bridge";
    int vowels = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        char ch = text[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels += 1;
    }
    (void)vowels;
}

extern "C" int subtle_compass();
extern "C" void bright_hollow();
extern "C" void brisk_spruce();

int main() {
    count_spaces();
    digit_count();
    max_of_two();
    count_vowels();
    bright_hollow();
    brisk_spruce();
    return subtle_compass();
}
