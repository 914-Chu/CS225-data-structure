


## Score: 109/109 (100.00%)


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
==2908== Memcheck, a memory error detector
==2908== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2908== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2908== Command: ./test -r xml "List::merge"
==2908== 
==2908== 
==2908== HEAP SUMMARY:
==2908==     in use at exit: 0 bytes in 0 blocks
==2908==   total heap usage: 243,308 allocs, 243,308 frees, 79,504,945 bytes allocated
==2908== 
==2908== All heap blocks were freed -- no leaks are possible
==2908== 
==2908== For counts of detected and suppressed errors, rerun with: -v
==2908== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2924== Memcheck, a memory error detector
==2924== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2924== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2924== Command: ./test -r xml "List::sort\ simple\ #1"
==2924== 
==2924== 
==2924== HEAP SUMMARY:
==2924==     in use at exit: 0 bytes in 0 blocks
==2924==   total heap usage: 2,202 allocs, 2,202 frees, 263,672 bytes allocated
==2924== 
==2924== All heap blocks were freed -- no leaks are possible
==2924== 
==2924== For counts of detected and suppressed errors, rerun with: -v
==2924== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2927== Memcheck, a memory error detector
==2927== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2927== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2927== Command: ./test -r xml "List::sort\ simple\ #2"
==2927== 
==2927== 
==2927== HEAP SUMMARY:
==2927==     in use at exit: 0 bytes in 0 blocks
==2927==   total heap usage: 2,202 allocs, 2,202 frees, 263,720 bytes allocated
==2927== 
==2927== All heap blocks were freed -- no leaks are possible
==2927== 
==2927== For counts of detected and suppressed errors, rerun with: -v
==2927== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2971== Memcheck, a memory error detector
==2971== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2971== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2971== Command: ./test -r xml "List::insertFront\ size"
==2971== 
==2971== 
==2971== HEAP SUMMARY:
==2971==     in use at exit: 0 bytes in 0 blocks
==2971==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==2971== 
==2971== All heap blocks were freed -- no leaks are possible
==2971== 
==2971== For counts of detected and suppressed errors, rerun with: -v
==2971== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2974== Memcheck, a memory error detector
==2974== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2974== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2974== Command: ./test -r xml "List::insertBack\ size"
==2974== 
==2974== 
==2974== HEAP SUMMARY:
==2974==     in use at exit: 0 bytes in 0 blocks
==2974==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==2974== 
==2974== All heap blocks were freed -- no leaks are possible
==2974== 
==2974== For counts of detected and suppressed errors, rerun with: -v
==2974== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2977== Memcheck, a memory error detector
==2977== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2977== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2977== Command: ./test -r xml "List::insert\ contents"
==2977== 
==2977== 
==2977== HEAP SUMMARY:
==2977==     in use at exit: 0 bytes in 0 blocks
==2977==   total heap usage: 2,343 allocs, 2,343 frees, 268,176 bytes allocated
==2977== 
==2977== All heap blocks were freed -- no leaks are possible
==2977== 
==2977== For counts of detected and suppressed errors, rerun with: -v
==2977== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2981== Memcheck, a memory error detector
==2981== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2981== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2981== Command: ./test -r xml "List::triplerotate\ basic"
==2981== 
==2981== 
==2981== HEAP SUMMARY:
==2981==     in use at exit: 0 bytes in 0 blocks
==2981==   total heap usage: 2,351 allocs, 2,351 frees, 268,464 bytes allocated
==2981== 
==2981== All heap blocks were freed -- no leaks are possible
==2981== 
==2981== For counts of detected and suppressed errors, rerun with: -v
==2981== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2984== Memcheck, a memory error detector
==2984== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2984== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2984== Command: ./test -r xml "List::triplerotate\ simple"
==2984== 
==2984== 
==2984== HEAP SUMMARY:
==2984==     in use at exit: 0 bytes in 0 blocks
==2984==   total heap usage: 2,355 allocs, 2,355 frees, 268,560 bytes allocated
==2984== 
==2984== All heap blocks were freed -- no leaks are possible
==2984== 
==2984== For counts of detected and suppressed errors, rerun with: -v
==2984== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2988== Memcheck, a memory error detector
==2988== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2988== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2988== Command: ./test -r xml "List::split\ simple"
==2988== 
==2988== 
==2988== HEAP SUMMARY:
==2988==     in use at exit: 0 bytes in 0 blocks
==2988==   total heap usage: 2,205 allocs, 2,205 frees, 263,744 bytes allocated
==2988== 
==2988== All heap blocks were freed -- no leaks are possible
==2988== 
==2988== For counts of detected and suppressed errors, rerun with: -v
==2988== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3003== Memcheck, a memory error detector
==3003== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3003== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==3003== Command: ./test -r xml "List::_destroy\ empty\ list"
==3003== 
==3003== 
==3003== HEAP SUMMARY:
==3003==     in use at exit: 0 bytes in 0 blocks
==3003==   total heap usage: 2,355 allocs, 2,355 frees, 269,104 bytes allocated
==3003== 
==3003== All heap blocks were freed -- no leaks are possible
==3003== 
==3003== For counts of detected and suppressed errors, rerun with: -v
==3003== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3006== Memcheck, a memory error detector
==3006== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3006== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==3006== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==3006== 
==3006== 
==3006== HEAP SUMMARY:
==3006==     in use at exit: 0 bytes in 0 blocks
==3006==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==3006== 
==3006== All heap blocks were freed -- no leaks are possible
==3006== 
==3006== For counts of detected and suppressed errors, rerun with: -v
==3006== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3010== Memcheck, a memory error detector
==3010== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3010== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==3010== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==3010== 
==3010== 
==3010== HEAP SUMMARY:
==3010==     in use at exit: 0 bytes in 0 blocks
==3010==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==3010== 
==3010== All heap blocks were freed -- no leaks are possible
==3010== 
==3010== For counts of detected and suppressed errors, rerun with: -v
==3010== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3013== Memcheck, a memory error detector
==3013== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3013== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==3013== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==3013== 
==3013== 
==3013== HEAP SUMMARY:
==3013==     in use at exit: 0 bytes in 0 blocks
==3013==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==3013== 
==3013== All heap blocks were freed -- no leaks are possible
==3013== 
==3013== For counts of detected and suppressed errors, rerun with: -v
==3013== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3016== Memcheck, a memory error detector
==3016== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3016== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==3016== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==3016== 
==3016== 
==3016== HEAP SUMMARY:
==3016==     in use at exit: 0 bytes in 0 blocks
==3016==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==3016== 
==3016== All heap blocks were freed -- no leaks are possible
==3016== 
==3016== For counts of detected and suppressed errors, rerun with: -v
==3016== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3019== Memcheck, a memory error detector
==3019== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3019== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==3019== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==3019== 
==3019== 
==3019== HEAP SUMMARY:
==3019==     in use at exit: 0 bytes in 0 blocks
==3019==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==3019== 
==3019== All heap blocks were freed -- no leaks are possible
==3019== 
==3019== For counts of detected and suppressed errors, rerun with: -v
==3019== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3022== Memcheck, a memory error detector
==3022== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3022== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==3022== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==3022== 
==3022== 
==3022== HEAP SUMMARY:
==3022==     in use at exit: 0 bytes in 0 blocks
==3022==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==3022== 
==3022== All heap blocks were freed -- no leaks are possible
==3022== 
==3022== For counts of detected and suppressed errors, rerun with: -v
==3022== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3025== Memcheck, a memory error detector
==3025== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3025== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==3025== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==3025== 
==3025== 
==3025== HEAP SUMMARY:
==3025==     in use at exit: 0 bytes in 0 blocks
==3025==   total heap usage: 2,352 allocs, 2,352 frees, 270,872 bytes allocated
==3025== 
==3025== All heap blocks were freed -- no leaks are possible
==3025== 
==3025== For counts of detected and suppressed errors, rerun with: -v
==3025== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3028== Memcheck, a memory error detector
==3028== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3028== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==3028== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==3028== 
==3028== 
==3028== HEAP SUMMARY:
==3028==     in use at exit: 0 bytes in 0 blocks
==3028==   total heap usage: 2,352 allocs, 2,352 frees, 273,272 bytes allocated
==3028== 
==3028== All heap blocks were freed -- no leaks are possible
==3028== 
==3028== For counts of detected and suppressed errors, rerun with: -v
==3028== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3031== Memcheck, a memory error detector
==3031== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3031== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==3031== Command: ./test -r xml "List::reverse\ simple"
==3031== 
==3031== 
==3031== HEAP SUMMARY:
==3031==     in use at exit: 0 bytes in 0 blocks
==3031==   total heap usage: 2,208 allocs, 2,208 frees, 263,852 bytes allocated
==3031== 
==3031== All heap blocks were freed -- no leaks are possible
==3031== 
==3031== For counts of detected and suppressed errors, rerun with: -v
==3031== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3035== Memcheck, a memory error detector
==3035== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3035== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==3035== Command: ./test -r xml "List::reverse\ edge\ cases"
==3035== 
==3035== 
==3035== HEAP SUMMARY:
==3035==     in use at exit: 0 bytes in 0 blocks
==3035==   total heap usage: 2,353 allocs, 2,353 frees, 268,552 bytes allocated
==3035== 
==3035== All heap blocks were freed -- no leaks are possible
==3035== 
==3035== For counts of detected and suppressed errors, rerun with: -v
==3035== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3043== Memcheck, a memory error detector
==3043== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3043== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==3043== Command: ./test -r xml "List::reverseNth\ #3"
==3043== 
==3043== 
==3043== HEAP SUMMARY:
==3043==     in use at exit: 0 bytes in 0 blocks
==3043==   total heap usage: 2,214 allocs, 2,214 frees, 264,032 bytes allocated
==3043== 
==3043== All heap blocks were freed -- no leaks are possible
==3043== 
==3043== For counts of detected and suppressed errors, rerun with: -v
==3043== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3046== Memcheck, a memory error detector
==3046== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3046== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==3046== Command: ./test -r xml "List::merge\ #2"
==3046== 
==3046== 
==3046== HEAP SUMMARY:
==3046==     in use at exit: 0 bytes in 0 blocks
==3046==   total heap usage: 2,243 allocs, 2,243 frees, 265,808 bytes allocated
==3046== 
==3046== All heap blocks were freed -- no leaks are possible
==3046== 
==3046== For counts of detected and suppressed errors, rerun with: -v
==3046== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3051== Memcheck, a memory error detector
==3051== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3051== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==3051== Command: ./test -r xml "List::sort\ simple\ #3"
==3051== 
==3051== 
==3051== HEAP SUMMARY:
==3051==     in use at exit: 0 bytes in 0 blocks
==3051==   total heap usage: 2,205 allocs, 2,205 frees, 263,784 bytes allocated
==3051== 
==3051== All heap blocks were freed -- no leaks are possible
==3051== 
==3051== For counts of detected and suppressed errors, rerun with: -v
==3051== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3054== Memcheck, a memory error detector
==3054== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3054== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==3054== Command: ./test -r xml "List::insert\ contents\ #2"
==3054== 
==3054== 
==3054== HEAP SUMMARY:
==3054==     in use at exit: 0 bytes in 0 blocks
==3054==   total heap usage: 2,358 allocs, 2,358 frees, 268,672 bytes allocated
==3054== 
==3054== All heap blocks were freed -- no leaks are possible
==3054== 
==3054== For counts of detected and suppressed errors, rerun with: -v
==3054== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3057== Memcheck, a memory error detector
==3057== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3057== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==3057== Command: ./test -r xml "List::split\ edge\ cases"
==3057== 
==3057== 
==3057== HEAP SUMMARY:
==3057==     in use at exit: 0 bytes in 0 blocks
==3057==   total heap usage: 2,348 allocs, 2,348 frees, 268,336 bytes allocated
==3057== 
==3057== All heap blocks were freed -- no leaks are possible
==3057== 
==3057== For counts of detected and suppressed errors, rerun with: -v
==3057== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


---

This report was generated for **chiaiic2** using **2e9bd0732359835152224234e7dbe142b84a46a7** (from **March 2nd 2020, 11:59:59 pm**)
