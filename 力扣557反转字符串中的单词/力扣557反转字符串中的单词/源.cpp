//class Solution {
//public:
//    string reverseWords(string s)
//    {
//        string res = "";
//        stack<char> st;
//        for (auto e : s)
//        {
//            if (e == ' ')
//            {
//                while (!st.empty())
//                {
//                    res += st.top();
//                    st.pop();
//                }
//                res += ' ';
//            }
//            else
//                st.push(e);
//        }
//        while (!st.empty())
//        {
//            res += st.top();
//            st.pop();
//        }
//        return res;
//    }
//};