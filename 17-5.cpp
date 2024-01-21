#include <iostream>
#include <cmath>

using namespace std;

class Vector
{
private:
    double x;
    double y;
    double z;
public:
    void SetVector()
    {
        cout << "Введите х = "; cin >> x;
        cout << "Введите у = "; cin >> y;
        cout << "Введите z = "; cin >> z;
    }
    void ShowVector()
    {
        cout << "Вектор = (" <<  x << "; " << y << "; " << z << ")\n";
    }
    void ShowVectorsModul()
    {
        cout << "Модуль = " << pow(pow(x, 2) + pow(y, 2) + pow(z, 2), (1.0 / 2.0));
    }
};
int main()
{
    system("chcp 1251>nul");
    Vector V;
    V.SetVector();
    V.ShowVector();
    V.ShowVectorsModul();
}
