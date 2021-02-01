#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char * argv[]){
    if(argc != 2){
        cerr << "Usage: fib <int>" << endl;
        exit(EXIT_FAILURE);
    }

    int n = atoi(argv[1]);
    if(n <= 0){
        cerr << "Error: Argument must be a positive integer." << endl;
        exit(EXIT_FAILURE);
    }

    // Do the fib count.
    unsigned long long val = 0;
    unsigned long long p_1 = 1;
    unsigned long long p_2 = 1;
    for(int i=3; i <=n; i++){
        val = p_1 + p_2;
        p_1 = p_2;  
        p_2 = val;              
    }   

    cout << val;
    return 0;
}