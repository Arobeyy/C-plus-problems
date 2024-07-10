#include <iostream>
#include <list>
#include <algorithm>
#include <string>
using namespace std;

class Product
{
private:
    string ItemName;
    double Price;
    int ProductId;

public:
    Product(string name, double price, int id) : ItemName(name), Price(price), ProductId(id) {}

    string getName() const
    {
        return ItemName;
    }

    double getPrice() const
    {
        return Price;
    }

    int getId() const
    {
        return ProductId;
    }

    bool operator==(const Product &other) const
    {
        return ProductId == other.ProductId;
    }
};

class CartItem
{
private:
    Product Item;
    int Quantity;

public:
    CartItem(const Product &product, int q) : Item(product), Quantity(q) {} // initialize quantity in constructor
    void setQuantity(int q)
    {
        Quantity = q;
    }

    int getQuantity() const
    {
        return Quantity;
    }

    void setItem(const Product &product)
    {
        Item = product;
    }

    const Product &getItem() const
    {
        return Item;
    }

    bool operator==(const CartItem &other) const
    {
        return Item.getId() == other.Item.getId();
    }
};

class ShoppingCart
{
private:
    list<CartItem> CartItemlist;
    list<Product> ProductList;

public:
    // give the function the product you want to add to the cart and it's quantity
    void addToCart(Product &product, int quantity)
    {
        CartItem cartItem(product, quantity); // create a cartItem object and Set the product for the cart item and quantity
        CartItemlist.push_back(cartItem);     // add the cartItem to the list
    }

    // give the item and quantity you want to decress
    void removeFromCart(const Product &product, int quantity)
    {
        auto result = find_if(CartItemlist.begin(), CartItemlist.end(),
                              [&](const CartItem &cartitem)
                              { return cartitem.getItem() == product; }); // find if the item is on the cart
        if (result != CartItemlist.end())
        {
            int q = result->getQuantity();
            if (q > quantity) // if the item quantity is more than the decreseable amount
            {                 // then decress the quantity
                q -= quantity;
                result->setQuantity(q);
                cout << "Item quantity is decressed by " << quantity << endl;
            }
            else if (q == quantity) // if the quantity is eqal to the amount the erase the itme from the cart
            {
                CartItemlist.erase(result);
                cout << "Item is erased from the cart.\n\n";
            }
            else
            {
                cout << "Quantity to remove exceeds item quantity." << endl;
            }
        }
        else
        {
            cout << "Item is not found in the cart.\n\n"; // print not found if the item is not in the cart
        }
    }

    void removeFromCart(const Product &product)
    {
        auto result = find_if(CartItemlist.begin(), CartItemlist.end(),
                              [&](const CartItem &cartitem)
                              { return cartitem.getItem() == product; }); // find if the item is on the cart
        if (result != CartItemlist.end())
        {
            CartItemlist.erase(result);
            cout << "Item is erased from the cart.\n\n"; // erase it from the cart
        }
    }

    void addProduct(Product &product)
    {
        ProductList.push_back(product);
    }

    void removeProduct(Product &product)
    {
        auto result = find(ProductList.begin(), ProductList.end(), product);
        if (result != ProductList.end())
        {
            ProductList.erase(result);
            cout << "Item name : " << product.getName() << " Id: " << product.getId() << " is removed form the product list\n\n";
        }
    }

    void displayProductList()
    {
        cout << "Available Products: " << endl;
        for (Product &products : ProductList)
        {
            cout << "Item name: " << products.getName() << endl;
            cout << "Item Id: " << products.getId() << endl;
            cout << "Item Price: " << products.getPrice() << endl;
            cout << "\n";
        }
    }

    void printCartItems()
    {
        cout << "your Items:................................." << endl;
        for (CartItem &cartitem : CartItemlist)
        {
            cout << "Item Name: " << cartitem.getItem().getName() << endl;
            cout << "Id: " << cartitem.getItem().getName() << endl;
            cout << "Quantity: " << cartitem.getQuantity() << endl;
            cout << "-------------------------------\n";
        }
        cout << ".........................................\n";
    }

    void calcualteTotal()
    {
        double total;
        for (CartItem &cartitem : CartItemlist)
        {
            total += cartitem.getItem().getPrice() * cartitem.getQuantity();
        }

        cout << "Your Total is : " << total << endl;
        cout << "......................................\n\n";
    }
};

int main()
{
    Product p1("hair care oil", 540.0, 1001);
    Product p2("skin cream", 360.0, 1002);
    Product p3("body wash", 1000.0, 1003);
    Product p4("essential oil", 800.0, 1004);

    ShoppingCart s1;
    cout << "Shopping cart 1:" << endl;
    s1.addProduct(p1);
    s1.addProduct(p2);
    s1.addProduct(p3);
    s1.addProduct(p4);
    s1.displayProductList();

    s1.addToCart(p1, 2);
    s1.addToCart(p3, 1);
    s1.printCartItems();
    s1.removeProduct(p4);
    s1.displayProductList();

    s1.removeFromCart(p1, 1);
    s1.printCartItems();
    s1.calcualteTotal();

    ShoppingCart s2;
    cout << "Shopping cart 2:" << endl;
    s2.addProduct(p1);
    s2.addProduct(p2);
    s2.addProduct(p3);
    s2.displayProductList();

    s2.addToCart(p2, 2);
    s2.addToCart(p3, 2);
    s2.printCartItems();

    s2.removeFromCart(p3);
    s2.printCartItems();
    s2.calcualteTotal();

    return 0;
}