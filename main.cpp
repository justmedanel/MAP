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
    int sumaDiagPrincipala = 0;
    int sumaDiagSecundara = 0;

    for(int i = 0; i< m; i++){
        sumaDiagPrincipala += matrice[i][i];
        sumaDiagSecundara += matrice[i][m-i-1];
    }
    cout << "Suma elementelor pe diagonala principala: " << sumaDiagPrincipala << endl;
    cout << "Suma elementelor pe diagonala secundara: " << sumaDiagSecundara << endl;
    
    int minprincipala = 100;
    int maxprincipala = -1;
    int minsecundara = 100;
    int maxsecundara = -1;

    for(int i = 1; i < m; i++){
        for(int j = 0; j < i; j ++){
            if(matrice[i][j] < minprincipala){
                minprincipala = matrice[i][j];
            }
            if(matrice[i][j] > maxprincipala){
                maxprincipala = matrice[i][j];
            }
        }
        for(int j = m-i; j < m; j++){
            if(matrice[i][j] < minsecundara){
                minsecundara = matrice[i][j];
            }
            if(matrice[i][j] > maxsecundara){
                maxsecundara = matrice[i][j];
            }

        }
    }

    cout << "Minimul sub diagonala principala: " << minprincipala << endl;
    cout << "Maximul sub diagonala principala: " << maxprincipala << endl;
    cout << "Minimul sub diagonala secundara: " << minsecundara << endl;
    cout << "Maximul sub diagonala secundara: " << maxsecundara << endl;
    return 0;
}