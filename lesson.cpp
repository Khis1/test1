#include <iostream>

using namespace std;

class Chef
{
    public:
        void makeChicken()
        {
            cout << "The chef makes yumy chicken" << endl;
        }

        void makeSalad()
        {
            cout << "The chef makes salad" << endl;
        }

        void pakeSpecialDish()
        {
            cout << "The chef makes bbq ribs" << endl;
        }
};

class ItalianChef : public Chef
{
    public:
        void makePasta()
        {
            cout << "The chef makes pasta" << endl;
        }

};

int main() 
{
    Chef chef;
    chef.makeChicken();

    ItalianChef italianChef;
    italianChef.makePasta();
    return 0;
}



