#include <iostream>
#include <forward_list>
#include <string>
using namespace std;

int main() {
    // 1. Створення списку з початкових елементів
    forward_list<string> services = {
        "Google Drive",
        "OneDrive",
        "Dropbox",
        "GitHub",
        "iCloud"
    };

    // 2. Елемент для пошуку (згідно з варіантом)
    string searchElement = "GitHub";
    bool found = false;

    // Перевірка наявності елемента за допомогою ітератора
    for (auto it = services.begin(); it != services.end(); ++it) {
        if (*it == searchElement) {
            found = true;
            break;
        }
    }

    // 3. Виведення результату
    if (found) {
        cout << "Елемент знайдено" << endl;
    } else {
        cout << "Елемент не знайдено" << endl;
    }

    return 0;
}