/* nhập một số bất kỳ.Hãy viết giá trị của số nguyên đó nếu nó có giá trị từ 0 đến 9
, ngược lại thông báo không biết viết */

#include <iostream>
#include <string>
using namespace std;

string docso(int number) {
    string number_char [10] = {"khong", "mot", "hai", "ba", "bon",
                             "nam", "sau", "bay", "tam", "chin"};
    if ( number >= 0  && number <= 9) {
        return number_char[number];
    }
    else {
        return("khong biet viet");
    }

}
int main() {
    int number;
    cout << "nhap so: ";
    cin >> number;
    cout << "so " << number << " : " << docso(number);
    return 0;
}