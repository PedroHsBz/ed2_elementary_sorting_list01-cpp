//
// Created by Pedro on 19/08/26.
//
#include <bits/stdc++.h>
#include <string>
#include <cstdio>
using namespace std;

#define IOFAST() ios_base::sync_with_stdio(0);cin.tie(0);

#include <iostream>
#include <utility>

void static DSS(int n, vector<int>& arr) {
    for (int i = 0; i < n - 1; i++) {
        int index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[index]) {
                index = j;
            }
        }
        int target = arr[index];
        arr[index] = arr[i];
        arr[i] = target;
    }

}

int  main() {
    IOFAST();
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