#include <cstdlib>
#include <iostream>
#include <vector>
#include <fstream>

#include "User.cpp"
#include "Message.cpp"

using namespace std;

class BBoard
{
    private:
        string title;
        vector<User> user_list;
        User current_user;
        vector<Message> message_list;
        void add_uer(istream &infile, const string &name, const string &pass);
        bool user_exists(const string &name, const string &pass) const;
        User get_user(const string &name) const;
        void display() const;
        void add_message();
        
        void quit(){cout << "Bye!" << endl; exit(0);};
        void error(int&);
    public:
        BBoard() : title("Default title"), user_list(), current_user("default"), message_list();
        BBoard(const string &ttl) : title(ttl), user_list(), current_user("default"), message_list(){}
        void setup(const string &input_file);
        void login();
        void run();



};
