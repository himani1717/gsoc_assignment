#include <iostream>
using namespace std;
float absolute(float var){
    if (var < 0.0)
        var = -var;
    return var;
}
int absolute(int var) {
     if (var < 0)
         var = -var;
    return var;
}

int main() {
    int x;
    float y;
  cin>>x>>y;
    cout << "Absolute value of x = " << absolute(x) << endl;
    cout << "Absolute value of y = " << absolute(y) << endl;
    return 0;
}
