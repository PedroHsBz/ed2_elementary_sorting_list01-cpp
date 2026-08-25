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
void static DSS(int n, vector<int>& arr) {
    for (int i = 0; i < n - 1; i++) {
        int index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[index]) {
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
}

// 2. ONLINE JUDGE ADAPTER
void onlineJudge() {
    // TODO: Leitura de entradas e chamada da solucao para juiz online
    int n;
    cin >> n;
    cout << n << endl;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    DSS(n, arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

// 3. LOCAL TESTS
void runLocalTests() {
    cout << "=== Test Q2 (Selection Sort Descending) ===\n\n";

    auto vecToStr = [](const vector<int>& v) {
        string s = "";
        for (size_t i = 0; i < v.size(); i++) {
            s += to_string(v[i]) + (i == v.size() - 1 ? "" : " ");
        }
        return s;
    };

    // --- Case 1 ---
    vector<int> vec1 = {3, 1, 4, 5, 2};
    string test1 = "3 1 4 5 2";
    string expected1 = "5 4 3 2 1";
    DSS(vec1.size(), vec1);
    string obtained1 = vecToStr(vec1);

    cout << "Input:           " << test1 << "\n";
    cout << "Expected Output: " << expected1 << "\n";
    cout << "Actual Output:   " << obtained1 << "\n";
    cout << (obtained1 == expected1 ? "[PASSED]" : "[FAILED]") << "\n\n";

    // --- Case 2 ---
    vector<int> vec2 = {10, 20, 5, 8, 12, 15};
    string test2 = "10 20 5 8 12 15";
    string expected2 = "20 15 12 10 8 5";
    DSS(vec2.size(), vec2);
    string obtained2 = vecToStr(vec2);

    cout << "Input:           " << test2 << "\n";
    cout << "Expected Output: " << expected2 << "\n";
    cout << "Actual Output:   " << obtained2 << "\n";
    cout << (obtained2 == expected2 ? "[PASSED]" : "[FAILED]") << "\n";
}

int main() {
    IOFAST();
    runLocalTests();  // <- modo de testes locais
    // onlineJudge(); // <- modo juiz online
    return 0;
}


