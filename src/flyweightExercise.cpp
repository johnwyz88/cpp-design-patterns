#include <iostream>
#include <string>
#include <vector>

struct Sentence
{
    struct WordToken
    {
        bool capitalize;
    };

    Sentence(const std::string& text)
    {
        char space = ' ';
        int prv = 0;
        for (int i = 0; (i = text.find(space, i)) != std::string::npos; i++) {
            substrings.push_back(text.substr(prv, i - prv));
            tokens.push_back({});
            prv = i + 1;
        }
        if (prv < text.size()) {
            substrings.push_back(text.substr(prv, text.size()));
            tokens.push_back({});
        }
    }

    WordToken& operator[](size_t index)
    {
        return tokens[index];
    }

    std::string str() const
    {
        std::string result;
        for (int i = 0; i < substrings.size(); i++) {
            if (tokens[i].capitalize) {
                std::string copy = substrings[i];
                std::transform(copy.begin(), copy.end(), copy.begin(), ::toupper);
                result.append(copy);
            } else {
                result.append(substrings[i]);
            }
            if (i < substrings.size() - 1) {
                result.append(" ");
            }
        }
        return result;
    }

private:
    std::vector<std::string> substrings;
    std::vector<WordToken> tokens;
};

//int main() {
//    Sentence sentence("alpha beta gamma");
//    sentence[1].capitalize = true;
//    sentence[2].capitalize = true;
//    std::cout << sentence.str(); // prints "hello WORLD"
//}