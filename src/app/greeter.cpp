#include "app/greeter.hpp"

namespace app {

std::string greet(const std::string_view name) {
    return "Hello, " + std::string{name} + "!";
}

} // namespace app
