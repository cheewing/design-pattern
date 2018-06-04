#include <iostream>
using namespace std;

class Singleton
{
public:
    static Singleton *getInstance();

private:
    Singleton() {}
    ~Singleton();
    static Singleton *m_pInstance;
};

Singleton* Singleton::m_pInstance = new Singleton();

Singleton* Singleton::getInstance()
{
    return m_pInstance;
}

int main()
{
    Singleton *instance1 = Singleton::getInstance();
    Singleton *instance2 = Singleton::getInstance();

    if (instance1 == instance2)
    {
        cout << "instance1 == instance2" << endl;
    }
    return 0;
}