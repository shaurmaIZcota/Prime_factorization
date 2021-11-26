#include <iostream>

using namespace std;

bool is_prime(int a) {
    if (a == 2) return true; 
    if (a % 2 == 0) return false; 

    for (int i = 3; i <= sqrt(a); i += 2) {

        if (a % i == 0) return false;

    }
    return true;
}

int main() {

    int in_num; 
    setlocale(LC_ALL, "Russian");// подключаем русский язык
    cout << "Программа вычисления простых множителей числа" << endl;
    
    
    do {

        cout << "n = ";
        cin >> in_num;// принимаем значение входного числа

    } while (in_num < 1);

    if (is_prime(in_num)) {
        // проверяем число на простоту
        cout << "Число простое"<<endl;
        return 0;

    }
    int collis_num = in_num; // создаем переменную для взаимодействия
    cout << in_num << " = "; 
    for (int i = 2; i <= collis_num; ) {

        if (collis_num % i == 0) { // проверяем кратность чисел

            cout << i;
            collis_num /= i;            
            if (collis_num != 1) {
                cout << "*"; 

            }
        }
        else i++; // увеличиваем число только тогда, когда оно не кратно входному
    }

}
