#include <iostream>
using namespace std;

class Item
{
public:
    int item;
    float price;

    void getData()
    {
        cout << "Enter the item no.: ";
        cin >> item;
        cout << "Enter the price of the item: ";
        cin >> price;
    }
    void display()
    {
        cout << "Item no: " << item << endl;
        cout << "Price of Item: " << price << endl;
    }
};
int main(void)
{
    Item ob;
    Item *o = &ob;
    ob.getData();
    ob.display();
    o->display();
}