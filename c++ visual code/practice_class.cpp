#include<iostream>
using namespace std;

class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public: 
    void initCounter(void){
        counter=0;
    }
    void getPrice(void);
    void setPrice(void);
    void displayPrice(void);
};
void Shop::getPrice(void){
    cout<<"Enter ID of your Item"<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price of your item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}

    void Shop :: displayPrice(void){
        for(int i=0;i<counter;i++){
            cout<<"The Price of Item with ID"<<itemId[i]<<"is"<<itemPrice[i];        }
    }

int main(){

    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;

}