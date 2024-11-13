#include <dbg.h>
#include <json/json.h>
#include <spdlog/common.h>
#include <spdlog/spdlog.h>

#include <iostream>
#include <map>
#include <queue>
#include <string>
struct Person {
    std::string name;
    int age;
    std::string address;
};
int main( [[maybe_unused]] int argc, [[maybe_unused]] char* argv[] ) {
    spdlog::set_level( spdlog::level::debug );
    spdlog::debug( "hello world" );
    spdlog::info( "hello world" );
    std::cout << "hello world" << std::endl;
    std::map< int, int > mymap;
    dbg( "hello world" );
    std::queue< Person > que;
    return 0;
}
