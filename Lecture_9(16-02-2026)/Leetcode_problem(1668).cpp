#include<iostream>
#include<string>

class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int count = 0;
        string words = word; 

        while (words.length() <= sequence.length()) 
        {
            bool found = false;

            for (int i = 0; i <= sequence.length() - words.length(); i++) 
            {
                bool match = true;
                for (int j = 0; j < words.length(); j++) 
                {
                    if (sequence[i + j] != words[j]) 
                    {
                        match = false;
                        break;
                    }
                }

                if (match) {
                    found = true;
                    break; 
                }
            }

            if (found) {
                count++;      
                words += word; 
            } else {
                break;     
            }
        }

        return count;
    }
};