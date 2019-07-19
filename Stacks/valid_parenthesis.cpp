bool isValid(string a) {
        
    if(a.length() == 0)
        return true;
        
    stack<char> s;
        
    if(a[0] == '(' || a[0] == '{' || a[0] == '[')
    s.push(a[0]);
    else 
    return false;

    bool possible = true;
    int i = 1;

    while(i < a.length())
    {
        if(a[i] == ')')
        {
            if(!s.empty() && s.top() == '(')
            s.pop();
            else {
                possible = false;
                break;
            }
        } 
        else if(a[i] == '}')
        {
            if(!s.empty() && s.top() == '{')
            s.pop();
            else {
                possible = false;
                break;
            }
        } 
        else if(a[i] == ']')
        {
            if(!s.empty() && s.top() == '[')
            s.pop();
            else {
                possible = false;
                break;
            }
        } else {
            s.push(a[i]);
        }
        i++;
    }
        
    return (possible && s.empty());
    }

    int main(){
        cout << isValid("(){}[]");
    }

    /* Output: 1 */
