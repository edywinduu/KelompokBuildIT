#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main() {
    int n;
    int result;
    
    cin >> n;
    
    for (int i=1;i <=10;i++){
        result = n*i;
        cout << n << " x " << i << " = " << result << "\n";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
