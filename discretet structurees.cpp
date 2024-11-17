#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Iterate through numbers from 1 to n and print them
    // Time complexity of this loop: O(n)
    for (int i = 1; i <= n; ++i) {
        cout << i << " "; // Printing each number is a constant time operation O(1)
    }

    cout << endl;

    return 0;
}


int main() {
    int n = 10; 
    for (int i = 0; i < n; i++) {
       /* the outer loop runs n times(i from 0 to n - 1).*/

        for (int j = 0; j < n; j++) {
            /*for each iteration of the outer loop, the inner loop also runs n times(j from 0 to n - 1).*/

            cout << "(" << i << ", " << j << ") ";
        }
        cout << endl;
    }
    return 0;
   /* this means the total number of iterations = 𝑛 × 𝑛 = 𝑛^ 2*/
      //the time complexity is o(n^2) since both loops depend on n and the inner loop runs completely for each iteration of the outer loop 
      // so nested loops have time complexity of o(n^2). 

}

