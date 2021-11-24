#include <iostream>
using namespace std;

class Item
{
public:
    int item;
    double price;
    Item()
    {
        item = 0;
        price = 0.0;
    }
    void getData()
    {
        cout << "Enter the item no. : ";
        cin >> item;
        cout << "Enter the price of the item : ";
        cin >> price;
    }
    void display()
    {
        cout << "The item no is : " << item << endl;
        cout << "The price of the item is : " << price << endl;
    }
};
int main(void)
{
    int n;
    cout << "Enter the number of items : ";
    cin >> n;
    Item *obj = new Item[n];
    Item *ob = obj;
    cout << "Enter the details of the items :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter for item " << i << " : " << endl;
        obj->getData();
        obj++;
    }
    for (int i = 0; i < n; i++)
    {
        ob->display();
        ob++;
    }
}