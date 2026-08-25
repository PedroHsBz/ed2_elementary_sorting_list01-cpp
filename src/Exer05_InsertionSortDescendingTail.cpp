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
int ISso(vector<int>& arr) {
    int n = static_cast<int>(arr.size());
    int count = 0;

    for (int i = n-1; i > 0; i--) {
        int target = arr[n-i];
        int j = n-i-1;

        while (j >= 0 && arr[j] < target) {
            arr[j + 1] = arr[j];
            j--;
            count++;
        }
        arr[j + 1] = target;
    }

    return count;
}
// 2. ONLINE JUDGE ADAPTER
void onlineJudge() {
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

// 3. LOCAL TESTS
void runLocalTests() {
    cout << "=== Test Q5 (Insertion Sort Descending Tail) ===\n\n";

    auto vecToStr = [](const vector<int>& v) {
        string s = "";
        for (size_t i = 0; i < v.size(); i++) {
            s += to_string(v[i]) + (i == v.size() - 1 ? "" : " ");
        }
        return s;
    };

    // --- Case 1 ---
    vector<int> vec1 = {12, 7, 9, 15, 3, 1};
    string test1 = "12 7 9 15 3 1";
    string expected1 = "15 12 9 7 3 1";
    ISso(vec1);
    string obtained1 = vecToStr(vec1);

    cout << "Input:           " << test1 << "\n";
    cout << "Expected Output: " << expected1 << "\n";
    cout << "Actual Output:   " << obtained1 << "\n";
    cout << (obtained1 == expected1 ? "[PASSED]" : "[FAILED]") << "\n\n";

    // --- Case 2 ---
    vector<int> vec2 = {40, 20, 50, 30, 10};
    string test2 = "40 20 50 30 10";
    string expected2 = "50 40 30 20 10";
    ISso(vec2);
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