/**
 * @file anagram_dict.cpp
 * Implementation of the AnagramDict class.
 *
 * @author Matt Joras
 * @date Winter 2013
 */

#include "anagram_dict.h"

#include <algorithm> /* I wonder why this is included... */
#include <fstream>

using std::string;
using std::vector;
using std::ifstream;

/**
 * Constructs an AnagramDict from a filename with newline-separated
 * words.
 * @param filename The name of the word list file.
 */
AnagramDict::AnagramDict(const string& filename)
{
    /* Your code goes here! */
    ifstream wordsFile(filename);
    string word;
    if(wordsFile.is_open()){
        while(getline(wordsFile, word)){
            string temp(word);
            std::sort(temp.begin(), temp.end());
            dict[temp].push_back(word);
        }
    }
}

/**
 * Constructs an AnagramDict from a vector of words.
 * @param words The vector of strings to be used as source words.
 */
AnagramDict::AnagramDict(const vector<string>& words)
{
    /* Your code goes here! */
    size_t count = 0;
    size_t size = words.size();
    while(count < size){
        string temp(words[count]);
        std::sort(temp.begin(), temp.end());
        dict[temp].push_back(words[count]);
        count++;
    }
}

/**
 * @param word The word to find anagrams of.
 * @return A vector of strings of anagrams of the given word. Empty
 * vector returned if no anagrams are found or the word is not in the
 * word list.
 */
vector<string> AnagramDict::get_anagrams(const string& word) const
{
    /* Your code goes here! */
    string temp(word);
    std::sort(temp.begin(), temp.end());
    if(dict.count(temp) == 0) return vector<string>();
    return dict.at(temp);
}

/**
 * @return A vector of vectors of strings. Each inner vector contains
 * the "anagram siblings", i.e. words that are anagrams of one another.
 * NOTE: It is impossible to have one of these vectors have less than
 * two elements, i.e. words with no anagrams are ommitted.
 */
vector<vector<string>> AnagramDict::get_all_anagrams() const
{
    /* Your code goes here! */
    std::vector<std::vector<string>> result;
    for(std::pair<string, vector<std::string>> v : dict){
        std::vector<string> anagrams = v.second;
	if(anagrams.size() < 2) continue;
        result.push_back(anagrams);
    }
    return result;
}
