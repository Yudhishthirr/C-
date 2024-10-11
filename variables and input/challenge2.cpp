#include <iostream>
#include <string>

using namespace std;

int main(){
    int teabaceprice;
    float incresePrice;
    cout << "Enter the base Price Of tea \n";
    cin >> teabaceprice;
    incresePrice = float(teabaceprice * 1.10f);
    cout << "incresePrice Price by 10 % \n" << incresePrice;
}