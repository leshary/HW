#include <iostream>

using namespace std;

int strange_multiply(int a, int b)
{
    if (b==1)
        return a;
    if (a==1)
        return b;
    else{
        if (b%2==0)
           return strange_multiply( a, b/2) * 2;
        else
           return strange_multiply( a, b/2) * 2 + a;
     }
        ;
}
int main()
{
    int a;
    int b;
    cin>>a;
    cin>>b;
    cout<< strange_multiply( a, b)<<endl;
    return 0;
}
