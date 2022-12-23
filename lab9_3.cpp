#include<iostream> 
using namespace std;

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age <= 25){
        int height;
        cout << "Enter your height: ";
        cin >> height;
        if (height < 100){
            cout << "Your character = " << "Chopper" << endl;
            return 0;
        }else if (height < 180){
            cout << "Your character = " << "Usopp" << endl;
            return 0;
        }
        int bounty;
        cout << "Enter your bounty: ";
        cin >> bounty;
        if (bounty > 1100000000){
            cout << "Your character = " << "Zoro" << endl;
            return 0;
        }else {
            cout << "Your character = " << "Sanji" << endl;
            return 0;
        }
    }else if (age <=60){
        int bounty;
        cout << "Enter your bounty: ";
        cin >> bounty;
        if (bounty > 500000000){
            cout << "Your character = " << "Jinbe" << endl;
            return 0;
        }else {
            cout << "Your character = " << "Franky" << endl;
            return 0;
        }
        return 0;
    }
    cout << "Your character = " << "Brook" << endl;
    return 0;
}