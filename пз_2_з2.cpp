#include <iostream>
#include <forward_list>
#include <string>
using namespace std;

int main() {
    // 1. Створення списку з першим елементом
    forward_list<string> services;
    services.push_front("Google Drive");

    // 2. Додавання двох нових елементів на початок (за тематикою хмарних сервісів)
    services.push_front("AWS");
    services.push_front("Azure");

    // 3. Виведення всіх елементів
    cout << "Список після додавання двох елементів:" << endl;
    for (const string& s : services) {
        cout << s << endl;
    }
    cout << endl;

    // 4. Видалення першого елемента
    services.pop_front();

    // 5. Повторне виведення списку
    cout << "Список після видалення першого елемента:" << endl;
    for (const string& s : services) {
        cout << s << endl;
    }

    return 0;
}