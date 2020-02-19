


## Score: 70/90 (77.78%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor circle.cpp -o .objs/circle.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor flower.cpp -o .objs/flower.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor line.cpp -o .objs/line.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor rectangle.cpp -o .objs/rectangle.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor shape.cpp -o .objs/shape.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor triangle.cpp -o .objs/triangle.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor truck.cpp -o .objs/truck.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor vector2.cpp -o .objs/vector2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/circle.o .objs/flower.o .objs/line.o .objs/rectangle.o .objs/shape.o .objs/triangle.o .objs/truck.o .objs/vector2.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [10/10] - test_virtual_perim

- **Points**: 10 / 10





### ✓ - [10/10] - test_virtual_area

- **Points**: 10 / 10





### ✓ - [20/20] - test_destructor

- **Points**: 20 / 20

```
==27478== Memcheck, a memory error detector
==27478== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27478== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27478== Command: ./test -r xml "test_destructor"
==27478== 
==27478== 
==27478== HEAP SUMMARY:
==27478==     in use at exit: 0 bytes in 0 blocks
==27478==   total heap usage: 1,667 allocs, 1,667 frees, 216,576 bytes allocated
==27478== 
==27478== All heap blocks were freed -- no leaks are possible
==27478== 
==27478== For counts of detected and suppressed errors, rerun with: -v
==27478== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_destructor" tags="[valgrind][weight=20]" filename="tests/tests.cpp" line="92">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [20/20] - test_constructor

- **Points**: 20 / 20





### ✓ - [10/10] - test_pure_virtual

- **Points**: 10 / 10

```
==27493== Memcheck, a memory error detector
==27493== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27493== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27493== Command: ./test -r xml "test_pure_virtual"
==27493== 
==27493== 
==27493== HEAP SUMMARY:
==27493==     in use at exit: 0 bytes in 0 blocks
==27493==   total heap usage: 1,728 allocs, 1,728 frees, 1,757,183 bytes allocated
==27493== 
==27493== All heap blocks were freed -- no leaks are possible
==27493== 
==27493== For counts of detected and suppressed errors, rerun with: -v
==27493== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_pure_virtual" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/20] - test_slicing

- **Points**: 0 / 20

```
==27513== Memcheck, a memory error detector
==27513== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27513== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27513== Command: ./test -r xml "test_slicing"
==27513== 
==27513== 
==27513== HEAP SUMMARY:
==27513==     in use at exit: 264 bytes in 7 blocks
==27513==   total heap usage: 1,794 allocs, 1,787 frees, 1,759,556 bytes allocated
==27513== 
==27513== 64 bytes in 1 blocks are definitely lost in loss record 5 of 7
==27513==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==27513==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==27513==    by 0x407A25: Flower::Flower(Vector2 const&) (flower.cpp:36)
==27513==    by 0x42BD77: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:134)
==27513==    by 0x460CB2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==27513==    by 0x451406: Catch::TestCase::invoke() const (catch.hpp:10793)
==27513==    by 0x45133C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==27513==    by 0x44D896: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==27513==    by 0x44BE6E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==27513==    by 0x455206: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==27513==    by 0x453EA2: Catch::Session::runInternal() (catch.hpp:10149)
==27513==    by 0x453B6A: Catch::Session::run() (catch.hpp:10106)
==27513== 
==27513== 64 bytes in 1 blocks are definitely lost in loss record 6 of 7
==27513==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==27513==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==27513==    by 0x407A84: Flower::Flower(Vector2 const&) (flower.cpp:38)
==27513==    by 0x42BD77: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:134)
==27513==    by 0x460CB2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==27513==    by 0x451406: Catch::TestCase::invoke() const (catch.hpp:10793)
==27513==    by 0x45133C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==27513==    by 0x44D896: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==27513==    by 0x44BE6E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==27513==    by 0x455206: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==27513==    by 0x453EA2: Catch::Session::runInternal() (catch.hpp:10149)
==27513==    by 0x453B6A: Catch::Session::run() (catch.hpp:10106)
==27513== 
==27513== 136 (64 direct, 72 indirect) bytes in 1 blocks are definitely lost in loss record 7 of 7
==27513==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==27513==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==27513==    by 0x407BA9: Flower::Flower(Vector2 const&) (flower.cpp:43)
==27513==    by 0x42BD77: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:134)
==27513==    by 0x460CB2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==27513==    by 0x451406: Catch::TestCase::invoke() const (catch.hpp:10793)
==27513==    by 0x45133C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==27513==    by 0x44D896: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==27513==    by 0x44BE6E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==27513==    by 0x455206: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==27513==    by 0x453EA2: Catch::Session::runInternal() (catch.hpp:10149)
==27513==    by 0x453B6A: Catch::Session::run() (catch.hpp:10106)
==27513== 
==27513== LEAK SUMMARY:
==27513==    definitely lost: 192 bytes in 3 blocks
==27513==    indirectly lost: 72 bytes in 4 blocks
==27513==      possibly lost: 0 bytes in 0 blocks
==27513==    still reachable: 0 bytes in 0 blocks
==27513==         suppressed: 0 bytes in 0 blocks
==27513== 
==27513== For counts of detected and suppressed errors, rerun with: -v
==27513== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_slicing" tags="[valgrind][weight=20]" filename="tests/tests.cpp" line="125">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **chiaiic2** using **c7776809ae943c2cdbfaf108d26d8c65967106e9** (from **February 16th 2020, 11:59:59 pm**)
