/* The structure of the class is
class StackQueue{
private:   
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; */

//Function to push an element in queue by using 2 stacks.
void StackQueue :: push(int x)
{
    s1.push(x);
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
    if(s2.empty()){
        if(s1.empty())
            return -1;
        else{
            while(!s1.empty()){
                int x = s1.top();
                s1.pop();
                s2.push(x);
            }
            int ele = s2.top();
            s2.pop();
            return ele;
        }
    }
    else{
        int ele = s2.top();
        s2.pop();
        return ele;
    }
}