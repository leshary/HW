#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;

int *a = new int [n];
for ( int i = 0; i<n; i++) {
a[i] = 1;
};
for (int i = 2; i<n; i++) {
if (a[i] == 1){
for (int j = i; j<n; j+=i) {
a[j] = 0;
}
a[i] = 1;
}
}
for (int i = 2; i<n; i++){
if (a[i] == 1){
cout<< i <<" ";
}
}
delete [] a;
return 0;
}
