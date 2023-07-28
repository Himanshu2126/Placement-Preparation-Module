class MyQueue {
public:

     stack<int>input,output;

    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
        
    }
    
    int pop() {
   
    if(!output.empty())
    {
        int x=output.top();
        output.pop();
        return x;
    }
    else
    {
        while(!input.empty())
        {
         output.push(input.top());
         input.pop();
        }

       int y= output.top();
         output.pop();
         return y;
    }
    


        
    }
    
    int peek() {

   if(!output.empty())
    {
        int x=output.top();
    
        return x;
    }
    else
    {
        while(!input.empty())
        {
         output.push(input.top());
         input.pop();
        }

       int y= output.top();
         
         return y;
    }



        
    }
    
    bool empty() {
        return (input.size() + output.size() == 0);
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */