
#include "../../testcase.hpp"
#include "testcase.pb.h"

int main(int c, char *argv[]) {
    TestRepeated::Test msg;

    write_to_file(msg, "data-empty.bin");

    msg.add_i(0);
    write_to_file(msg, "data-one.bin");

    msg.add_i(1);
    msg.add_i(-1);
    msg.add_i(std::numeric_limits<int32_t>::max());
    msg.add_i(std::numeric_limits<int32_t>::min());
    write_to_file(msg, "data-many.bin");
}
