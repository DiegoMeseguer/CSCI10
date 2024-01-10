#include <iostream>
#include <cmath>
using namespace std;

int main(){

double a, b, c; //Double should be in all lowercase letters

b = 2; // The identifier goes on the left side and the value on the right side

cout<<"Enter length of hypotenuse"<<endl;
cin>>c; // We can't have an endl at the end of a cin

cout<<"Enter length of a side"<<endl; // The arrows for cout should always be "<<"
cin>>a;

double intermediate = pow(c, 2)-pow(a, 2);
b = sqrt(intermediate);

cout<<"Length of other side is: "<<b<<endl; // endline should be endl and a "<<" is missing before the variable b

return 0;

}
