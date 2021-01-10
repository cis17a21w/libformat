#include <cassert>

#include <libformat/version.hxx>
#include <libformat/format.hxx>

int main()
{
  using namespace std;

  // Basics.
  //
  {
    string s = format("Hello, {0}", "World!");
    assert(s == "Hello, World!");
  }
}
