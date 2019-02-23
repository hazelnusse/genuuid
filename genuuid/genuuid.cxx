#include <libstud-uuid/stud-uuid.hxx>

#include <iostream>

int main (int argc, char* argv[])
{
  if (argc < 2)
  {
    std::cerr << "error: missing name\n";
    return 1;
  }

  stud_uuid::say_hello(std::cout, argv[1]);
}
