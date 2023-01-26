#include <iostream>
using namespace std;
int main() {

 int a = 1;
 int b = 2;
 {
     if (a < 0 or b < 0) { cout << "Viens no skaitliem ir negativs" << endl; }
     else cout << "Neviens no skaitliem nav negativs" << endl;
}
 {
     if (a > b) { cout << "a ir lielaks par b" << endl; }
     else cout << "a ir mazaks par b" << endl;
}
 {
    if (a % 2 == 0) { cout << "a ir para skaitlis" << endl; }
    else cout << "a ir nepara sakitlis" << endl;
    if (b % 2 == 0) { cout << "b ir para skaitlis" << endl; }
    else cout << "b ir nepara skaitlis" << endl;
}
}