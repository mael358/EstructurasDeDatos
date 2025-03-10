#include <iostream>
#include <stdio.h>

using namespace std;

template <class T>
class Arithmetic
{
    private:
        T a;
        T b;
    public:
        Arithmetic(T a, T b);
        T add();
        T sub();
};

    template <class T>
    Arithmetic<T>::Arithmetic(T a, T b)
    {
        this->a = a;
        this->b = b;
    }

    template <class T>
    T Arithmetic<T>::add()
    {
        T c;
        c = a + b;
        return c;
    }

    template <class T>
    T Arithmetic<T>::sub()
    {
        T c;
        c = a - b;
        return c;
    }

int main()
{
    Arithmetic<int> ar(10, 5);
    cout << "Int Addition result: " << ar.add() << endl;
    cout << "Int Addition result: " << ar.sub() << endl;

    Arithmetic<float> ar2(1.5, 1.2);
    cout << "Float Addition result: " << ar2.add() << endl;
    cout << "Float Substract result: " << ar2.sub() << endl;

    return 0;
}
