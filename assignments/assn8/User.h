//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assignment1/main.cpp 
/// @brief Assignment 2 for CS 12 Winter 2014
///
/// @author David Anderson [dande011@ucr.edu]
/// @date <2/19/2014>
/// @par Enrollment Notes 
///     Lecture Section: 001
/// @par
///     Lab Section: 021
/// @par
///     TA: Nkenge Wheatland
///
/// @par Plagiarism Section
/// I hereby certify that the code in this file
/// is ENTIRELY my own original work.
//  =============== END ASSESSMENT HEADER ==================
#ifndef USER_H
#define USER_H

#include <iostream> 

using namespace std;
  class User
  {
    private:
      string username;
      string password;
 
    public:
      //creates a user with empty name and password.
      User() : username(), password(){}

      // creates a user with given username and password.
      User(const string& uname, const string& pass)
        : username(uname), password(pass){}

      //returns the username
      string get_username() const {return username;}
 
      // returns true if the stored username/password matches with the
      // parameters. Otherwise returns false.
      // Note that, even though a User with empty name and password is 
      // actually a valid User object (it is the default User), this 
      // function must still return false if given a empty uname string.
      bool check(const string &uname, const string &pass) const;
 
      // sets a new password. This function will not be used in the 
      // current assignment.
      //void set_password(const string &newpass) : password(newpass){}
  };
#endif
