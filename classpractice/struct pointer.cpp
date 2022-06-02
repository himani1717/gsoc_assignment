#include<bits/stdc++.h>
using namespace std;
 struct point{
     int x,y,z;
 };
int main() {
    point p1={1,2,3};
cout<<" x: "<< p1.x <<" y: "<< p1.y <<" z: "<< p1.z<<"\n";
    point *p2=&p1;
    cout<<" x: "<< p2->x <<" y: "<< p2->y <<" z: "<< p2->z<<"\n";
 return 0;
}
