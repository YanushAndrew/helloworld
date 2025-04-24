#include <iostream>
#include <cmath>

using namespace std;

int fact(int i);

int main()
{
// наскільки я зрозумів - завдання у другому ДЗ: реалізація факторіалу
// тобто функції, яка буде рахувати кількість доступних шляхів
// тому тут замість 5 може бути будь-яке число, факторіал якого буде в межах допустимого для формату integer
    cout << fact(5) << endl;
    return 0;
}

int fact(int i)
{
    int res = 1;
    for(int o = 1; o <= i; o++)
    {
        res *= o;
    }
    return res;
}