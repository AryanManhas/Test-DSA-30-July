1859. Sorting the Sentence
A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.

A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence.

For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".
Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence.


class Solution {
public:
    string sortSentence(string s) {
        map<int, string> m;
        string str = "";
        for (auto& c : s) {
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
                str.push_back(c);
            if (c >= '0' && c <= '9') {
                int x = c - '0';
                m.insert({x, str});
            }
            if (c == ' ')
                str = "";
        }
        str = "";
        for (auto& pr : m) {
            str += pr.second;
            str += ' ';
        }
        str.erase(str.length() - 1);
        return str;
    }
};
