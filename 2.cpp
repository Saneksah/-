#include <iostream>
using namespace std;

int main(){
setlocale(LC_ALL, "rus");
int n=0;
int mh= 0;
int S = 0;
cout << "���-�� ������: ";
cin >> n;
int a[n];
cout << "������ ������ �������: ";
for (int i=0; i<n; ++i){
    cin >> a[i];
}
for (int i=0; i<n; ++i){
    for (int j=0; j<n; ++j){
        if (a[j]<a[i]){
            mh=a[j];
        }
        else {
            mh=a[i];
        }
        if (mh*(j-i)>=S){
            S = mh*(j-i);
        }
    }
}
cout << "���������: " << S << endl;
return 0;
}
