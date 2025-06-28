#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <unordered_set>
using namespace std;

// Helper function to clean string: remove non-alphanumeric and convert to lowercase
string cleanString(const string &s)
{
    string cleaned = "";
    for (char ch : s)
    {
        if (isalnum(ch))
        {
            cleaned += tolower(ch);
        }
    }
    return cleaned;
}

// Function to check if a string is palindrome

bool isPalindrome(const string &s)
{
    int st = 0, end = s.length() - 1;
    while (st < end)
    {
        if (s[st] != s[end])
        {
            return false;
        }
        st++;
        end--;
    }
    return true;
}

// Function to find length of longest substring without repeating characters
int longestUniqueSubstring(const string &s)
{
    unordered_set<char> charSet;
    int left = 0, maxLength = 0;
    for (int right = 0; right < s.size(); right++)
    {
        while (charSet.count(s[right]))
        {
            charSet.erase(s[left]);
            left++;
        }
        charSet.insert(s[right]);
        maxLength = max(maxLength, right - left + 1);
    }
    return maxLength;
}

// Function to check if string is anagram of "leetcode"
bool isAnagramOfLeetcode(const string &s)
{
    string target = "leetcode";
    unordered_map<char, int> freqS, freqTarget;

    for (char ch : s)
    {
        freqS[ch]++;
    }
    for (char ch : target)
    {
        freqTarget[ch]++;
    }
    return freqS == freqTarget;
}

// Reverse Entire String
string manualReverse(string &s)
{
    int st = 0, end = s.length() - 1;

    while (st < end)
    {
        char temp = s[st];
        s[st] = s[end];
        s[end] = temp;
        st++;
        end--;
    }
    return s;
}

//  Count Vowels & Consonants

int countVowelAndConsonants(const string &s)
{
    int vowelsCount = 0;
    int consonantsCount = 0;

    // make it lowr and then check if it was volwle first 
    // and then check const 
    // use unordr map for both to

    unordered_map<int, int> m, n;

}

// Frequency of Each Character
int main()
{
    string s = "TcoLed!eCde!!!eL";
    cout << "Original String: " << s << endl;
    cout << "----------------------------------------" << endl;

    // Step 1: Clean the string
    string cleaned = cleanString(s);
    cout << "Cleaned String (alphanumeric, lowercase): " << cleaned << endl;    

    // Step 2: Palindrome Check
    bool isPalin = isPalindrome(cleaned);
    cout << "Is Palindrome: " << (isPalin ? " True" : "False") << endl;

    // Step 3: Longest Substring Without Repeating Characters
    int longestUnique = longestUniqueSubstring(cleaned);
    cout << "Longest Unique Substring Length: " << longestUnique << endl;

    // Step 4: Check Anagram with 'leetcode'
    bool isAnagram = isAnagramOfLeetcode(cleaned);
    cout << "Is Anagram of 'leetcode': " << (isAnagram ? "Yes" : "No") << endl;

    cout << "After reverse : " << manualReverse(cleaned) << endl;

    cout << countVowelAndConsonants(cleaned) << endl;

    cout
        << "----------------------------------------" << endl;

    return 0;
}