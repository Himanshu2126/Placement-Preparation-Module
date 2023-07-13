class Solution {
public:
    int romanToInt(string s)
    {
       
      
        int sum =0;
        
        for(int i=0; i<s.size();i++)
        {
              char ch= s[i];
              char next=s[i+1];
           
        
            if(ch== 'I'&& next == 'V')
            {
               sum+=-1;  
            }
            
            else if(ch== 'I'&& next == 'X')
            {
               sum+=-1;  
            }
            
             
            else if(ch== 'I')
            {
                sum+=1;
            }
              
            else if(ch== 'V')
            {
               sum+=5;  
            }
              
           
              
           else if(ch== 'X'&&  next== 'L')
            {
               sum+=-10;  
            }
                          
           else if(ch== 'X'&&  next== 'C')
            {
               sum+=-10;  
            }
            
            else if(ch== 'X')
            {
                 sum+=10;
            }
            else if(ch== 'L')
            {
                 sum+=50;
            }
              
           
            
            else if(ch== 'C'&&  next == 'D')
            {
               sum+=-100;  
            }
            
            
            
          else if(ch== 'C'&&  next == 'M')
            {
               sum+=-100;  
            }
            else if(ch== 'C')
            {
                sum+=100; 
            }  
            
            else if(ch== 'D')
            {
                 sum+=500;
            }
             
            
            else if(ch== 'M')
            {
                 sum+=1000;
            }
            
            
        }
        
         return sum;
        
    }
};