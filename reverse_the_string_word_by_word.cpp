/*36. Perform a function to reverse a string word-wise. The input here will be the 
string. In the output, the last word mentioned should come as the first word and 
vice versa. 
Example 
Input: 
Welcome to code 
Output: 
code to Welcome 
Explanation 
The Reversed string word wise function is applied. 
Example 
Input: 
Code to Crack Puzzle 
Output: 
Puzzle Crack to Code*/

#include <iostream>
#include <stack>
#include <sstream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string : ";
    getline(cin, s);
    stringstream obj(s);
    string word;
    stack <string> st;
    while(obj >> word)
    {
       st.push(word);
    }
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
        if(!st.empty())
        {
            cout<<" ";
        }
    }




}
