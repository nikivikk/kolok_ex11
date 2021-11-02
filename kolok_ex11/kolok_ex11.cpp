#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    int n; 
    std::cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 10000;
    }
    int maxx = a[0]; 
    std::vector <int> c;
    c.push_back(a[0]);
    c.push_back(0);
    for (int i = 1; i < n; i++) {
        if (a[i] == maxx) {
            c.push_back(a[i]);
            c.push_back(i);
        }
        if (a[i] > maxx) {
            c.clear();
            c.push_back(a[i]);
            c.push_back(i);
            maxx = a[i];
        }
    }
    for(int i = 0; i < n; i++){
        std::cout << a[i] << " ";
    }
    std::cout << '\n';
    for (auto item : c) {
        std::cout << item << " ";
    }
    return 0;
 }
