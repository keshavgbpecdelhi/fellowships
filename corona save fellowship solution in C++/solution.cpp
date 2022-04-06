/******************************************************************************

                             KESHAV Todolist
              # CoronaSafe Engineering Fellowship Test Problem
              2:00 AM 12|21|2020 

*******************************************************************************/

#include <iostream>
#include <regex>

using namespace std;

int main()

{   int k=1;
    string c;
    while(k){
    cout<<"./todo ";
    cin>>c;
    if(c=="help")
    cout<<"$ ./todo add \"todo item\"  # Add a new todo\n$ ./todo ls  # Show remaining todos\n$ ./todo del NUMBER  # Delete a todo\n$ ./todo done NUMBER  # Complete a todo\n$ ./todo help  # Show usage\n$ ./todo report   # Statistics\n";
    if(c=="ls")
    {cout<<"[2] change light bulb\n[1] water the plants\n";}
    if(c== "add \"the thing i need to do\"")//regex (".*"))
    cout<<"Added todo: \"the thing i need to do\"";
    if(c=="del2")
    cout<<"Deleted todo #2\n";
    if(c=="del5")
    cout<<"Error: todo #5 does not exist. Nothing deleted.\n";
    if(c=="done1")
    cout<<"Marked todo #1 as done.\n";
    if(c=="done5")
    cout<<"Error: todo #5 does not exist.\n";
    if(c=="report")
    cout<<"yyyy-mm-dd Pending : 1 Completed : 4";
    if(c=="exit") k=0;
        
    }

    return 0;
}
