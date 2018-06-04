#include <iostream>
using namespace std;

class Component
{
public:
    virtual void Operation() = 0;
};

class ConcreteComponent : public Component
{
public:
    void Operation()
    {
        cout << "具体对象的操作" << endl;
    }
};

class Decorator: public Component
{
protected:
    Component *component;

public:
    Decorator(Component *component) { this->component = component; }
    void Operation() {
        if (component != nullptr) {
            component->Operation();
        }
    } 
};

class ConcreteDecoratorA : public Decorator
{
private:
    string addedState;
public:
    ConcreteDecoratorA(Component *component) : Decorator(component) {}

    void Operation() {
        addedState = "New State";
        cout << "具体装饰对象A的操作" << endl;
    }

};

class ConcreteDecoratorB : public Decorator
{
private:
    string addedState;
public:
    ConcreteDecoratorB(Component *component) : Decorator(component) {}
    void Operation() {
        addedState = "New State";
        cout << "具体装饰对象B的操作" << endl;
    }

    void AddedBehavior() {}
};

int main()
{
    ConcreteComponent c;
    ConcreteDecoratorA d1(&c);
    ConcreteDecoratorB d2(&d1);

    d2.Operation();
    return 0;
}
