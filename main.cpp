//Ayaan Gill
//Pizza Shop Lab
//11-25-24
//extra: tax
#include <iostream>
#include <iomanip>
using namespace std;
//declaring functions
double calcTotal(int toppings, char size, double toppingsPrice, double sizePrice, double all);
void bill(double all);
int main() {
    int toppings;
    char size;
    double toppingsPrice;
    double sizePrice;
    double all
    double total = calcTotal(toppings, size, toppingsPrice, sizePrice);
    cout<<"WELCOME TO GILLY PIZZA"<<endl;
    cout<<"WHAT SIZE PIZZA WOULD YOU LIKE(S OR L): ";
    cin>>size;
    cout<<"HOW MANY TOPPINGS WOULD YOU LIKE: ";
    cin>>toppings;
    bill(all);//calling function

    return 0;
}
//function to calculate total price
double calcTotal(int toppings, char size, double toppingsPrice, double sizePrice, double all){
    if(tolower(size) == 's'){
        sizePrice = 9.99;
    }
    else{
        sizePrice = 14.99;
    }
    
    toppingsPrice = toppings*0.55;
    
    all = sizePrice + toppingsPrice;
    
    return all;
    
    
}

void bill(double all){
    cout<<"-------GILLY PIZZA-------"<<endl;
    cout<<"SUBTOTAL: $"<< total<<endl;
    cout<<"TAX: $"<< fixed << setprecision(2) << all*0.06625<<endl;
    cout<<"TOTAL: $"<< all*1.06625<<endl;
    cout<<"--------THANK YOU--------"<<endl;
}
