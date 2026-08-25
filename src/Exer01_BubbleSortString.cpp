//
// Created by Pedro on 19/08/26.
//

#include <bits/stdc++.h>
#include <string>
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

#include <iostream>
#include <utility>

string static BBS(string word) {
    int n = word.size();
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (word[j] > word[j + 1]) {
                swap(word[j], word[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
    return word;
}

// 2. ONLINE JUDGE ADAPTER
void onlineJudge() {
    // TODO: Leitura de entradas e chamada da solucao para juiz online
    string s;
    if (!(cin >> s)) return;
    cout << BBS(s) << "\n";
}

// 3. LOCAL TESTS
void runLocalTests() {
    cout << "=== Test Q1 (Character Sorting with Bubble Sort) ===\n\n";

    // --- Case 1 ---
    string test1 = "estrutura";
    string expected1 = "aeerrsttu";
    string obtained1 = BBS(test1);

    cout << "Input:           " << test1 << "\n";
    cout << "Expected Output: " << expected1 << "\n";
    cout << "Actual Output:   " << obtained1 << "\n";
    cout << (obtained1 == expected1 ? "[PASSED]" : "[FAILED]") << "\n\n";

    // --- Case 2 ---
    string test2 = "patrocinio";
    string expected2 = "aciinooprt";
    string obtained2 = BBS(test2);

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