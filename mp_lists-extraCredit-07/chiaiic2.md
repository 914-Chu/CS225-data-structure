


## Score: 0/52 (0.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✗ - [0/1] - List::insertFront size

- **Points**: 0 / 1

```
==8595== Memcheck, a memory error detector
==8595== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8595== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8595== Command: ./test -r xml "List::insertFront\ size"
==8595== 
==8595== Conditional jump or move depends on uninitialised value(s)
==8595==    at 0x42832C: List<int>::insertFront(int const&) (List.hpp:63)
==8595==    by 0x421FF7: ____C_A_T_C_H____T_E_S_T____0() (tests_part1.cpp:23)
==8595==    by 0x462362: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==8595==    by 0x452AB6: Catch::TestCase::invoke() const (catch.hpp:10793)
==8595==    by 0x4529EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==8595==    by 0x44EF46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==8595==    by 0x44D51E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==8595==    by 0x4568B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==8595==    by 0x455552: Catch::Session::runInternal() (catch.hpp:10149)
==8595==    by 0x45521A: Catch::Session::run() (catch.hpp:10106)
==8595==    by 0x455199: Catch::Session::run(int, char**) (catch.hpp:10074)
==8595==    by 0x482211: main (catch.hpp:13613)
==8595== 
==8595== Conditional jump or move depends on uninitialised value(s)
==8595==    at 0x428366: List<int>::insertFront(int const&) (List.hpp:64)
==8595==    by 0x421FF7: ____C_A_T_C_H____T_E_S_T____0() (tests_part1.cpp:23)
==8595==    by 0x462362: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==8595==    by 0x452AB6: Catch::TestCase::invoke() const (catch.hpp:10793)
==8595==    by 0x4529EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==8595==    by 0x44EF46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==8595==    by 0x44D51E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==8595==    by 0x4568B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==8595==    by 0x455552: Catch::Session::runInternal() (catch.hpp:10149)
==8595==    by 0x45521A: Catch::Session::run() (catch.hpp:10106)
==8595==    by 0x455199: Catch::Session::run(int, char**) (catch.hpp:10074)
==8595==    by 0x482211: main (catch.hpp:13613)
==8595== 
==8595== Conditional jump or move depends on uninitialised value(s)
==8595==    at 0x4288FC: List<int>::_destroy() (List.hpp:41)
==8595==    by 0x4285A4: List<int>::~List() (List-given.hpp:68)
==8595==    by 0x42220E: ____C_A_T_C_H____T_E_S_T____0() (tests_part1.cpp:26)
==8595==    by 0x462362: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==8595==    by 0x452AB6: Catch::TestCase::invoke() const (catch.hpp:10793)
==8595==    by 0x4529EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==8595==    by 0x44EF46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==8595==    by 0x44D51E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==8595==    by 0x4568B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==8595==    by 0x455552: Catch::Session::runInternal() (catch.hpp:10149)
==8595==    by 0x45521A: Catch::Session::run() (catch.hpp:10106)
==8595==    by 0x455199: Catch::Session::run(int, char**) (catch.hpp:10074)
==8595== 
==8595== 
==8595== HEAP SUMMARY:
==8595==     in use at exit: 0 bytes in 0 blocks
==8595==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==8595== 
==8595== All heap blocks were freed -- no leaks are possible
==8595== 
==8595== For counts of detected and suppressed errors, rerun with: -v
==8595== Use --track-origins=yes to see where uninitialised values come from
==8595== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertFront size" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="20">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::insertBack size

- **Points**: 0 / 2

```
==8612== Memcheck, a memory error detector
==8612== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8612== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8612== Command: ./test -r xml "List::insertBack\ size"
==8612== 
==8612== Conditional jump or move depends on uninitialised value(s)
==8612==    at 0x4289CD: List<int>::insertBack(int const&) (List.hpp:82)
==8612==    by 0x4222A7: ____C_A_T_C_H____T_E_S_T____2() (tests_part1.cpp:31)
==8612==    by 0x462362: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==8612==    by 0x452AB6: Catch::TestCase::invoke() const (catch.hpp:10793)
==8612==    by 0x4529EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==8612==    by 0x44EF46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==8612==    by 0x44D51E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==8612==    by 0x4568B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==8612==    by 0x455552: Catch::Session::runInternal() (catch.hpp:10149)
==8612==    by 0x45521A: Catch::Session::run() (catch.hpp:10106)
==8612==    by 0x455199: Catch::Session::run(int, char**) (catch.hpp:10074)
==8612==    by 0x482211: main (catch.hpp:13613)
==8612== 
==8612== Conditional jump or move depends on uninitialised value(s)
==8612==    at 0x428A03: List<int>::insertBack(int const&) (List.hpp:83)
==8612==    by 0x4222A7: ____C_A_T_C_H____T_E_S_T____2() (tests_part1.cpp:31)
==8612==    by 0x462362: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==8612==    by 0x452AB6: Catch::TestCase::invoke() const (catch.hpp:10793)
==8612==    by 0x4529EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==8612==    by 0x44EF46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==8612==    by 0x44D51E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==8612==    by 0x4568B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==8612==    by 0x455552: Catch::Session::runInternal() (catch.hpp:10149)
==8612==    by 0x45521A: Catch::Session::run() (catch.hpp:10106)
==8612==    by 0x455199: Catch::Session::run(int, char**) (catch.hpp:10074)
==8612==    by 0x482211: main (catch.hpp:13613)
==8612== 
==8612== 
==8612== HEAP SUMMARY:
==8612==     in use at exit: 0 bytes in 0 blocks
==8612==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==8612== 
==8612== All heap blocks were freed -- no leaks are possible
==8612== 
==8612== For counts of detected and suppressed errors, rerun with: -v
==8612== Use --track-origins=yes to see where uninitialised values come from
==8612== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertBack size" tags="[part=1][valgrind][weight=2]" filename="tests/tests_part1.cpp" line="28">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/4] - List::insert contents

