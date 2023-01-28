#include <iostream>
using namespace std;
int main() {
    while (true) {
    cout << "Введите номер операции\n1-Сложение\n2-Вычитание\n3-Умножение\n4-Деление\n5-Числа Фибоначи\n6-Выйти из порограммы" << endl;
    double count1;
    double count2;
    int number;
    int vibor;
        cout << "Ваша операция:";

        while (!(cin >> vibor) || vibor > 6 || vibor < 1) {        //Эта шняга проверяет не введенны ли буквы
            cout << "Такой операции не существует\nВведите номер операции заново:\n";
            cin.clear();
            fflush(stdin);
        }

        switch (vibor) {
            case 1:
                cout << "Вы выбрали - Сложение" << endl;
                break;
            case 2:
                cout << "Вы выбрали - Вычитание" << endl;
                break;
            case 3:
                cout << "Вы выбрали - Умножение" << endl;
                break;
            case 4:
                cout << "Вы выбрали - Деление" << endl;
                break;
            case 5:
                cout << "Вы выбрали - Числа Фибоначи" << endl;
                break;
            case 6:
                ::exit(0);
        }
        if (vibor == 5) {
            cout << "Введите количество итераций:";
            cin >> number;
        } else {
            cout << "Введите первое число:";
            cin >> count1;
            cout << "Введите второе число:";
            cin >> count2;
        }

        if (vibor == 4 && count2 == 0) {
            cout << "Делить на ноль нельзя" << endl;
            cout << "Введите заново второе число:";
            cin >> count2;
            while (count2 == 0) {
                cout << "Делить на ноль нельзя" << endl;
                cout << "Введите заново второе число:";
                cin >> count2;
            }
        }
        switch (vibor) {
            case 1:
                cout << count1 << "+" << count2 << "=" << count1 + count2 << endl;
                break;
            case 2:
                cout << count1 << "-" << count2 << "=" << count1 - count2 << endl;
                break;
            case 3:
                cout << count1 << "*" << count2 << "=" << count1 * count2 << endl;
                break;
            case 4:
                cout << count1 << "/" << count2 << "=" << count1 / count2 << endl;
                cout << "Остаток от деления:" << (int)count1 % (int)count2 << endl;
                break;
            case 5:
                int result = 0;
                int newnumber = 1;
                int newnumber2 = 0;
                int newcount = 0;
                int newresult = 0;
                while (newcount < number) { //оставить ли так или number-1 (так как если считать по сайту промежутки то получается на 1 меньше чем вручную)
                    result = newnumber2 + newnumber;
                    newnumber2 = newnumber;
                    newnumber = result;
                    newcount++;
                    cout << result << "  ";
                    newresult += result;
                }
                cout << endl;
                cout << "Сумма чисел:" << newresult << endl;
                break;
//
        }
    }


}