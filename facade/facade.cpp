#include <iostream>
using namespace std;

class Stock1
{
public:
    void Sell() {
        cout << "股票1卖出" << endl;
    }

    void Buy() {
        cout << "股票1买入" << endl;
    }
};

class Stock2
{
public:
    void Sell() {
        cout << "股票2卖出" << endl;
    }

    void Buy() {
        cout << "股票2买入" << endl;
    }
};

class Stock3
{
public:
    void Sell() {
        cout << "股票3卖出" << endl;
    }

    void Buy() {
        cout << "股票3买入" << endl;
    }
};

class NationalDebt1
{
public:
    void Sell() {
        cout << "国债1卖出" << endl;
    }

    void Buy() {
        cout << "国债1买入" << endl;
    }
};

class Realty1
{
public:
    void Sell() {
        cout << "房地产1卖出" << endl;
    }

    void Buy() {
        cout << "房地产1买入" << endl;
    }
};

class Fund
{
public:
    Fund() {
        stock1 = new Stock1();
        stock2 = new Stock2();
        stock3 = new Stock3();
        nd1 = new NationalDebt1();
        rt1 = new Realty1();
    }

    void BuyFund() {
        stock1->Buy();
        stock2->Buy();
        stock3->Buy();
        nd1->Buy();
        rt1->Buy();
    }

    void SellFund() {
        stock1->Sell();
        stock2->Sell();
        stock3->Sell();
        nd1->Sell();
        rt1->Sell();
    }

private:
    Stock1 *stock1;
    Stock2 *stock2;
    Stock3 *stock3;
    NationalDebt1 *nd1;
    Realty1 *rt1;
};

int main()
{
    Fund *jijin = new Fund();
    jijin->BuyFund();
    jijin->SellFund();
    return 0;
}