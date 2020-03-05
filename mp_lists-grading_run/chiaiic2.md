


## Score: 121/121 (100.00%)


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


### ✓ - [5/5] - List::reverse

- **Points**: 5 / 5





### ✓ - [5/5] - List::reverseNth #1

- **Points**: 5 / 5





### ✓ - [5/5] - List::reverseNth #2

- **Points**: 5 / 5





### ✓ - [10/10] - List::merge

- **Points**: 10 / 10

```
==33061== Memcheck, a memory error detector
==33061== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33061== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==33061== Command: ./test -r xml "List::merge"
==33061== 
==33061== 
==33061== HEAP SUMMARY:
==33061==     in use at exit: 0 bytes in 0 blocks
==33061==   total heap usage: 243,356 allocs, 243,356 frees, 79,517,849 bytes allocated
==33061== 
==33061== All heap blocks were freed -- no leaks are possible
==33061== 
==33061== For counts of detected and suppressed errors, rerun with: -v
==33061== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge" tags="[part=2][valgrind][weight=10]" filename="tests/tests_part2.cpp" line="59">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #1

- **Points**: 2 / 2

```
==33071== Memcheck, a memory error detector
==33071== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33071== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==33071== Command: ./test -r xml "List::sort\ simple\ #1"
==33071== 
==33071== 
==33071== HEAP SUMMARY:
==33071==     in use at exit: 0 bytes in 0 blocks
==33071==   total heap usage: 2,250 allocs, 2,250 frees, 276,576 bytes allocated
==33071== 
==33071== All heap blocks were freed -- no leaks are possible
==33071== 
==33071== For counts of detected and suppressed errors, rerun with: -v
==33071== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #1" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="93">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #2

- **Points**: 2 / 2

```
==33076== Memcheck, a memory error detector
==33076== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33076== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==33076== Command: ./test -r xml "List::sort\ simple\ #2"
==33076== 
==33076== 
==33076== HEAP SUMMARY:
==33076==     in use at exit: 0 bytes in 0 blocks
==33076==   total heap usage: 2,250 allocs, 2,250 frees, 276,624 bytes allocated
==33076== 
==33076== All heap blocks were freed -- no leaks are possible
==33076== 
==33076== For counts of detected and suppressed errors, rerun with: -v
==33076== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #2" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::sort #1

- **Points**: 5 / 5





### ✓ - [5/5] - List::sort #2

- **Points**: 5 / 5





### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==33083== Memcheck, a memory error detector
==33083== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33083== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==33083== Command: ./test -r xml "List::insertFront\ size"
==33083== 
==33083== 
==33083== HEAP SUMMARY:
==33083==     in use at exit: 0 bytes in 0 blocks
==33083==   total heap usage: 2,395 allocs, 2,395 frees, 281,176 bytes allocated
==33083== 
==33083== All heap blocks were freed -- no leaks are possible
==33083== 
==33083== For counts of detected and suppressed errors, rerun with: -v
==33083== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [2/2] - List::insertBack size

- **Points**: 2 / 2

```
==33088== Memcheck, a memory error detector
==33088== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33088== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==33088== Command: ./test -r xml "List::insertBack\ size"
==33088== 
==33088== 
==33088== HEAP SUMMARY:
==33088==     in use at exit: 0 bytes in 0 blocks
==33088==   total heap usage: 2,395 allocs, 2,395 frees, 281,176 bytes allocated
==33088== 
==33088== All heap blocks were freed -- no leaks are possible
==33088== 
==33088== For counts of detected and suppressed errors, rerun with: -v
==33088== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [4/4] - List::insert contents

- **Points**: 4 / 4

