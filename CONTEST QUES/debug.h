#ifndef DEBUG_H
#define DEBUG_H

#include <bits/stdc++.h>
using namespace std;

//-------------------------------//
//        DEBUG UTILITIES        //
//-------------------------------//

// Base print for simple types
template<typename T>
void __print(const T &x) { cerr << x; }

// Overloads for common STL containers
template<typename T, typename V>
void __print(const pair<T, V> &x) { cerr << '('; __print(x.first); cerr << ", "; __print(x.second); cerr << ')'; }

template<typename T>
void __print(const vector<T> &x) { cerr << '['; for (auto &i : x) { __print(i); cerr << " "; } cerr << ']'; }

template<typename T>
void __print(const set<T> &x) { cerr << '{'; for (auto &i : x) { __print(i); cerr << " "; } cerr << '}'; }

template<typename T>
void __print(const multiset<T> &x) { cerr << '{'; for (auto &i : x) { __print(i); cerr << " "; } cerr << '}'; }

template<typename T, typename V>
void __print(const map<T, V> &x) { cerr << '{'; for (auto &i : x) { __print(i.first); cerr << "->"; __print(i.second); cerr << " "; } cerr << '}'; }

// Variadic debug printer
void _print() { cerr << "]" << endl; }

template <typename T, typename... V>
void _print(T t, V... v) {
    __print(t);
    if (sizeof...(v)) cerr << ", ";
    _print(v...);
}

// Macro
#ifdef LOCAL
#define dbg(x...) cerr << "[" << #x << "] = [", _print(x)
#else
#define dbg(x...)
#endif

#endif // DEBUG_H
