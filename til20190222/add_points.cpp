#include<iostream>
using namespace std;

int add_points(int* points, int* add){
    return *points + *add;
}

int main(){
    int first_point, second_point, add;
    cout << "2科目分の点数を入力してください\n";
    cin >> first_point;
    cin >> second_point;
    cout << "加算する点数を入力してください\n";
    cin >> add;
    cout << "科目1は" << add_points(&first_point, &add) << "点となりました\n";
    cout << "科目2は" << add_points(&second_point, &add) << "点となりました\n";
    return 0; 
}