- **Points**: 0 / 4

```
==8644== Memcheck, a memory error detector
==8644== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8644== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8644== Command: ./test -r xml "List::insert\ contents"
==8644== 
==8644== Conditional jump or move depends on uninitialised value(s)
==8644==    at 0x4289CD: List<int>::insertBack(int const&) (List.hpp:82)
==8644==    by 0x42255D: ____C_A_T_C_H____T_E_S_T____4() (tests_part1.cpp:39)
==8644==    by 0x462362: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==8644==    by 0x452AB6: Catch::TestCase::invoke() const (catch.hpp:10793)
==8644==    by 0x4529EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==8644==    by 0x44EF46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==8644==    by 0x44D51E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==8644==    by 0x4568B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==8644==    by 0x455552: Catch::Session::runInternal() (catch.hpp:10149)
==8644==    by 0x45521A: Catch::Session::run() (catch.hpp:10106)
==8644==    by 0x455199: Catch::Session::run(int, char**) (catch.hpp:10074)
==8644==    by 0x482211: main (catch.hpp:13613)
==8644== 
==8644== Conditional jump or move depends on uninitialised value(s)
==8644==    at 0x428A03: List<int>::insertBack(int const&) (List.hpp:83)
==8644==    by 0x42255D: ____C_A_T_C_H____T_E_S_T____4() (tests_part1.cpp:39)
==8644==    by 0x462362: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==8644==    by 0x452AB6: Catch::TestCase::invoke() const (catch.hpp:10793)
==8644==    by 0x4529EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==8644==    by 0x44EF46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==8644==    by 0x44D51E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==8644==    by 0x4568B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==8644==    by 0x455552: Catch::Session::runInternal() (catch.hpp:10149)
==8644==    by 0x45521A: Catch::Session::run() (catch.hpp:10106)
==8644==    by 0x455199: Catch::Session::run(int, char**) (catch.hpp:10074)
==8644==    by 0x482211: main (catch.hpp:13613)
==8644== 
==8644== 
==8644== HEAP SUMMARY:
==8644==     in use at exit: 0 bytes in 0 blocks
==8644==   total heap usage: 2,128 allocs, 2,128 frees, 252,304 bytes allocated
==8644== 
==8644== All heap blocks were freed -- no leaks are possible
==8644== 
==8644== For counts of detected and suppressed errors, rerun with: -v
==8644== Use --track-origins=yes to see where uninitialised values come from
==8644== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1.cpp" line="36">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::triplerotate basic

- **Points**: 0 / 5

```
==8653== Memcheck, a memory error detector
==8653== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8653== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8653== Command: ./test -r xml "List::triplerotate\ basic"
==8653== 
==8653== Conditional jump or move depends on uninitialised value(s)
==8653==    at 0x4289CD: List<int>::insertBack(int const&) (List.hpp:82)
==8653==    by 0x422CD0: ____C_A_T_C_H____T_E_S_T____6() (tests_part1.cpp:56)
==8653==    by 0x462362: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==8653==    by 0x452AB6: Catch::TestCase::invoke() const (catch.hpp:10793)
==8653==    by 0x4529EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==8653==    by 0x44EF46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==8653==    by 0x44D51E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==8653==    by 0x4568B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==8653==    by 0x455552: Catch::Session::runInternal() (catch.hpp:10149)
==8653==    by 0x45521A: Catch::Session::run() (catch.hpp:10106)
==8653==    by 0x455199: Catch::Session::run(int, char**) (catch.hpp:10074)
==8653==    by 0x482211: main (catch.hpp:13613)
==8653== 
==8653== Conditional jump or move depends on uninitialised value(s)
==8653==    at 0x428A03: List<int>::insertBack(int const&) (List.hpp:83)
==8653==    by 0x422CD0: ____C_A_T_C_H____T_E_S_T____6() (tests_part1.cpp:56)
==8653==    by 0x462362: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==8653==    by 0x452AB6: Catch::TestCase::invoke() const (catch.hpp:10793)
==8653==    by 0x4529EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==8653==    by 0x44EF46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==8653==    by 0x44D51E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==8653==    by 0x4568B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==8653==    by 0x455552: Catch::Session::runInternal() (catch.hpp:10149)
==8653==    by 0x45521A: Catch::Session::run() (catch.hpp:10106)
==8653==    by 0x455199: Catch::Session::run(int, char**) (catch.hpp:10074)
==8653==    by 0x482211: main (catch.hpp:13613)
==8653== 
==8653== 
==8653== HEAP SUMMARY:
==8653==     in use at exit: 0 bytes in 0 blocks
==8653==   total heap usage: 2,136 allocs, 2,136 frees, 252,592 bytes allocated
==8653== 
==8653== All heap blocks were freed -- no leaks are possible
==8653== 
==8653== For counts of detected and suppressed errors, rerun with: -v
==8653== Use --track-origins=yes to see where uninitialised values come from
==8653== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::triplerotate basic" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1.cpp" line="52">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/10] - List::triplerotate simple

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::triplerotate simple" tags="[part=1][valgrind][weight=10]" filename="tests/tests_part1.cpp" line="67">
      <Expression success="false" type="REQUIRE" filename="tests/tests_part1.cpp" line="79">
        <Original>
          "&lt; 2 3 1 5 6 4 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 2 3 1 5 6 4 >" == "&lt; 1 2 3 4 5 6 >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::split simple

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1.cpp" line="82">
      <FatalErrorCondition filename="tests/tests_part1.cpp" line="82">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::split images

