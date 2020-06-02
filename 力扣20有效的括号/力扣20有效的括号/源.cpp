//class Solution {
//public:
//    bool isValid(string s)
//    {
//        if (s.size() % 2 != 0)
//            return false;
//        stack<char> comp;
//        for (auto e : s)
//        {
//            switch (e)
//            {
//            case '(':
//            {
//                comp.push(e);
//                break;
//            }
//            case '[':
//            {
//                comp.push(e);
//                break;
//            }
//            case '{':
//            {
//                comp.push(e);
//                break;
//            }
//            case ')':
//            {
//                if (comp.empty() || comp.top() != '(')
//                    return false;
//                else
//                    comp.pop();
//                break;
//            }
//            case ']':
//            {
//                if (comp.empty() || comp.top() != '[')
//                    return false;
//                else
//                    comp.pop();
//                break;
//            }
//            case '}':
//            {
//                if (comp.empty() || comp.top() != '{')
//                    return false;
//                else
//                    comp.pop();
//                break;
//            }
//            }
//        }
//        return comp.size() == 0;
//    }
//};