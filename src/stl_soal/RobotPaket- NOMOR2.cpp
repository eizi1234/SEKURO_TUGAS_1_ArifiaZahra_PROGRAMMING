#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
int main() {
    int n;
    cin >> n;

    //pake std::vektor
    vector<int> x(n);
    for (int i = 0; i<n;i++){
        cin >> x[i];
    }

    vector<int> c(n);
    for (int i=0; i<n; i++){
        cin>> x[i];
    }

    //gabungin pake std
    vector <pair<int, int>> paket(n);
    for (int i=0; i<n; i++){
        paket[i] ={x[i], c[i]};
    }

    sort(paket.begin(), paket.end()); //urutan

    map<int, bool> diambil;
    int totalpaket = 0;

    for (int i = 0; i < n; i++) {
        int kategori = paket[i].second; //ambil c(n)
        if (diambil.find(kategori) == diambil.end()){
            diambil[kategori] = true;
            totalpaket++;
        }
    }
    cout <<totalpaket<<endl;
}