- **Points**: 0 / 5


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/3] - List::_destroy empty list

- **Points**: 0 / 3

```
==8669== Memcheck, a memory error detector
==8669== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8669== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8669== Command: ./test -r xml "List::_destroy\ empty\ list"
==8669== 
==8669== Conditional jump or move depends on uninitialised value(s)
==8669==    at 0x4288FC: List<int>::_destroy() (List.hpp:41)
==8669==    by 0x4285A4: List<int>::~List() (List-given.hpp:68)
==8669==    by 0x426183: ____C_A_T_C_H____T_E_S_T____17() (tests_part1.cpp:162)
==8669==    by 0x462362: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==8669==    by 0x452AB6: Catch::TestCase::invoke() const (catch.hpp:10793)
==8669==    by 0x4529EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==8669==    by 0x44EF46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==8669==    by 0x44D51E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==8669==    by 0x4568B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==8669==    by 0x455552: Catch::Session::runInternal() (catch.hpp:10149)
==8669==    by 0x45521A: Catch::Session::run() (catch.hpp:10106)
==8669==    by 0x455199: Catch::Session::run(int, char**) (catch.hpp:10074)
==8669== 
==8669== 
==8669== HEAP SUMMARY:
==8669==     in use at exit: 0 bytes in 0 blocks
==8669==   total heap usage: 2,140 allocs, 2,140 frees, 253,232 bytes allocated
==8669== 
==8669== All heap blocks were freed -- no leaks are possible
==8669== 
==8669== For counts of detected and suppressed errors, rerun with: -v
==8669== Use --track-origins=yes to see where uninitialised values come from
==8669== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::_destroy empty list" tags="[part=1][valgrind][weight=3]" filename="tests/tests_part1.cpp" line="159">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::begin() returns an iterator to the front of the list

- **Points**: 0 / 1

```
==8674== Memcheck, a memory error detector
==8674== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8674== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8674== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==8674== 
==8674== Conditional jump or move depends on uninitialised value(s)
==8674==    at 0x42832C: List<int>::insertFront(int const&) (List.hpp:63)
==8674==    by 0x4263F7: ____C_A_T_C_H____T_E_S_T____19() (tests_part1.cpp:172)
==8674==    by 0x462362: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==8674==    by 0x452AB6: Catch::TestCase::invoke() const (catch.hpp:10793)
==8674==    by 0x4529EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==8674==    by 0x44EF46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==8674==    by 0x44D51E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==8674==    by 0x4568B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==8674==    by 0x455552: Catch::Session::runInternal() (catch.hpp:10149)
==8674==    by 0x45521A: Catch::Session::run() (catch.hpp:10106)
==8674==    by 0x455199: Catch::Session::run(int, char**) (catch.hpp:10074)
==8674==    by 0x482211: main (catch.hpp:13613)
==8674== 
==8674== Conditional jump or move depends on uninitialised value(s)
==8674==    at 0x428366: List<int>::insertFront(int const&) (List.hpp:64)
==8674==    by 0x4263F7: ____C_A_T_C_H____T_E_S_T____19() (tests_part1.cpp:172)
==8674==    by 0x462362: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==8674==    by 0x452AB6: Catch::TestCase::invoke() const (catch.hpp:10793)
==8674==    by 0x4529EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==8674==    by 0x44EF46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==8674==    by 0x44D51E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==8674==    by 0x4568B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==8674==    by 0x455552: Catch::Session::runInternal() (catch.hpp:10149)
==8674==    by 0x45521A: Catch::Session::run() (catch.hpp:10106)
==8674==    by 0x455199: Catch::Session::run(int, char**) (catch.hpp:10074)
==8674==    by 0x482211: main (catch.hpp:13613)
==8674== 
==8674== Conditional jump or move depends on uninitialised value(s)
==8674==    at 0x4288FC: List<int>::_destroy() (List.hpp:41)
==8674==    by 0x4285A4: List<int>::~List() (List-given.hpp:68)
==8674==    by 0x42661E: ____C_A_T_C_H____T_E_S_T____19() (tests_part1.cpp:176)
==8674==    by 0x462362: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==8674==    by 0x452AB6: Catch::TestCase::invoke() const (catch.hpp:10793)
==8674==    by 0x4529EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==8674==    by 0x44EF46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==8674==    by 0x44D51E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==8674==    by 0x4568B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==8674==    by 0x455552: Catch::Session::runInternal() (catch.hpp:10149)
==8674==    by 0x45521A: Catch::Session::run() (catch.hpp:10106)
==8674==    by 0x455199: Catch::Session::run(int, char**) (catch.hpp:10074)
==8674== 
==8674== 
==8674== HEAP SUMMARY:
==8674==     in use at exit: 0 bytes in 0 blocks
==8674==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==8674== 
==8674== All heap blocks were freed -- no leaks are possible
==8674== 
==8674== For counts of detected and suppressed errors, rerun with: -v
==8674== Use --track-origins=yes to see where uninitialised values come from
==8674== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::begin() returns an iterator to the front of the list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="170">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator++ advances the iterator (pre-increment)

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (pre-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="178">
      <Expression success="false" type="REQUIRE" filename="tests/tests_part1.cpp" line="184">
        <Original>
          *iter == 8
        </Original>
        <Expanded>
          9 == 8
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator++ advances the iterator (post-increment)

- **Points**: 0 / 1

```
==8696== Memcheck, a memory error detector
==8696== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8696== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8696== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==8696== 
==8696== Conditional jump or move depends on uninitialised value(s)
==8696==    at 0x42D30C: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:63)
==8696==    by 0x426981: ____C_A_T_C_H____T_E_S_T____23() (tests_part1.cpp:189)
==8696==    by 0x462362: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==8696==    by 0x452AB6: Catch::TestCase::invoke() const (catch.hpp:10793)
==8696==    by 0x4529EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==8696==    by 0x44EF46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==8696==    by 0x44D51E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==8696==    by 0x4568B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==8696==    by 0x455552: Catch::Session::runInternal() (catch.hpp:10149)
==8696==    by 0x45521A: Catch::Session::run() (catch.hpp:10106)
==8696==    by 0x455199: Catch::Session::run(int, char**) (catch.hpp:10074)
==8696==    by 0x482211: main (catch.hpp:13613)
==8696== 
==8696== Conditional jump or move depends on uninitialised value(s)
==8696==    at 0x42D346: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:64)
==8696==    by 0x426981: ____C_A_T_C_H____T_E_S_T____23() (tests_part1.cpp:189)
==8696==    by 0x462362: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==8696==    by 0x452AB6: Catch::TestCase::invoke() const (catch.hpp:10793)
==8696==    by 0x4529EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==8696==    by 0x44EF46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==8696==    by 0x44D51E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==8696==    by 0x4568B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==8696==    by 0x455552: Catch::Session::runInternal() (catch.hpp:10149)
==8696==    by 0x45521A: Catch::Session::run() (catch.hpp:10106)
==8696==    by 0x455199: Catch::Session::run(int, char**) (catch.hpp:10074)
==8696==    by 0x482211: main (catch.hpp:13613)
==8696== 
==8696== Conditional jump or move depends on uninitialised value(s)
==8696==    at 0x42D7BC: List<unsigned int>::_destroy() (List.hpp:41)
==8696==    by 0x42D524: List<unsigned int>::~List() (List-given.hpp:68)
==8696==    by 0x426BEC: ____C_A_T_C_H____T_E_S_T____23() (tests_part1.cpp:195)
==8696==    by 0x462362: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==8696==    by 0x452AB6: Catch::TestCase::invoke() const (catch.hpp:10793)
==8696==    by 0x4529EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==8696==    by 0x44EF46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==8696==    by 0x44D51E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==8696==    by 0x4568B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==8696==    by 0x455552: Catch::Session::runInternal() (catch.hpp:10149)
==8696==    by 0x45521A: Catch::Session::run() (catch.hpp:10106)
==8696==    by 0x455199: Catch::Session::run(int, char**) (catch.hpp:10074)
==8696== 
==8696== 
==8696== HEAP SUMMARY:
==8696==     in use at exit: 0 bytes in 0 blocks
==8696==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==8696== 
==8696== All heap blocks were freed -- no leaks are possible
==8696== 
==8696== For counts of detected and suppressed errors, rerun with: -v
==8696== Use --track-origins=yes to see where uninitialised values come from
==8696== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (post-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="187">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator++ (post-increment) returns an un-incremented iterator

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="197">
      <FatalErrorCondition filename="tests/tests_part1.cpp" line="197">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator-- moves the iterator backwards

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- moves the iterator backwards" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="207">
      <Expression success="false" type="REQUIRE" filename="tests/tests_part1.cpp" line="215">
        <Original>
          *iter == 8
        </Original>
        <Expanded>
          7 == 8
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="2" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator-- (post-increment) returns an un-incremented iterator

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="219">
      <FatalErrorCondition filename="tests/tests_part1.cpp" line="219">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::end is reached

- **Points**: 0 / 1

```
==8723== Memcheck, a memory error detector
==8723== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8723== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8723== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==8723== 
==8723== Conditional jump or move depends on uninitialised value(s)
==8723==    at 0x42D30C: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:63)
==8723==    by 0x427C04: ____C_A_T_C_H____T_E_S_T____31() (tests_part1.cpp:234)
==8723==    by 0x462362: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==8723==    by 0x452AB6: Catch::TestCase::invoke() const (catch.hpp:10793)
==8723==    by 0x4529EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==8723==    by 0x44EF46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==8723==    by 0x44D51E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==8723==    by 0x4568B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==8723==    by 0x455552: Catch::Session::runInternal() (catch.hpp:10149)
==8723==    by 0x45521A: Catch::Session::run() (catch.hpp:10106)
==8723==    by 0x455199: Catch::Session::run(int, char**) (catch.hpp:10074)
==8723==    by 0x482211: main (catch.hpp:13613)
==8723== 
==8723== Conditional jump or move depends on uninitialised value(s)
==8723==    at 0x42D346: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:64)
==8723==    by 0x427C04: ____C_A_T_C_H____T_E_S_T____31() (tests_part1.cpp:234)
==8723==    by 0x462362: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==8723==    by 0x452AB6: Catch::TestCase::invoke() const (catch.hpp:10793)
==8723==    by 0x4529EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==8723==    by 0x44EF46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==8723==    by 0x44D51E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==8723==    by 0x4568B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==8723==    by 0x455552: Catch::Session::runInternal() (catch.hpp:10149)
==8723==    by 0x45521A: Catch::Session::run() (catch.hpp:10106)
==8723==    by 0x455199: Catch::Session::run(int, char**) (catch.hpp:10074)
==8723==    by 0x482211: main (catch.hpp:13613)
==8723== 
==8723== Conditional jump or move depends on uninitialised value(s)
==8723==    at 0x42D7BC: List<unsigned int>::_destroy() (List.hpp:41)
==8723==    by 0x42D524: List<unsigned int>::~List() (List-given.hpp:68)
==8723==    by 0x427E8B: ____C_A_T_C_H____T_E_S_T____31() (tests_part1.cpp:244)
==8723==    by 0x462362: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==8723==    by 0x452AB6: Catch::TestCase::invoke() const (catch.hpp:10793)
==8723==    by 0x4529EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==8723==    by 0x44EF46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==8723==    by 0x44D51E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==8723==    by 0x4568B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==8723==    by 0x455552: Catch::Session::runInternal() (catch.hpp:10149)
==8723==    by 0x45521A: Catch::Session::run() (catch.hpp:10106)
==8723==    by 0x455199: Catch::Session::run(int, char**) (catch.hpp:10074)
==8723== 
==8723== 
==8723== HEAP SUMMARY:
==8723==     in use at exit: 0 bytes in 0 blocks
==8723==   total heap usage: 2,137 allocs, 2,137 frees, 255,000 bytes allocated
==8723== 
==8723== All heap blocks were freed -- no leaks are possible
==8723== 
==8723== For counts of detected and suppressed errors, rerun with: -v
==8723== Use --track-origins=yes to see where uninitialised values come from
==8723== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is reached" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="232">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::end is not ::begin in a non-empty list

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is not ::begin in a non-empty list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="246">
      <Expression success="false" type="REQUIRE" filename="tests/tests_part1.cpp" line="252">
        <Original>
          (bool)(list.begin() != list.end())
        </Original>
        <Expanded>
          false
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/4] - List::insert contents #2

