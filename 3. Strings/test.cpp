#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> addedTexts;
    string A, B;

    for (int i = 0; i < N; ++i) {
        cin >> A >> B;

        if (A == "add") {
            addedTexts.push_back(B);
        } else if (A == "find") {
            int count = 0;
            for (const string& text : addedTexts) {
                if (text.find(B) == 0) { // Verifica se B é um prefixo de text
                    ++count;
                }
            }
            cout << count << endl;
        }
    }

    return 0;
}
