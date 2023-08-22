#include<iostream>
#include<string>

std::string reverseWords(std::string s) {
    std::string final = "";
    std::string temp = "";
    for(auto i=s.begin(); i<s.end(); i++) {
        if(*i != ' ') {
            temp.insert(temp.begin(),*i);
            if(i+1 != s.end()) {
                continue;
            }
        }
        if(i+1 != s.end()) {
            temp.push_back(' ');
        }
        final.append(temp);
        temp.clear();
    }
    return final;
}

int main() {
    std::string theString = "Let's take LeetCode contest";
    std::cout << reverseWords(theString) << std::endl;
    return 0;
}