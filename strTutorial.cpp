#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class stringClass {
    public: 
        void _other(){
            string s("2345dgrtyu fgt");
            string s1(s.rbegin(), s.rend());
            reverse(s.begin(),s.end());
            cout << s1;
            string s2("this is a string");
            cout << s2.substr(2, 7);
            
            
            }
        void _Find(){
                    string str ("There are two needles in this haystack with needles.");
                    string str2 ("needle");

                    // different member versions of find in the same order as above:
                    size_t found = str.find(str2);
                    if (found!=std::string::npos)
                        std::cout << "first 'needle' found at: " << found << '\n';

                    found=str.find("needles are small",found+1,6);
                    if (found!=std::string::npos)
                        std::cout << "second 'needle' found at: " << found << '\n';

                    found=str.find("haystack");
                    if (found!=std::string::npos)
                        std::cout << "'haystack' also found at: " << found << '\n';

                    found=str.find('.');
                    if (found!=std::string::npos)
                        std::cout << "Period found at: " << found << '\n';

                    // let's replace the first needle:
                    str.replace(str.find(str2),str2.length(),"preposition");
                    std::cout << str << '\n';
        } 
        void _rFind(){
            std::string str ("The sixth sick sheik's sixth sheep's sick.");
            std::string key ("sixth");

            std::size_t found = str.rfind(key);
            if (found!=std::string::npos)
                str.replace (found,key.length(),"seventh");

            std::cout << str << '\n';
        }

};
class regexClass {
    public:
            void _Regex_match(){
                if (std::regex_match ("subject", std::regex("(sub)(.*)") ))
                std::cout << "string literal matched\n";

                const char cstr[] = "subject";
                std::string s ("subject");
                std::regex e ("(sub)(.*)");

                if (std::regex_match (s,e))
                    std::cout << "string object matched\n";

                if ( std::regex_match ( s.begin(), s.end(), e ) )
                    std::cout << "range matched\n";

                std::cmatch cm;    // same as std::match_results<const char*> cm;
                std::regex_match (cstr,cm,e);
                std::cout << "string literal with " << cm.size() << " matches\n";

                std::smatch sm;    // same as std::match_results<string::const_iterator> sm;
                std::regex_match (s,sm,e);
                std::cout << "string object with " << sm.size() << " matches\n";

                std::regex_match ( s.cbegin(), s.cend(), sm, e);
                std::cout << "range with " << sm.size() << " matches\n";

                // using explicit flags:
                std::regex_match ( cstr, cm, e, std::regex_constants::match_default );

                std::cout << "the matches were: ";
                for (unsigned i=0; i<cm.size(); ++i) {
                    std::cout << "[" << cm[i] << "] ";
                }

                std::cout << std::endl;
            }
            void _Regex_replace(){
                std::string s ("there is a subsequence in the string\n");
                std::regex e ("\\b(sub)([^ ]*)");   // matches words beginning by "sub"

                // using string/c-string (3) version:
                std::cout << std::regex_replace (s,e,"sub-$2");

                // using range/c-string (6) version:
                std::string result;
                std::regex_replace (std::back_inserter(result), s.begin(), s.end(), e, "$2");
                std::cout << result;

                // with flags:
                std::cout << std::regex_replace (s,e,"$1 and $2",std::regex_constants::format_no_copy);
                std::cout << std::endl;
            }
            void _Regex_search() {
                std::string s ("this subject has a submarine as a subsequence");
                std::smatch m;
                std::regex e ("\\b(sub)([^ ]*)");   // matches words beginning by "sub"

                std::cout << "Target sequence: " << s << std::endl;
                std::cout << "Regular expression: /\\b(sub)([^ ]*)/" << std::endl;
                std::cout << "The following matches and submatches were found:" << std::endl;

                while (std::regex_search (s,m,e)) {
                    for (auto x:m) std::cout << x << " ";
                    std::cout << std::endl;
                    s = m.suffix().str();
                }
            }
            void _Split() {
                string s = "foo bar  baz";
                regex e("\\s+");
                regex_token_iterator<string::iterator> i(s.begin(), s.end(), e, -1);
                regex_token_iterator<string::iterator> end;
                while (i != end)
                cout << " [" << *i++ << "]";



                string s1 = "first   second third    ";
                string s2 ="123 df6tt 3456 er5ty,3445";
                 //regex e1("([rnt]d)");
                //regex e1("(d+).");
                //regex e1(" ");
                //regex e1(",");
               //regex e1("[^0-9]");
                // regex e1("[^a-z]");
                regex e1("\\d");

                 

                regex_token_iterator<string::iterator> r(s2.begin(), s2.end(), e1, -1);
                regex_token_iterator<string::iterator> end1;
                while (r != end1)
                cout << " [" << *r++ << "]";
                
                    
            }
};



int main() {
    regexClass obj1;
    obj1._Split();
    


  
  
    return 0;
}