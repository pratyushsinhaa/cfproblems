/*solution to "Airport" contest ID: 218B
problem link: https://codeforces.com/problemset/problem/218/B
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int sum(int arr[],int n){
  if (n == 0) {
        return 0;
    }
  else{
        return arr[0] + sum(arr + 1, n - 1); 
}}
int main(){
    int a,b;
    cin >> a >> b;
    int x;
    int sumof;
    int spaces[b];
    for(int i =0;i<=b;i++){
        cin >> x;
        spaces[i]=x;
    }

    sumof=sum(spaces,a);
    cout << a+1 << " " << sumof << "\n";

    
}