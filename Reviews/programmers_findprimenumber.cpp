#include <string>
#include <algorithm>
#include <math.h>
#include <set>

using namespace std;

bool isPrime(int num) {
    if(num == 0 || num == 1) {
        return false;
    }
    for(int i = 2; i <= sqrt(num); i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

int solution(string numbers) {

    set<int> result;

    sort(numbers.begin(), numbers.end());

    do {
        for(int i = 1; i <= numbers.size(); i++) {
            int num = stoi(numbers.substr(0, i));
            if(isPrime(num)) {
                result.insert(num);
            }
        }
    } while(next_permutation(numbers.begin(), numbers.end()));

    return result.size();
}