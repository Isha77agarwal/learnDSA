bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string s1;
        for(int i = 0; i < s.length(); i++) {
            if( (int(s[i]) >= 97 && int(s[i]) <= 122) || (int(s[i]) >= 48 && int(s[i]) <= 57))
                s1 += s[i];
        }
        s = s1;
        reverse(s1.begin(),s1.end());
        cout<<s1<<endl<<s<<endl;
        return ( s1 == s);
    }