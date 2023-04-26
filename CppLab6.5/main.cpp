#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

//Question1
list<int> common_elements(list<int> list1, list<int> list2) {
    list<int> common_elements;
    for (auto it = list1.begin(); it != list1.end(); ++it) {
        if (find(list2.begin(), list2.end(), *it) != list2.end()) {
            common_elements.push_back(*it);
        }
    }
    return common_elements;
}

//Question2
list<string> isPalindromes(const list<string> & strings) {
    list<string> palindromes;
    for (const string& str : strings) {
        bool is_palindrome = true;
        for (size_t i = 0; i < str.size() / 2; ++i) {
            if (str[i] != str[str.size() - i - 1]) {
                is_palindrome = false;
                break;
            }
        }
        if (is_palindrome) {
            palindromes.push_back(str);
        }
    }
    return palindromes;
}

//Question3
list<int> primeNumbers(list<int> List) {
    list<int> primesList;
    while (!List.empty()) {
        int current_number = List.front();
        List.pop_front();
        if (current_number == 0 || current_number == 1) {
            continue;
        }
        primesList.push_back(current_number);
        List.remove_if([current_number](int n) { return n % current_number == 0; });
    }
    return primesList;
}

//Question4
list<string> Anagrams(string word, list<string> word_list) {
    list<string> anagrams_list;
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    sort(word.begin(), word.end());
    for (auto it = word_list.begin(); it != word_list.end(); it++) {
        string sorted_word = *it;
        transform(sorted_word.begin(), sorted_word.end(), sorted_word.begin(), ::tolower);
        sort(sorted_word.begin(), sorted_word.end());
        if (sorted_word == word) {
            anagrams_list.push_back(*it);
        }
    }
    return anagrams_list;
}

//Testing
int main() {
    list<int> List1 = {10,15,20,25,30};
    list<int> List2 = {25,30,35,40,45};
    list<int> intersection = common_elements(List1, List2);
    cout << "Common Elements: ";
    for (auto it = intersection.begin(); it != intersection.end(); ++it) {
        cout << *it << " | ";
    }

    cout << endl;

    list<string> strings = {"kek","havuç","kabak","teğet","ses","kedi"};
    list<string> palindromes = isPalindromes(strings);
    cout << "Palindromes: ";
    for (const string& str : palindromes) {
        cout << str << " | ";
    }

    cout << endl;

    list<int> List = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    list<int> primeList = primeNumbers(List);
    cout << "Prime Numbers: ";
    for (int prime : primeList) {
        cout << prime << " | ";
    }

    cout << endl;

    string word = "listen"; list<string> word_list = {"enlists", "google", "inlets", "banana"};
    list<string> anagrams_list = Anagrams(word, word_list);
    cout << "Anagrams: ";
    for (auto it = anagrams_list.begin(); it != anagrams_list.end(); it++) {
        cout << *it << " | ";
    }

    return 0;
}

