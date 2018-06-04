#include <iostream>
using namespace std;

class Girl
{
public:
    Girl(char *name = "") : mName(name) {}
    char *getName() { return mName; }
private:
    char *mName;
};

class GiveGift
{
public:
    virtual void GiveDolls() = 0;
};

class Pursuit : public GiveGift
{
public:
    Pursuit(Girl mm) : girl(mm) {}
    void GiveDolls() {
        cout << "give " << girl.getName() << " dolls!" << endl;
    }
private:
    Girl girl;
};

class Proxy : public GiveGift
{
public:
    Proxy(Girl mm) {
        pursuit = new Pursuit(mm);
    }
    void GiveDolls() { pursuit->GiveDolls(); }
private:
    Pursuit *pursuit;
};



int main()
{
    Girl girl("jiaojiao");
    Proxy proxy(girl);
    proxy.GiveDolls();
    return 0;
}