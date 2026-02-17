#include <iostream>
using namespace std;
class person{
    private: //this private makes data more efficient and secure --> main useage
     string first_name;//agar hum sird private use kare without public and person constructor then we can't or put value to first_name
    public:
     person(string first_name_){
        first_name = first_name_;
     }
};
int main() {
person p("ricky");
//p.first_name_ = "morty";// u can't do like this
return 0;
}