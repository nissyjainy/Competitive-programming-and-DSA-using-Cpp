// class Solution {
// public:
//     string reverseWords(string s) {
//         // space j tare vicharva valu che ok
//         stack<string> st;
//         string ans = " ";
//         for(int i =0;i<s.length();i++)
//         {
//             string word = " ";
//             if(s[i]!=' ' && i<s.length())
//             {
//                 // aa tare che ne breaking condition che ok 
//                   word = word  + s[i];
//                   i++;
//             }
//             // jo aa nathi to tare aakho word bani gayo che ok to aene tu che stack ma nakh ok 
//             st.push(word);
//         } 
//         while(!st.empty())
//         {
//             ans = st.top();
//             st.pop();
//         }
//         return ans;
//     }
// };
// aa che ne tare nathi chaltu ok 
// aam logic to sachu ch eok