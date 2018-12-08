#include <iostream>
#include <algorithm>
#include <vector>
#include<string>
#include <stdexcept>
using std::cout; using std::cin; using std::vector; using std::sort; using std::string; using std::endl; using std::domain_error; using std::cerr;

//it said "count the number of words in the input, and to count how many times each word occurred". I cannot think of any return value if a function do two things, so I used void.
void run(const vector<string>& v) {
    if (v.size() == 0) throw domain_error("Nothing to count");
    cout << "words count: " << v.size() << endl;
    string unique = v[0];
    int count = 1;
    for (vector<string>::size_type i = 1; i < v.size(); ++i) {
        if (v[i-1] == v[i]) {
            count++;
        } else {
            unique = v[i];
            count = 1;
        }
    }
}

int main() {
    cout << "Enter all words followed by end of file." << endl;
    vector<string> words;
    string word;
    while (cin >> word) {
        words.push_back(word);
    }
    sort(words.begin(), words.end());
    try {
        run(words);
    } catch (domain_error e) {
        std::cerr << e.what() << endl;
    }
    return 0;
}