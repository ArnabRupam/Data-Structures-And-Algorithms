//Move all x to the end of the string
 #include<iostream>
 using namespace std;

 string MoveallX(string s)
 {
     if(s.length()==0)
     {
         return "";
     }
     char ch=s[0];
     string ans= MoveallX(s.substr(1));

     if(ch=='x')
        return ans+ch;
    else
        return ch+ans;
 }

 int main()
 {
    // string s;
     //cin>>s;
     cout<<MoveallX("abcxhgxuiuxhjxu");
     return 0;
 }
