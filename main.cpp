#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main(){
    int m,n;
    cout <<"Introdu nr de linii: ";
    cin >> m;
    cout << "Introdu nr de coloane: ";
    cin >> n;

    if(m!=n){
        cout << "Matricea nu este patrata" << endl;
        return 0;
    }

    int matrice[m][n];

    srand(time(0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            matrice[i][j] = rand()%100;
        }
    }
    cout << "Matricea: " << endl;
    for(int i = 0;i<m;i++){
        for(int j = 0; j < n; j++){
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}