```
==33091== Memcheck, a memory error detector
==33091== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33091== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==33091== Command: ./test -r xml "List::insert\ contents"
==33091== 
==33091== 
==33091== HEAP SUMMARY:
==33091==     in use at exit: 0 bytes in 0 blocks
==33091==   total heap usage: 2,391 allocs, 2,391 frees, 281,080 bytes allocated
==33091== 
==33091== All heap blocks were freed -- no leaks are possible
==33091== 
==33091== For counts of detected and suppressed errors, rerun with: -v
==33091== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [5/5] - List::triplerotate basic

- **Points**: 5 / 5

```
==33096== Memcheck, a memory error detector
==33096== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33096== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==33096== Command: ./test -r xml "List::triplerotate\ basic"
==33096== 
==33096== 
==33096== HEAP SUMMARY:
==33096==     in use at exit: 0 bytes in 0 blocks
==33096==   total heap usage: 2,399 allocs, 2,399 frees, 281,368 bytes allocated
==33096== 
==33096== All heap blocks were freed -- no leaks are possible
==33096== 
==33096== For counts of detected and suppressed errors, rerun with: -v
==33096== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [10/10] - List::triplerotate simple

- **Points**: 10 / 10

```
==33101== Memcheck, a memory error detector
==33101== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33101== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==33101== Command: ./test -r xml "List::triplerotate\ simple"
==33101== 
==33101== 
==33101== HEAP SUMMARY:
==33101==     in use at exit: 0 bytes in 0 blocks
==33101==   total heap usage: 2,403 allocs, 2,403 frees, 281,464 bytes allocated
==33101== 
==33101== All heap blocks were freed -- no leaks are possible
==33101== 
==33101== For counts of detected and suppressed errors, rerun with: -v
==33101== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::triplerotate simple" tags="[part=1][valgrind][weight=10]" filename="tests/tests_part1.cpp" line="67">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::split simple

- **Points**: 5 / 5

```
==33104== Memcheck, a memory error detector
==33104== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33104== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==33104== Command: ./test -r xml "List::split\ simple"
==33104== 
==33104== 
==33104== HEAP SUMMARY:
==33104==     in use at exit: 0 bytes in 0 blocks
==33104==   total heap usage: 2,253 allocs, 2,253 frees, 276,648 bytes allocated
==33104== 
==33104== All heap blocks were freed -- no leaks are possible
==33104== 
==33104== For counts of detected and suppressed errors, rerun with: -v
==33104== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1.cpp" line="82">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::split images

- **Points**: 5 / 5





### ✓ - [3/3] - List::_destroy empty list

- **Points**: 3 / 3

```
==33109== Memcheck, a memory error detector
==33109== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33109== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==33109== Command: ./test -r xml "List::_destroy\ empty\ list"
==33109== 
==33109== 
==33109== HEAP SUMMARY:
==33109==     in use at exit: 0 bytes in 0 blocks
==33109==   total heap usage: 2,403 allocs, 2,403 frees, 282,008 bytes allocated
==33109== 
==33109== All heap blocks were freed -- no leaks are possible
==33109== 
==33109== For counts of detected and suppressed errors, rerun with: -v
==33109== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [1/1] - List::begin() returns an iterator to the front of the list

- **Points**: 1 / 1

```
==33114== Memcheck, a memory error detector
==33114== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33114== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==33114== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==33114== 
==33114== 
==33114== HEAP SUMMARY:
==33114==     in use at exit: 0 bytes in 0 blocks
==33114==   total heap usage: 2,407 allocs, 2,407 frees, 286,344 bytes allocated
==33114== 
==33114== All heap blocks were freed -- no leaks are possible
==33114== 
==33114== For counts of detected and suppressed errors, rerun with: -v
==33114== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (pre-increment)

- **Points**: 1 / 1

