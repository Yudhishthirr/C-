#include <iostream>
#include <string>

using namespace std;

int main(){

    string favoriteTea;
    string teaQntity;
    cout << "Enter Your Favorite Tea Name \n";
    getline(cin,favoriteTea);
    cout << "How Mant Cups Want to Order\n";
    cin >> teaQntity;

    cout << "Your favoriteTea is " << favoriteTea << "and you order " << teaQntity <<" cups";
}