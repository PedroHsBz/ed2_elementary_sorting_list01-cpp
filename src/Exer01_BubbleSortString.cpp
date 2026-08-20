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

int  main() {
    IOFAST();
    string word;
    cin >> word;
    cout << BBS(word);

}

