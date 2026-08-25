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
int ISCount(vector<int>& arr) {
    int n = static_cast<int>(arr.size());
    int count = 0;

    for (int i = 1; i < n; i++) {
        int target = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > target) {
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
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = ISCount(arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << count << endl;
}

// 3. LOCAL TESTS
void runLocalTests() {
    cout << "=== Test Q4 (Insertion Sort Shift Count) ===\n\n";

    auto vecToStr = [](const vector<int>& v) {
        string s = "";
        for (size_t i = 0; i < v.size(); i++) {
            s += to_string(v[i]) + (i == v.size() - 1 ? "" : " ");
        }
        return s;
    };

    // --- Case 1 ---
    vector<int> vec1 = {72, 12, 62, 69, 27, 67, 41, 56, 33, 74};
    string test1 = "72 12 62 69 27 67 41 56 33 74";
    string expected1 = "Array: 12 27 33 41 56 62 67 69 72 74 | Count: 22";  // (era 26, mas 22 é o correto)

    int shifts1 = ISCount(vec1);
    string obtained1 = "Array: " + vecToStr(vec1) + " | Count: " + to_string(shifts1);

    cout << "Input:           " << test1 << "\n";
    cout << "Expected Output: " << expected1 << "\n";
    cout << "Actual Output:   " << obtained1 << "\n";
    cout << (obtained1 == expected1 ? "[PASSED]" : "[FAILED]") << "\n\n";

    // --- Case 2 ---
    vector<int> vec2 = {5, 2, 8, 1, 9};
    string test2 = "5 2 8 1 9";
    string expected2 = "Array: 1 2 5 8 9 | Count: 4";

    int shifts2 = ISCount(vec2);
    string obtained2 = "Array: " + vecToStr(vec2) + " | Count: " + to_string(shifts2);

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