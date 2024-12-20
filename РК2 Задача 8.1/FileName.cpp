#include <iostream>
#include <bitset>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    system("chcp 1251");

    int A = 0b101101; 
    int B = 0b110011; 

    int and_result = A & B;
    int sum_result = A + B;

    cout << "Результат операции AND: " << bitset<6>(and_result) << endl;
    cout << "Сумма чисел: " << bitset<7>(sum_result) << endl;

    return 0;
}