- **Points**: 0 / 4

```
==8729== Memcheck, a memory error detector
==8729== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8729== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8729== Command: ./test -r xml "List::insert\ contents\ #2"
==8729== 
==8729== Conditional jump or move depends on uninitialised value(s)
==8729==    at 0x42832C: List<int>::insertFront(int const&) (List.hpp:63)
==8729==    by 0x42DBBD: ____C_A_T_C_H____T_E_S_T____0() (tests_part1_extra.cpp:17)
==8729==    by 0x462362: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==8729==    by 0x452AB6: Catch::TestCase::invoke() const (catch.hpp:10793)
==8729==    by 0x4529EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==8729==    by 0x44EF46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==8729==    by 0x44D51E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==8729==    by 0x4568B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==8729==    by 0x455552: Catch::Session::runInternal() (catch.hpp:10149)
==8729==    by 0x45521A: Catch::Session::run() (catch.hpp:10106)
==8729==    by 0x455199: Catch::Session::run(int, char**) (catch.hpp:10074)
==8729==    by 0x482211: main (catch.hpp:13613)
==8729== 
==8729== Conditional jump or move depends on uninitialised value(s)
==8729==    at 0x428366: List<int>::insertFront(int const&) (List.hpp:64)
==8729==    by 0x42DBBD: ____C_A_T_C_H____T_E_S_T____0() (tests_part1_extra.cpp:17)
==8729==    by 0x462362: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==8729==    by 0x452AB6: Catch::TestCase::invoke() const (catch.hpp:10793)
==8729==    by 0x4529EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==8729==    by 0x44EF46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==8729==    by 0x44D51E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==8729==    by 0x4568B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==8729==    by 0x455552: Catch::Session::runInternal() (catch.hpp:10149)
==8729==    by 0x45521A: Catch::Session::run() (catch.hpp:10106)
==8729==    by 0x455199: Catch::Session::run(int, char**) (catch.hpp:10074)
==8729==    by 0x482211: main (catch.hpp:13613)
==8729== 
==8729== 
==8729== HEAP SUMMARY:
==8729==     in use at exit: 0 bytes in 0 blocks
==8729==   total heap usage: 2,143 allocs, 2,143 frees, 252,800 bytes allocated
==8729== 
==8729== All heap blocks were freed -- no leaks are possible
==8729== 
==8729== For counts of detected and suppressed errors, rerun with: -v
==8729== Use --track-origins=yes to see where uninitialised values come from
==8729== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents #2" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1_extra.cpp" line="14">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::split edge cases

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split edge cases" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="30">
      <FatalErrorCondition filename="tests/tests_part1_extra.cpp" line="30">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **chiaiic2** using **61803bcb9e5879f88b13e68b9190b507383153e7** (from **March 1st 2020, 11:59:59 pm**)
