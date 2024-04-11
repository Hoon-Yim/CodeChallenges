#include <stack>
#include <string>

class Solution
{
public:
    bool isValid(std::string s)
    {
        std::stack<char> stack;

        for (char bracket : s)
        {
            if (bracket == '(' || bracket == '[' || bracket == '{')
            {
                stack.push(bracket);
            }
            else
            {
                if (stack.empty() ||
                    (bracket == ')' && stack.top() != '(') ||
                    (bracket == ']' && stack.top() != '[') ||
                    (bracket == '}' && stack.top() != '{'))
                {
                    return false;
                }

                stack.pop();
            }
        }

        return stack.empty();
    }
};