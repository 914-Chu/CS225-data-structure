


## Score: 0/109 (0.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/test_part2_extra.cpp -o .objs/tests/test_part2_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/test_part2_extra.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✗ - [0/5] - List::reverse

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=0)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/5] - List::reverseNth #1

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=0)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/5] - List::reverseNth #2

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=0)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/10] - List::merge

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge" tags="[part=2][valgrind][weight=10]" filename="tests/tests_part2.cpp" line="59">
      <Info>
        Output image `out` saved as actual-merge.png
      </Info>
      <Expression success="false" type="REQUIRE" filename="tests/tests_part2.cpp" line="90">
        <Original>
          out == expected
        </Original>
        <Expanded>
          PNG(w=600, h=400, hash=0)
==
PNG(w=600, h=400, hash=0)
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #1

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #1" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="93">
      <FatalErrorCondition filename="tests/tests_part2.cpp" line="93">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #2

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #2" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="108">
      <FatalErrorCondition filename="tests/tests_part2.cpp" line="108">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::sort #1

- **Points**: 0 / 5


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/5] - List::sort #2

- **Points**: 0 / 5


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/1] - List::insertFront size

- **Points**: 0 / 1

```
==22728== Memcheck, a memory error detector
==22728== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22728== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==22728== Command: ./test -r xml "List::insertFront\ size"
==22728== 
==22728== Conditional jump or move depends on uninitialised value(s)
==22728==    at 0x43696C: List<int>::insertFront(int const&) (List.hpp:63)
==22728==    by 0x430747: ____C_A_T_C_H____T_E_S_T____0() (tests_part1.cpp:23)
==22728==    by 0x4728B2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==22728==    by 0x463006: Catch::TestCase::invoke() const (catch.hpp:10793)
==22728==    by 0x462F3C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==22728==    by 0x45F496: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==22728==    by 0x45DA6E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==22728==    by 0x466E06: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==22728==    by 0x465AA2: Catch::Session::runInternal() (catch.hpp:10149)
==22728==    by 0x46576A: Catch::Session::run() (catch.hpp:10106)
==22728==    by 0x4656E9: Catch::Session::run(int, char**) (catch.hpp:10074)
==22728==    by 0x492761: main (catch.hpp:13613)
==22728== 
==22728== Conditional jump or move depends on uninitialised value(s)
==22728==    at 0x4369A6: List<int>::insertFront(int const&) (List.hpp:64)
==22728==    by 0x430747: ____C_A_T_C_H____T_E_S_T____0() (tests_part1.cpp:23)
==22728==    by 0x4728B2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==22728==    by 0x463006: Catch::TestCase::invoke() const (catch.hpp:10793)
==22728==    by 0x462F3C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==22728==    by 0x45F496: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==22728==    by 0x45DA6E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==22728==    by 0x466E06: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==22728==    by 0x465AA2: Catch::Session::runInternal() (catch.hpp:10149)
==22728==    by 0x46576A: Catch::Session::run() (catch.hpp:10106)
==22728==    by 0x4656E9: Catch::Session::run(int, char**) (catch.hpp:10074)
==22728==    by 0x492761: main (catch.hpp:13613)
==22728== 
==22728== Conditional jump or move depends on uninitialised value(s)
==22728==    at 0x42D2AC: List<int>::_destroy() (List.hpp:41)
==22728==    by 0x42AF84: List<int>::~List() (List-given.hpp:68)
==22728==    by 0x43095E: ____C_A_T_C_H____T_E_S_T____0() (tests_part1.cpp:26)
==22728==    by 0x4728B2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==22728==    by 0x463006: Catch::TestCase::invoke() const (catch.hpp:10793)
==22728==    by 0x462F3C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==22728==    by 0x45F496: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==22728==    by 0x45DA6E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==22728==    by 0x466E06: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==22728==    by 0x465AA2: Catch::Session::runInternal() (catch.hpp:10149)
==22728==    by 0x46576A: Catch::Session::run() (catch.hpp:10106)
==22728==    by 0x4656E9: Catch::Session::run(int, char**) (catch.hpp:10074)
==22728== 
==22728== 
==22728== HEAP SUMMARY:
==22728==     in use at exit: 0 bytes in 0 blocks
==22728==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==22728== 
==22728== All heap blocks were freed -- no leaks are possible
==22728== 
==22728== For counts of detected and suppressed errors, rerun with: -v
==22728== Use --track-origins=yes to see where uninitialised values come from
==22728== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)

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
==22736== Memcheck, a memory error detector
==22736== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22736== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==22736== Command: ./test -r xml "List::insertBack\ size"
==22736== 
==22736== Conditional jump or move depends on uninitialised value(s)
==22736==    at 0x42AC6D: List<int>::insertBack(int const&) (List.hpp:82)
==22736==    by 0x4309F7: ____C_A_T_C_H____T_E_S_T____2() (tests_part1.cpp:31)
==22736==    by 0x4728B2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==22736==    by 0x463006: Catch::TestCase::invoke() const (catch.hpp:10793)
==22736==    by 0x462F3C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==22736==    by 0x45F496: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==22736==    by 0x45DA6E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==22736==    by 0x466E06: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==22736==    by 0x465AA2: Catch::Session::runInternal() (catch.hpp:10149)
==22736==    by 0x46576A: Catch::Session::run() (catch.hpp:10106)
==22736==    by 0x4656E9: Catch::Session::run(int, char**) (catch.hpp:10074)
==22736==    by 0x492761: main (catch.hpp:13613)
==22736== 
==22736== Conditional jump or move depends on uninitialised value(s)
==22736==    at 0x42ACA3: List<int>::insertBack(int const&) (List.hpp:83)
==22736==    by 0x4309F7: ____C_A_T_C_H____T_E_S_T____2() (tests_part1.cpp:31)
==22736==    by 0x4728B2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==22736==    by 0x463006: Catch::TestCase::invoke() const (catch.hpp:10793)
==22736==    by 0x462F3C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==22736==    by 0x45F496: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==22736==    by 0x45DA6E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==22736==    by 0x466E06: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==22736==    by 0x465AA2: Catch::Session::runInternal() (catch.hpp:10149)
==22736==    by 0x46576A: Catch::Session::run() (catch.hpp:10106)
==22736==    by 0x4656E9: Catch::Session::run(int, char**) (catch.hpp:10074)
==22736==    by 0x492761: main (catch.hpp:13613)
==22736== 
==22736== 
==22736== HEAP SUMMARY:
==22736==     in use at exit: 0 bytes in 0 blocks
==22736==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==22736== 
==22736== All heap blocks were freed -- no leaks are possible
==22736== 
==22736== For counts of detected and suppressed errors, rerun with: -v
==22736== Use --track-origins=yes to see where uninitialised values come from
==22736== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

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
==22742== Memcheck, a memory error detector
==22742== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22742== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==22742== Command: ./test -r xml "List::insert\ contents"
==22742== 
==22742== Conditional jump or move depends on uninitialised value(s)
==22742==    at 0x42AC6D: List<int>::insertBack(int const&) (List.hpp:82)
==22742==    by 0x430CAD: ____C_A_T_C_H____T_E_S_T____4() (tests_part1.cpp:39)
==22742==    by 0x4728B2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==22742==    by 0x463006: Catch::TestCase::invoke() const (catch.hpp:10793)
==22742==    by 0x462F3C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==22742==    by 0x45F496: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==22742==    by 0x45DA6E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==22742==    by 0x466E06: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==22742==    by 0x465AA2: Catch::Session::runInternal() (catch.hpp:10149)
==22742==    by 0x46576A: Catch::Session::run() (catch.hpp:10106)
==22742==    by 0x4656E9: Catch::Session::run(int, char**) (catch.hpp:10074)
==22742==    by 0x492761: main (catch.hpp:13613)
==22742== 
==22742== Conditional jump or move depends on uninitialised value(s)
==22742==    at 0x42ACA3: List<int>::insertBack(int const&) (List.hpp:83)
==22742==    by 0x430CAD: ____C_A_T_C_H____T_E_S_T____4() (tests_part1.cpp:39)
==22742==    by 0x4728B2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==22742==    by 0x463006: Catch::TestCase::invoke() const (catch.hpp:10793)
==22742==    by 0x462F3C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==22742==    by 0x45F496: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==22742==    by 0x45DA6E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==22742==    by 0x466E06: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==22742==    by 0x465AA2: Catch::Session::runInternal() (catch.hpp:10149)
==22742==    by 0x46576A: Catch::Session::run() (catch.hpp:10106)
==22742==    by 0x4656E9: Catch::Session::run(int, char**) (catch.hpp:10074)
==22742==    by 0x492761: main (catch.hpp:13613)
==22742== 
==22742== 
==22742== HEAP SUMMARY:
==22742==     in use at exit: 0 bytes in 0 blocks
==22742==   total heap usage: 2,343 allocs, 2,343 frees, 268,176 bytes allocated
==22742== 
==22742== All heap blocks were freed -- no leaks are possible
==22742== 
==22742== For counts of detected and suppressed errors, rerun with: -v
==22742== Use --track-origins=yes to see where uninitialised values come from
==22742== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

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
==22748== Memcheck, a memory error detector
==22748== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22748== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==22748== Command: ./test -r xml "List::triplerotate\ basic"
==22748== 
==22748== Conditional jump or move depends on uninitialised value(s)
==22748==    at 0x42AC6D: List<int>::insertBack(int const&) (List.hpp:82)
==22748==    by 0x431420: ____C_A_T_C_H____T_E_S_T____6() (tests_part1.cpp:56)
==22748==    by 0x4728B2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==22748==    by 0x463006: Catch::TestCase::invoke() const (catch.hpp:10793)
==22748==    by 0x462F3C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==22748==    by 0x45F496: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==22748==    by 0x45DA6E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==22748==    by 0x466E06: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==22748==    by 0x465AA2: Catch::Session::runInternal() (catch.hpp:10149)
==22748==    by 0x46576A: Catch::Session::run() (catch.hpp:10106)
==22748==    by 0x4656E9: Catch::Session::run(int, char**) (catch.hpp:10074)
==22748==    by 0x492761: main (catch.hpp:13613)
==22748== 
==22748== Conditional jump or move depends on uninitialised value(s)
==22748==    at 0x42ACA3: List<int>::insertBack(int const&) (List.hpp:83)
==22748==    by 0x431420: ____C_A_T_C_H____T_E_S_T____6() (tests_part1.cpp:56)
==22748==    by 0x4728B2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==22748==    by 0x463006: Catch::TestCase::invoke() const (catch.hpp:10793)
==22748==    by 0x462F3C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==22748==    by 0x45F496: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==22748==    by 0x45DA6E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==22748==    by 0x466E06: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==22748==    by 0x465AA2: Catch::Session::runInternal() (catch.hpp:10149)
==22748==    by 0x46576A: Catch::Session::run() (catch.hpp:10106)
==22748==    by 0x4656E9: Catch::Session::run(int, char**) (catch.hpp:10074)
==22748==    by 0x492761: main (catch.hpp:13613)
==22748== 
==22748== 
==22748== HEAP SUMMARY:
==22748==     in use at exit: 0 bytes in 0 blocks
==22748==   total heap usage: 2,351 allocs, 2,351 frees, 268,464 bytes allocated
==22748== 
==22748== All heap blocks were freed -- no leaks are possible
==22748== 
==22748== For counts of detected and suppressed errors, rerun with: -v
==22748== Use --track-origins=yes to see where uninitialised values come from
==22748== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

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
==22799== Memcheck, a memory error detector
==22799== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22799== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==22799== Command: ./test -r xml "List::_destroy\ empty\ list"
==22799== 
==22799== Conditional jump or move depends on uninitialised value(s)
==22799==    at 0x42D2AC: List<int>::_destroy() (List.hpp:41)
==22799==    by 0x42AF84: List<int>::~List() (List-given.hpp:68)
==22799==    by 0x4348D3: ____C_A_T_C_H____T_E_S_T____17() (tests_part1.cpp:162)
==22799==    by 0x4728B2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==22799==    by 0x463006: Catch::TestCase::invoke() const (catch.hpp:10793)
==22799==    by 0x462F3C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==22799==    by 0x45F496: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==22799==    by 0x45DA6E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==22799==    by 0x466E06: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==22799==    by 0x465AA2: Catch::Session::runInternal() (catch.hpp:10149)
==22799==    by 0x46576A: Catch::Session::run() (catch.hpp:10106)
==22799==    by 0x4656E9: Catch::Session::run(int, char**) (catch.hpp:10074)
==22799== 
==22799== 
==22799== HEAP SUMMARY:
==22799==     in use at exit: 0 bytes in 0 blocks
==22799==   total heap usage: 2,355 allocs, 2,355 frees, 269,104 bytes allocated
==22799== 
==22799== All heap blocks were freed -- no leaks are possible
==22799== 
==22799== For counts of detected and suppressed errors, rerun with: -v
==22799== Use --track-origins=yes to see where uninitialised values come from
==22799== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

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
==22808== Memcheck, a memory error detector
==22808== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22808== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==22808== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==22808== 
==22808== Conditional jump or move depends on uninitialised value(s)
==22808==    at 0x43696C: List<int>::insertFront(int const&) (List.hpp:63)
==22808==    by 0x434B47: ____C_A_T_C_H____T_E_S_T____19() (tests_part1.cpp:172)
==22808==    by 0x4728B2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==22808==    by 0x463006: Catch::TestCase::invoke() const (catch.hpp:10793)
==22808==    by 0x462F3C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==22808==    by 0x45F496: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==22808==    by 0x45DA6E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==22808==    by 0x466E06: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==22808==    by 0x465AA2: Catch::Session::runInternal() (catch.hpp:10149)
==22808==    by 0x46576A: Catch::Session::run() (catch.hpp:10106)
==22808==    by 0x4656E9: Catch::Session::run(int, char**) (catch.hpp:10074)
==22808==    by 0x492761: main (catch.hpp:13613)
==22808== 
==22808== Conditional jump or move depends on uninitialised value(s)
==22808==    at 0x4369A6: List<int>::insertFront(int const&) (List.hpp:64)
==22808==    by 0x434B47: ____C_A_T_C_H____T_E_S_T____19() (tests_part1.cpp:172)
==22808==    by 0x4728B2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==22808==    by 0x463006: Catch::TestCase::invoke() const (catch.hpp:10793)
==22808==    by 0x462F3C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==22808==    by 0x45F496: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==22808==    by 0x45DA6E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==22808==    by 0x466E06: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==22808==    by 0x465AA2: Catch::Session::runInternal() (catch.hpp:10149)
==22808==    by 0x46576A: Catch::Session::run() (catch.hpp:10106)
==22808==    by 0x4656E9: Catch::Session::run(int, char**) (catch.hpp:10074)
==22808==    by 0x492761: main (catch.hpp:13613)
==22808== 
==22808== Conditional jump or move depends on uninitialised value(s)
==22808==    at 0x42D2AC: List<int>::_destroy() (List.hpp:41)
==22808==    by 0x42AF84: List<int>::~List() (List-given.hpp:68)
==22808==    by 0x434D6E: ____C_A_T_C_H____T_E_S_T____19() (tests_part1.cpp:176)
==22808==    by 0x4728B2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==22808==    by 0x463006: Catch::TestCase::invoke() const (catch.hpp:10793)
==22808==    by 0x462F3C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==22808==    by 0x45F496: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==22808==    by 0x45DA6E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==22808==    by 0x466E06: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==22808==    by 0x465AA2: Catch::Session::runInternal() (catch.hpp:10149)
==22808==    by 0x46576A: Catch::Session::run() (catch.hpp:10106)
==22808==    by 0x4656E9: Catch::Session::run(int, char**) (catch.hpp:10074)
==22808== 
==22808== 
==22808== HEAP SUMMARY:
==22808==     in use at exit: 0 bytes in 0 blocks
==22808==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==22808== 
==22808== All heap blocks were freed -- no leaks are possible
==22808== 
==22808== For counts of detected and suppressed errors, rerun with: -v
==22808== Use --track-origins=yes to see where uninitialised values come from
==22808== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)

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
==22816== Memcheck, a memory error detector
==22816== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22816== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==22816== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==22816== 
==22816== Conditional jump or move depends on uninitialised value(s)
==22816==    at 0x43809C: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:63)
==22816==    by 0x4350D1: ____C_A_T_C_H____T_E_S_T____23() (tests_part1.cpp:189)
==22816==    by 0x4728B2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==22816==    by 0x463006: Catch::TestCase::invoke() const (catch.hpp:10793)
==22816==    by 0x462F3C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==22816==    by 0x45F496: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==22816==    by 0x45DA6E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==22816==    by 0x466E06: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==22816==    by 0x465AA2: Catch::Session::runInternal() (catch.hpp:10149)
==22816==    by 0x46576A: Catch::Session::run() (catch.hpp:10106)
==22816==    by 0x4656E9: Catch::Session::run(int, char**) (catch.hpp:10074)
==22816==    by 0x492761: main (catch.hpp:13613)
==22816== 
==22816== Conditional jump or move depends on uninitialised value(s)
==22816==    at 0x4380D6: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:64)
==22816==    by 0x4350D1: ____C_A_T_C_H____T_E_S_T____23() (tests_part1.cpp:189)
==22816==    by 0x4728B2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==22816==    by 0x463006: Catch::TestCase::invoke() const (catch.hpp:10793)
==22816==    by 0x462F3C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==22816==    by 0x45F496: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==22816==    by 0x45DA6E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==22816==    by 0x466E06: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==22816==    by 0x465AA2: Catch::Session::runInternal() (catch.hpp:10149)
==22816==    by 0x46576A: Catch::Session::run() (catch.hpp:10106)
==22816==    by 0x4656E9: Catch::Session::run(int, char**) (catch.hpp:10074)
==22816==    by 0x492761: main (catch.hpp:13613)
==22816== 
==22816== Conditional jump or move depends on uninitialised value(s)
==22816==    at 0x43854C: List<unsigned int>::_destroy() (List.hpp:41)
==22816==    by 0x4382B4: List<unsigned int>::~List() (List-given.hpp:68)
==22816==    by 0x43533C: ____C_A_T_C_H____T_E_S_T____23() (tests_part1.cpp:195)
==22816==    by 0x4728B2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==22816==    by 0x463006: Catch::TestCase::invoke() const (catch.hpp:10793)
==22816==    by 0x462F3C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==22816==    by 0x45F496: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==22816==    by 0x45DA6E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==22816==    by 0x466E06: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==22816==    by 0x465AA2: Catch::Session::runInternal() (catch.hpp:10149)
==22816==    by 0x46576A: Catch::Session::run() (catch.hpp:10106)
==22816==    by 0x4656E9: Catch::Session::run(int, char**) (catch.hpp:10074)
==22816== 
==22816== 
==22816== HEAP SUMMARY:
==22816==     in use at exit: 0 bytes in 0 blocks
==22816==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==22816== 
==22816== All heap blocks were freed -- no leaks are possible
==22816== 
==22816== For counts of detected and suppressed errors, rerun with: -v
==22816== Use --track-origins=yes to see where uninitialised values come from
==22816== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)

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
==22829== Memcheck, a memory error detector
==22829== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22829== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==22829== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==22829== 
==22829== Conditional jump or move depends on uninitialised value(s)
==22829==    at 0x43809C: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:63)
==22829==    by 0x436354: ____C_A_T_C_H____T_E_S_T____31() (tests_part1.cpp:234)
==22829==    by 0x4728B2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==22829==    by 0x463006: Catch::TestCase::invoke() const (catch.hpp:10793)
==22829==    by 0x462F3C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==22829==    by 0x45F496: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==22829==    by 0x45DA6E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==22829==    by 0x466E06: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==22829==    by 0x465AA2: Catch::Session::runInternal() (catch.hpp:10149)
==22829==    by 0x46576A: Catch::Session::run() (catch.hpp:10106)
==22829==    by 0x4656E9: Catch::Session::run(int, char**) (catch.hpp:10074)
==22829==    by 0x492761: main (catch.hpp:13613)
==22829== 
==22829== Conditional jump or move depends on uninitialised value(s)
==22829==    at 0x4380D6: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:64)
==22829==    by 0x436354: ____C_A_T_C_H____T_E_S_T____31() (tests_part1.cpp:234)
==22829==    by 0x4728B2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==22829==    by 0x463006: Catch::TestCase::invoke() const (catch.hpp:10793)
==22829==    by 0x462F3C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==22829==    by 0x45F496: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==22829==    by 0x45DA6E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==22829==    by 0x466E06: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==22829==    by 0x465AA2: Catch::Session::runInternal() (catch.hpp:10149)
==22829==    by 0x46576A: Catch::Session::run() (catch.hpp:10106)
==22829==    by 0x4656E9: Catch::Session::run(int, char**) (catch.hpp:10074)
==22829==    by 0x492761: main (catch.hpp:13613)
==22829== 
==22829== Conditional jump or move depends on uninitialised value(s)
==22829==    at 0x43854C: List<unsigned int>::_destroy() (List.hpp:41)
==22829==    by 0x4382B4: List<unsigned int>::~List() (List-given.hpp:68)
==22829==    by 0x4365DB: ____C_A_T_C_H____T_E_S_T____31() (tests_part1.cpp:244)
==22829==    by 0x4728B2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==22829==    by 0x463006: Catch::TestCase::invoke() const (catch.hpp:10793)
==22829==    by 0x462F3C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==22829==    by 0x45F496: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==22829==    by 0x45DA6E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==22829==    by 0x466E06: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==22829==    by 0x465AA2: Catch::Session::runInternal() (catch.hpp:10149)
==22829==    by 0x46576A: Catch::Session::run() (catch.hpp:10106)
==22829==    by 0x4656E9: Catch::Session::run(int, char**) (catch.hpp:10074)
==22829== 
==22829== 
==22829== HEAP SUMMARY:
==22829==     in use at exit: 0 bytes in 0 blocks
==22829==   total heap usage: 2,352 allocs, 2,352 frees, 270,872 bytes allocated
==22829== 
==22829== All heap blocks were freed -- no leaks are possible
==22829== 
==22829== For counts of detected and suppressed errors, rerun with: -v
==22829== Use --track-origins=yes to see where uninitialised values come from
==22829== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)

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


### ✗ - [0/4] - List::reverse simple

- **Points**: 0 / 4


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse simple" tags="[part=2][valgrind][weight=4]" filename="tests/test_part2_extra.cpp" line="15">
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="28">
        <Original>
          "&lt; 4 12 -1 99 3 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 4 12 -1 99 3 >" == "&lt; 3 99 -1 12 4 >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::reverse edge cases

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse edge cases" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="31">
      <FatalErrorCondition filename="tests/test_part2_extra.cpp" line="31">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::reverseNth #3

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverseNth #3" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="47">
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="59">
        <Original>
          "&lt; 4 3 2 1 8 7 6 5 10 9 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 4 3 2 1 8 7 6 5 10 9 >"
==
"&lt; 1 2 3 4 5 6 7 8 9 10 >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::merge #2

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge #2" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="62">
      <FatalErrorCondition filename="tests/test_part2_extra.cpp" line="62">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #3

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #3" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="87">
      <FatalErrorCondition filename="tests/test_part2_extra.cpp" line="87">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
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
==22845== Memcheck, a memory error detector
==22845== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22845== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==22845== Command: ./test -r xml "List::insert\ contents\ #2"
==22845== 
==22845== Conditional jump or move depends on uninitialised value(s)
==22845==    at 0x43696C: List<int>::insertFront(int const&) (List.hpp:63)
==22845==    by 0x43E74D: ____C_A_T_C_H____T_E_S_T____0() (tests_part1_extra.cpp:17)
==22845==    by 0x4728B2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==22845==    by 0x463006: Catch::TestCase::invoke() const (catch.hpp:10793)
==22845==    by 0x462F3C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==22845==    by 0x45F496: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==22845==    by 0x45DA6E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==22845==    by 0x466E06: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==22845==    by 0x465AA2: Catch::Session::runInternal() (catch.hpp:10149)
==22845==    by 0x46576A: Catch::Session::run() (catch.hpp:10106)
==22845==    by 0x4656E9: Catch::Session::run(int, char**) (catch.hpp:10074)
==22845==    by 0x492761: main (catch.hpp:13613)
==22845== 
==22845== Conditional jump or move depends on uninitialised value(s)
==22845==    at 0x4369A6: List<int>::insertFront(int const&) (List.hpp:64)
==22845==    by 0x43E74D: ____C_A_T_C_H____T_E_S_T____0() (tests_part1_extra.cpp:17)
==22845==    by 0x4728B2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==22845==    by 0x463006: Catch::TestCase::invoke() const (catch.hpp:10793)
==22845==    by 0x462F3C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==22845==    by 0x45F496: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==22845==    by 0x45DA6E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==22845==    by 0x466E06: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==22845==    by 0x465AA2: Catch::Session::runInternal() (catch.hpp:10149)
==22845==    by 0x46576A: Catch::Session::run() (catch.hpp:10106)
==22845==    by 0x4656E9: Catch::Session::run(int, char**) (catch.hpp:10074)
==22845==    by 0x492761: main (catch.hpp:13613)
==22845== 
==22845== 
==22845== HEAP SUMMARY:
==22845==     in use at exit: 0 bytes in 0 blocks
==22845==   total heap usage: 2,358 allocs, 2,358 frees, 268,672 bytes allocated
==22845== 
==22845== All heap blocks were freed -- no leaks are possible
==22845== 
==22845== For counts of detected and suppressed errors, rerun with: -v
==22845== Use --track-origins=yes to see where uninitialised values come from
==22845== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

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
