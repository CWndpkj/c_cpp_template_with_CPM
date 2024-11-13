#include <dbg.h>
#include <iostream>
#include <json/json.h>
#include <spdlog/common.h>
#include <spdlog/spdlog.h>
int main([[maybe_unused]] int argc, [[maybe_unused]] char *argv[])
{
  spdlog::set_level(spdlog::level::debug);
  spdlog::debug("hello world");
  std::cout << "hello world" << std::endl;
  dbg("hello world");
  spdlog::debug("hello world");
  spdlog::set_level(spdlog::level::info);
  return 0;
}
