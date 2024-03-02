#include <iostream>
#include <string>
#include <vector>
int main() {
    std::vector <int> a; int count = 1; 
    setlocale(LC_ALL, "Ru");
    std::system("chcp 1251");
    std::string s;
    std::cout << "¬ведите первое и второе слово через нижнее подчЄркивание: ";
    std::getline(std::cin, s);
    for (int i = 0; i < s.size(); i++) {
        for (int j = i + 1; j < s.size(); j++) {
            if (s[i] == s[j] && s[i] != ' ') {
                s[j] = ' '; count++;
            }
        }
        if (s[i] != '_' && s[i] != ' ') { a.push_back(s[i]); a.push_back(count); }
        count = 1;
        s[i] = ' ';
    }
    for (int i = 0; i < a.size() - 1; i += 2) {
        std::cout << char(a[i]) << a[i + 1];
    }
}

