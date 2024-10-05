#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <climits>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>

using namespace std;

void solve()
{
    // Implement your solution here
    // You can use any of the imported containers and algorithms
    cout << "Hue Hue Hue" << endl;
}

static void run_with_stack_size(void (*func)(void), size_t stsize)
{
    char *stack, *send;
    stack = (char *)malloc(stsize);
    send = stack + stsize - 16;
    send = (char *)((uintptr_t)send / 16 * 16);
    asm volatile(
        "mov %%esp, (%0)\n"
        "mov %0, %%esp\n"
        :
        : "r"(send));
    func();
    asm volatile("mov (%0), %%esp\n" : : "r"(send));
    free(stack);
}

void main_()
{

    // Redirect standard input to read from "input.txt"
    freopen("input.txt", "r", stdin);

    // Redirect standard output to write to "output.txt"
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t; // Uncomment this line if there are multiple test cases
    while (t--)
    {
        solve();
    }
    fclose(stdin);
    fclose(stdout);
    return;
}

int main()
{
    run_with_stack_size(main_, 1024 * 1024 * 1024); // Run with a 1 GiB stack
    return 0;
}