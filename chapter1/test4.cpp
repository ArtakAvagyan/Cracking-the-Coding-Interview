void foo(std::string& str) 
{ 
        for(int i = 0 ; i < str.size() ; ++i) 
        { 
                if(str[i]>= 'A' && str[i]<= 'Z' ){str[i]+= 32;} 
        } 
} 
bool is_palindrom(std::string& str) 
{ 
        foo(str); 
        std::map<char,int>myMap; 
        for(int i = 0; i < str.size() ; ++i) 
        { 
                if(str[i]== ' '){continue;} 
                myMap[str[i]]++; 
        } 
        int count = 0; 
        for(auto it : myMap) 
        { 
                if(it.second % 2 == 1){count++;} 
                if(count > 1){return false;} 
        } 
        return true; 
} 
int main() 
{ 
        std::string str{"Taco Cat"}; 
        std::cout<< is_palindrom(str)<<std::endl; 
 
}

