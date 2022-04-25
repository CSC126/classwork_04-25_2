#include <iostream>
#include<ctime>
#include<cmath>
using namespace std;

//void curve(float &a);
void randomGen();
int addSum(int x, int y); //Prototype

int x;

int main() {

//    float score;
//    cout << "Enter your score: " << endl;
//    cin >> score;
//    curve(score);
//    cout << "Score curved by 10 points: " << score << endl;

    
    
    
    //esfoihseogihseoighseogihseoighseiogh
    //sefsoefbsiebgseges
    
    
    
//    for (int i = 0; i < 10; i++) {
//        randomGen();
//        cout << "Random Number: " << x << endl;
//    }
        
    
    int num1, num2;
    
    cout << "Enter 2 numbers: " << endl;
    cin >> num1;
    int sum = addSum(num1, num2);
    cout << "Sum: " << sum << endl;
    
    
    
    return 0;
}

//void curve(float &a) {
//    a+= 10;
//}

void randomGen() {
    srand(time(0));
    x = rand() % 30;
}

int addSum(int x, int y) {
    return y*x;
    
    
}
