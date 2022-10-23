#include <iostream>
#include <string>
#include "Header.h"

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    int x = 0;
    int y = 0; 
    int operation = 0;
    int result = 0;
    std::string name_op;
    std::cout << "Введите первое число: ";
    std::cin >> x;
    std::cout << "Введите второе число: ";
    std::cin >> y;
    std::cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> operation;
    
    switch (operation)
    {
    case 1:
        name_op = " сложить ";
        result = add(x, y);
        break;
    case 2:
        name_op = " отнять ";
        result = sub(x, y);
        break;
    case 3:
        name_op = " умножить на ";
        result = multi(x, y);
        break;
    case 4:
        name_op = " разделить на ";
        result = divide(x, y);
        break;
    case 5:
        name_op = " в степени ";
        result = degree(x, y);
        break;
    default:
        std::cout << "Некорректный ввод команды, дальнейшие действия программы не верны" << std::endl;
        break;
    }
    std::cout << x << name_op << y << " = " << result << std::endl;
    return 0;
}
