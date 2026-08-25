//
// Created by Pedro on 19/08/26.
//
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

//#include <bits/stdc++.h>

using namespace std;

#define IOFAST() ios_base::sync_with_stdio(0);cin.tie(0);
#define ulli unsigned long long int
#define uli unsigned long int
#define lli long long int

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector< ii > vii;

#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define pb push_back
#define mp make_pair
#define pq priority_queue
#define LSONE(s) ((s)&(-s)) //LASTBIT
#define DEG_to_RAD(X)   (X * PI / 180)
#define F first
#define S second
#define PI 2*acos(0)

// 1. PURE LOGIC
void ISso (vector<int>& arr) {
    int n = static_cast<int>(arr.size());
    int count=0;

    for (int i = n-1; i > 0; i--) {
        int target = arr[n-i];
        int j = n -i -1;

        // Desloca elementos maiores à direita
        while (j >= 0 && arr[j] < target) {
            arr[j + 1] = arr[j];
            j--;
            count++;
        }
        arr[j + 1] = target;
    }
}
// 2. ONLINE JUDGE ADAPTER
void onlineJudge() {
    // TODO: Leitura de entradas e chamada da solucao para juiz online
}

// 3. LOCAL TESTS
void runLocalTests() {
    int n, count;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ISso(arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout <<endl << count<< endl;
}

int main() {
    IOFAST();
    runLocalTests();  // <- modo de testes locais
    // onlineJudge(); // <- modo juiz online

    return 0;
}