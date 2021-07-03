#include <iostream>
using namespace std;

double g(double a, double b)
{
    return 2.0 / (1.0 / a + 1.0 / b);
}

void func_2(int* a, int* b, int* c){

    double min = 0, mid = 0, max = 0;
    if ((*a) < (*b) && (*a) < (*c))
    {
        min = (*a);
        mid = (*b);
        max = (*c);
        if ((*b) > (*c))
        {
            swap(mid, max);
        }
    }
    else if ((*b) < (*c) && (*b) < (*a))
    {
        min = (*b);
        mid = (*a);
        max = (*c);
        if ((*a) > (*c))
        {
            swap(mid, max);
        }
    }
    else if ((*c) < (*b) && (*c) < (*a))
    {
        min = (*c);
        mid = (*b);
        max = (*a);
        if ((*b) > (*c))
        {
            swap(mid, max);
        }
    }
    (*a) = min;
    (*b) = mid;
    (*c) = max;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b; 
    cout << "Введите числа: ";//ввод чисел
    cin >> a >> b;
    cout << g(a, b) << endl;//вывод гармонического среднего
      
        ////////////////


    int t, d, n;
    cout << "Введите 3 числа: ";//ввод чисел
    cin >> t >> d >> n;
    func_2(&t, &d, &n);  //функция замены
    cout << "Числа после замены: " << t << " " << d << " " << n  << " " << endl;//вывод
  
    return 0;
}
