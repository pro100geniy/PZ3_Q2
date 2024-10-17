#include "Queue.h"

int main() {
    system("chcp 1251 > nul");
    Queue qu1;

    qu1.put(11);
    qu1.put(22);
    cout << qu1.get() << endl;
    cout << qu1.get() << endl;

    qu1.put(33);
    qu1.put(44);
    qu1.put(55);
    qu1.put(66);
    cout << qu1.get() << endl;
    cout << qu1.get() << endl;
    cout << qu1.get() << endl;
    cout << qu1.get() << endl;


    cout << "Добавляем элементы в очередь:\n";
    for (int i = 1; i < 12; i++) {
        qu1.put(i * 11);
    }


    cout << "\nИзвлекаем элементы из очереди:\n";
    for (int i = 0; i < 12; i++) {
        int value = qu1.get();
    }

    return 0;
}