```
==33117== Memcheck, a memory error detector
==33117== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33117== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==33117== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==33117== 
==33117== 
==33117== HEAP SUMMARY:
==33117==     in use at exit: 0 bytes in 0 blocks
==33117==   total heap usage: 2,407 allocs, 2,407 frees, 288,744 bytes allocated
==33117== 
==33117== All heap blocks were freed -- no leaks are possible
==33117== 
==33117== For counts of detected and suppressed errors, rerun with: -v
==33117== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (pre-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="178">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (post-increment)

- **Points**: 1 / 1

```
==33120== Memcheck, a memory error detector
==33120== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33120== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==33120== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==33120== 
==33120== 
==33120== HEAP SUMMARY:
==33120==     in use at exit: 0 bytes in 0 blocks
==33120==   total heap usage: 2,407 allocs, 2,407 frees, 288,744 bytes allocated
==33120== 
==33120== All heap blocks were freed -- no leaks are possible
==33120== 
==33120== For counts of detected and suppressed errors, rerun with: -v
==33120== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [1/1] - List::ListIterator::operator++ (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==33123== Memcheck, a memory error detector
==33123== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33123== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==33123== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==33123== 
==33123== 
==33123== HEAP SUMMARY:
==33123==     in use at exit: 0 bytes in 0 blocks
==33123==   total heap usage: 2,407 allocs, 2,407 frees, 291,144 bytes allocated
==33123== 
==33123== All heap blocks were freed -- no leaks are possible
==33123== 
==33123== For counts of detected and suppressed errors, rerun with: -v
==33123== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="197">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator-- moves the iterator backwards

- **Points**: 1 / 1

```
==33128== Memcheck, a memory error detector
==33128== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33128== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==33128== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==33128== 
==33128== 
==33128== HEAP SUMMARY:
==33128==     in use at exit: 0 bytes in 0 blocks
==33128==   total heap usage: 2,407 allocs, 2,407 frees, 286,344 bytes allocated
==33128== 
==33128== All heap blocks were freed -- no leaks are possible
==33128== 
==33128== For counts of detected and suppressed errors, rerun with: -v
==33128== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- moves the iterator backwards" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="207">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator-- (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==33132== Memcheck, a memory error detector
==33132== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33132== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==33132== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==33132== 
==33132== 
==33132== HEAP SUMMARY:
==33132==     in use at exit: 0 bytes in 0 blocks
==33132==   total heap usage: 2,407 allocs, 2,407 frees, 291,144 bytes allocated
==33132== 
==33132== All heap blocks were freed -- no leaks are possible
==33132== 
==33132== For counts of detected and suppressed errors, rerun with: -v
==33132== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="219">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::end is reached

- **Points**: 1 / 1

```
==33136== Memcheck, a memory error detector
==33136== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33136== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==33136== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==33136== 
==33136== 
==33136== HEAP SUMMARY:
==33136==     in use at exit: 0 bytes in 0 blocks
==33136==   total heap usage: 2,400 allocs, 2,400 frees, 283,776 bytes allocated
==33136== 
==33136== All heap blocks were freed -- no leaks are possible
==33136== 
==33136== For counts of detected and suppressed errors, rerun with: -v
==33136== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [1/1] - List::ListIterator::end is not ::begin in a non-empty list

- **Points**: 1 / 1

```
==33141== Memcheck, a memory error detector
==33141== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33141== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==33141== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==33141== 
==33141== 
==33141== HEAP SUMMARY:
==33141==     in use at exit: 0 bytes in 0 blocks
==33141==   total heap usage: 2,400 allocs, 2,400 frees, 286,176 bytes allocated
==33141== 
==33141== All heap blocks were freed -- no leaks are possible
==33141== 
==33141== For counts of detected and suppressed errors, rerun with: -v
==33141== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is not ::begin in a non-empty list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="246">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::reverse simple

- **Points**: 4 / 4

```
==33147== Memcheck, a memory error detector
==33147== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33147== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==33147== Command: ./test -r xml "List::reverse\ simple"
==33147== 
==33147== 
==33147== HEAP SUMMARY:
==33147==     in use at exit: 0 bytes in 0 blocks
==33147==   total heap usage: 2,256 allocs, 2,256 frees, 276,756 bytes allocated
==33147== 
==33147== All heap blocks were freed -- no leaks are possible
==33147== 
==33147== For counts of detected and suppressed errors, rerun with: -v
==33147== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse simple" tags="[part=2][valgrind][weight=4]" filename="tests/test_part2_extra.cpp" line="15">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::reverse edge cases

- **Points**: 2 / 2

```
==33150== Memcheck, a memory error detector
==33150== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33150== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==33150== Command: ./test -r xml "List::reverse\ edge\ cases"
==33150== 
==33150== 
==33150== HEAP SUMMARY:
==33150==     in use at exit: 0 bytes in 0 blocks
==33150==   total heap usage: 2,401 allocs, 2,401 frees, 281,456 bytes allocated
==33150== 
==33150== All heap blocks were freed -- no leaks are possible
==33150== 
==33150== For counts of detected and suppressed errors, rerun with: -v
==33150== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse edge cases" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="31">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::reverseNth #3

- **Points**: 5 / 5

```
==33154== Memcheck, a memory error detector
==33154== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33154== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==33154== Command: ./test -r xml "List::reverseNth\ #3"
==33154== 
==33154== 
==33154== HEAP SUMMARY:
==33154==     in use at exit: 0 bytes in 0 blocks
==33154==   total heap usage: 2,262 allocs, 2,262 frees, 276,936 bytes allocated
==33154== 
==33154== All heap blocks were freed -- no leaks are possible
==33154== 
==33154== For counts of detected and suppressed errors, rerun with: -v
==33154== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverseNth #3" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="47">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::merge #2

- **Points**: 5 / 5

```
==33159== Memcheck, a memory error detector
==33159== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33159== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==33159== Command: ./test -r xml "List::merge\ #2"
==33159== 
==33159== 
==33159== HEAP SUMMARY:
==33159==     in use at exit: 0 bytes in 0 blocks
==33159==   total heap usage: 2,291 allocs, 2,291 frees, 278,712 bytes allocated
==33159== 
==33159== All heap blocks were freed -- no leaks are possible
==33159== 
==33159== For counts of detected and suppressed errors, rerun with: -v
==33159== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge #2" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="62">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #3

- **Points**: 2 / 2

```
==33163== Memcheck, a memory error detector
==33163== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33163== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==33163== Command: ./test -r xml "List::sort\ simple\ #3"
==33163== 
==33163== 
==33163== HEAP SUMMARY:
==33163==     in use at exit: 0 bytes in 0 blocks
==33163==   total heap usage: 2,253 allocs, 2,253 frees, 276,688 bytes allocated
==33163== 
==33163== All heap blocks were freed -- no leaks are possible
==33163== 
==33163== For counts of detected and suppressed errors, rerun with: -v
==33163== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #3" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="87">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==33168== Memcheck, a memory error detector
==33168== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33168== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==33168== Command: ./test -r xml "List::insert\ contents\ #2"
==33168== 
==33168== 
==33168== HEAP SUMMARY:
==33168==     in use at exit: 0 bytes in 0 blocks
==33168==   total heap usage: 2,406 allocs, 2,406 frees, 281,576 bytes allocated
==33168== 
==33168== All heap blocks were freed -- no leaks are possible
==33168== 
==33168== For counts of detected and suppressed errors, rerun with: -v
==33168== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [5/5] - List::split edge cases

- **Points**: 5 / 5

```
==33173== Memcheck, a memory error detector
==33173== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33173== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==33173== Command: ./test -r xml "List::split\ edge\ cases"
==33173== 
==33173== 
==33173== HEAP SUMMARY:
==33173==     in use at exit: 0 bytes in 0 blocks
==33173==   total heap usage: 2,396 allocs, 2,396 frees, 281,240 bytes allocated
==33173== 
==33173== All heap blocks were freed -- no leaks are possible
==33173== 
==33173== For counts of detected and suppressed errors, rerun with: -v
==33173== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split edge cases" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="30">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::triplerotate hard

- **Points**: 2 / 2

```
==33177== Memcheck, a memory error detector
==33177== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33177== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==33177== Command: ./test -r xml "List::triplerotate\ hard"
==33177== 
==33177== 
==33177== HEAP SUMMARY:
==33177==     in use at exit: 0 bytes in 0 blocks
==33177==   total heap usage: 2,408 allocs, 2,408 frees, 281,624 bytes allocated
==33177== 
==33177== All heap blocks were freed -- no leaks are possible
==33177== 
==33177== For counts of detected and suppressed errors, rerun with: -v
==33177== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::triplerotate hard" tags="[part=1][valgrind][weight=2]" filename="tests/tests_part1_extra.cpp" line="50">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - List::triplerotate image

- **Points**: 10 / 10





---

This report was generated for **chiaiic2** using **2e9bd0732359835152224234e7dbe142b84a46a7** (from **March 3rd 2020, 11:59:59 pm**)
