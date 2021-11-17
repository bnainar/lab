#include <iostream>
using namespace std;

struct Product{
    char name[20];
    int price;
};
struct Cart{
    Product prod;
    int q;
};
int main() {
    Product list[5] = {
        {"Pencil",5},
        {"Fountain Pen",40},
        {"Ruler",10},
        {"Eraser",5},
        {"Notebook",100}
        };
    Cart cart[10];
    cout << "Welcome to Stationery Shop!\n\n";
    cout << "List of Items: ";
    for(int i=0;i<5;i++){
        cout << "\n(" << i << ") " << list[i].name << " -- ₹ " << list[i].price;
    }

    // Enter into the cart
    int item;
    int no = 0;
    int cartlen = 0;
    while(item!=9){
        cout << "\nSelect no. of item (9 to quit): ";
        cin >> item;
        if (item!=9){
            cout << "Enter quantites: ";
            cin >> no;
            cart[cartlen] = {list[item], no};
            cartlen++;
        }
    }
    
    // Print bill;
    cout << "\n Bill\n======\n";
    cout << "Item -- Price (1 unit) -- Quantity\n------------------";
    float total = 0;
    for(int i=0;i<cartlen;i++){
        cout << "\n"<< cart[i].prod.name << " -- ₹ " << cart[i].prod.price << " -- " << cart[i].q;
        total += cart[i].prod.price * cart[i].q;
    }
    
    cout << "\n======";
    cout << "\nAmount: ₹ " << total;
    float gst = 3;
    total += ((gst/100)*total);
    cout << "\nGST rate: " << gst << "%";
    cout << "\nTotal Price: ₹ " << total << "\n";
    return 0;
}
