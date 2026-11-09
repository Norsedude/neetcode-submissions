class Solution {
public:
    bool isPalindrome(string s) {
        string newstring = ""; //blank new string to add to and create the palindrome
        for (char c : s) {      // compare char c across substring s ":"
            if (isalnum(c)) {   // call checks if character c while traversing s is alphanumeric
                newstring += tolower(c);    // make sure new character appeneded to string is lowercase
            }

        }
        return newstring == string(newstring.rbegin(), newstring.rend());
        // reverse beginning
        // reverse end
        // checks and returns bool value if palindrome
    }
};
