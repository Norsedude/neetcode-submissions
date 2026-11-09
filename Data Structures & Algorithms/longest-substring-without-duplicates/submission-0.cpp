class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> count;
        int left = 0, length = 0;

        for (int right = 0; right < (int)s.size(); right++) {
            count[s[right]]++;

            while (count[s[right]] > 1) {
                if (--count[s[left]] == 0)
                    count.erase(s[left]);
                left++;
            }
            length = max(length, right - left + 1);
        }
        return length;
    }
};



/*      MUON SPACE TECH R2

// ch[eese]

// ccccccheese
// ccccc[he]
// banana -> anana (a,n)
// bookkeepeer -> eepe (e,p) OR ookk OR kkee
// eeeeeee -> eeeeeee
// abce -> ab OR bc OR ce

string longestSubstring (const string s) {
  unordered_map<char, int> count;
  int left = 0, start = 0, length = 0;

  for(int right = 0; right < (int)s.size(); right++) {    // if right pointer is less than size of string
    count[s[right]]++;

    while(count.size() > 2) {
      if (--count[s[left]] == 0)
        count.erase(s[left]);
      left++;
    }
    if (right - left + 1 > length) {
      length = right - left + 1;
      start = left;
    }
  }

  return s.substr(start, length);
}

// To execute C++, please define "int main()"
int main() {
  auto words = { "cheese", "banana", "bookkeeper", "", "aaaaaaaaaabbbbbbbbbbbbcccc" };
  for (const char* const& word : words) {
    cout << longestSubstring(word) << std::endl;
  }
  return 0;
}

*/