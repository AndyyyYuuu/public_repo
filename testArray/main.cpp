#include <iostream>
int testJackPot(std::string arr[4]){
    std::string first=arr[0];
    if ((first==arr[1])&&(first==arr[2])&&(first==arr[3])){
        return true;
    }
    return false;
}
int main() {
    std::string arr[]={"hi","hi","hi","hi"};
    std::cout << testJackPot(arr) << std::endl;
    return 0;
}
