#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class MyCalendar {
    vector<pair<int,int>> bookings;
public:
    MyCalendar() {
    }
    
    bool book(int start, int end) {
        for (const auto& bookPair : bookings){
            if (max(bookPair.first, start) < min(end, bookPair.second)) 
                return false;
            
        }
            bookings.push_back({start,end});
            return true;
    }
};
int main(){
    return 0;
}

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */