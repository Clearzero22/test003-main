#include <iostream>
#include <cstdint>
#include <map>

// 定义一个Kty类
class Kty {
    void print() {
        std::cout << "This is a Kty class. \n" << std::endl;
    }
};

class Kty2 {
    void print() {
        std::cout << "This is a Kty2 class. \n" << std::endl;
    }
};



// 定义一个Ty类
class Ty {
    void print() {
        std::cout << "This is a Ty class. \n" << std::endl;
    }
};


int main() {
    // 输出字符串
    std::cout << "hello world! ni Hao1\n";
    std::cout << "你好 \n";

    // 定义一个16位无符号整型变量
    int16_t number = 123;
    std::cout << "霓虹\n";

    // 定义一个map容器
    
    std::map<Kty, Ty> map;

    std::cout << "nishi yige benzhu\n";
    int c = 1;

    int a = 1;
    

    


    return 0;
}