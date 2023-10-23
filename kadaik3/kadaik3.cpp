#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int totalSecond;

    cout << "秒数を入力 ";
    cin >> totalSecond;

    int m = totalSecond / 60;
    int s = totalSecond % 60;

    cout << setfill('0') << setw(2) << m << ":" << setw(2) << s << "秒" << endl;

    
}
