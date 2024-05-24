#include<iostream>
#include<algorithm> 
using namespace std;


    
    // int sort_it(int n) {
    //     int a[n];
    //     for(int i=0; i<n; i++) 
    //         cin >> a[i];

    //     sort(a, a+n, greater<int>());
        
    //     return a[n-1];
    // }


int* sort_it(int n) {
    int* a = new int[n];
    for(int i=0; i<n; i++) 
        cin >> a[i];

    sort(a, a+n, greater<int>());
    
    return a;
}

int main()
{
    int n;
    cin >> n;
    int* a = sort_it(n); 
    for(int i=0; i<n; i++)
        cout << a[i] << " ";
    cout << endl;
    delete[] a; 
    return 0;
}