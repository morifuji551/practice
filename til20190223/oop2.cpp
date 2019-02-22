#include <iostream>
using namespace std;

struct Car{
    private:
        int num;
        double gas;
    
    public:
        void show();
        void set_values(int number, double amount_of_gas);
        static int number_of_car;
};

void Car::show(){
    cout << "Number of car is " << num << " and the amount of gas is " << gas << " and we have "<<number_of_car <<" cars.\n";
    return;
}

void Car::set_values(int number, double amount_of_gas){
    num = number;
    gas = amount_of_gas;
    number_of_car++;
    return;
}

int Car::number_of_car = 0;

int main(){
    Car car1, car2;
    car1.set_values(1, 1.5);
    car1.show();
    car2.set_values(2, 1.5);
    car2.show();
    return 0;
}


