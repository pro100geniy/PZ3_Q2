#include <iostream>
using namespace std;

class Queue {
private:
    static const int MAX = 10;
    int qu[MAX];
    int head;
    int tail;
    int count;   

public:
    
    Queue() : head(0), tail(0), count(0) {}

   
    void put(int value) {
        if (count == MAX) {
            cout << "Ошибка: Очередь переполнена.\n";
            return;
        }
        qu[tail] = value;
        tail = (tail + 1) % MAX; 
        count++;
        cout << "Элемент " << value << " добавлен в очередь. Текущее количество элементов: " << count << "\n";
    }

    
    int get() {
        if (count == 0) {
            cout << "Ошибка: Очередь пуста.\n";
            return -1;
        }
        int value = qu[head];
        head = (head + 1) % MAX;
        count--;
        cout << "Извлечен элемент: " << value << ". Текущее количество элементов: " << count << "\n";
        return value;
    }

};