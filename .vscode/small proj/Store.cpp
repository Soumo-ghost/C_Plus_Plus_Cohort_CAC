#include<iostream>
#include<vector>
#include<string>
#include<deque>
#include<list>
#include<set>
#include<map>
#include<unordered_set>
#include<unordered_map>


using namespace std;    





struct Product{
int productID;
string name;
string catagory;

};
struct Order{
int orderID;
int productID;
int quantity;
string customerID;
time_t orderDate;
};
int main(){
    vector<Product> productss={
        {101, "Laptop", "Electronics"},
        {102, "Smartphone", "Electronics"},
        {103, "Headphones", "Electronics"},
        {201, "T-shirt", "Clothing"},
        {202, "Jeans", "Clothing"},
        {203, "Sneakers", "Clothing"}
    };
    deque<string> recent_Customers ={"C001", "C002", "C003"};
recent_Customers.push_back("C004");
recent_Customers.push_front("C005");

list<Order> orderHistory;

orderHistory.push_back({1, 101, 1, "C001", time(0)});
orderHistory.push_back({2, 202, 2, "C002", time(0)});
orderHistory.push_back({3, 103, 1, "C003", time(0)});
 set<string>categories;
 for(const auto &product: productss){
    categories.insert(product.catagory);
 }
map<int, int> roductstock={
    {101, 10},
    {102, 20},
    {103, 15},
    {201, 30},
    {202, 25},
    {203, 5},
};
multimap<string, Order> customerOrders;
for(const auto &order: orderHistory){
    customerOrders.insert({order.customerID, order});
};

unordered_map<string, string> customerData={
    {"C001", "John Doe"},   
    {"C002", "Jane Smith"},
    {"C003", "Alice Johnson"},
    {"C004", "Bob Brown"},
    {"C005", "Charlie Davis"},
};
unordered_set<int> uniqueProductsID;
for(const auto &product: productss){
    uniqueProductsID.insert(product.productID);
};








    return 0;
}





