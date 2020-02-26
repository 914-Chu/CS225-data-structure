


## Score: 14/14 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c exercises.cpp -o .objs/exercises.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/basic.cpp -o .objs/tests/basic.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/exercises.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/basic.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - sumDigits

- **Points**: 1 / 1

```
==11444== Memcheck, a memory error detector
==11444== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11444== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==11444== Command: ./test -r xml "sumDigits"
==11444== 
==11444== 
==11444== HEAP SUMMARY:
==11444==     in use at exit: 0 bytes in 0 blocks
==11444==   total heap usage: 1,689 allocs, 1,689 frees, 218,344 bytes allocated
==11444== 
==11444== All heap blocks were freed -- no leaks are possible
==11444== 
==11444== For counts of detected and suppressed errors, rerun with: -v
==11444== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="sumDigits" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="26">
      <Section name="Base cases work" filename="tests/basic.cpp" line="27">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Multiple digits sum correctly" filename="tests/basic.cpp" line="31">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - triangle

- **Points**: 1 / 1

```
==11449== Memcheck, a memory error detector
==11449== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11449== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==11449== Command: ./test -r xml "triangle"
==11449== 
==11449== 
==11449== HEAP SUMMARY:
==11449==     in use at exit: 0 bytes in 0 blocks
==11449==   total heap usage: 1,675 allocs, 1,675 frees, 217,896 bytes allocated
==11449== 
==11449== All heap blocks were freed -- no leaks are possible
==11449== 
==11449== For counts of detected and suppressed errors, rerun with: -v
==11449== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="triangle" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="37">
      <Section name="Base cases work" filename="tests/basic.cpp" line="38">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Recursive cases work" filename="tests/basic.cpp" line="41">
        <OverallResults successes="3" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - sum

- **Points**: 3 / 3

```
==11452== Memcheck, a memory error detector
==11452== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11452== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==11452== Command: ./test -r xml "sum"
==11452== 
==11452== 
==11452== HEAP SUMMARY:
==11452==     in use at exit: 0 bytes in 0 blocks
==11452==   total heap usage: 1,772 allocs, 1,772 frees, 304,040 bytes allocated
==11452== 
==11452== All heap blocks were freed -- no leaks are possible
==11452== 
==11452== For counts of detected and suppressed errors, rerun with: -v
==11452== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="sum" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="48">
      <Section name="Did not globally/statically declare stack" filename="tests/basic.cpp" line="51">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Sum is correct" filename="tests/basic.cpp" line="61">
        <Section name="Did not make any additional stack objects at functionor function static scope" filename="tests/basic.cpp" line="64">
          <OverallResults successes="1" failures="0" expectedFailures="0"/>
        </Section>
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Stack is unchanged" filename="tests/basic.cpp" line="68">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Float sum is correct" filename="tests/basic.cpp" line="79">
        <Section name="Did not make any additional stack objects at functionor function static scope" filename="tests/basic.cpp" line="85">
          <OverallResults successes="1" failures="0" expectedFailures="0"/>
        </Section>
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Stack is unchanged" filename="tests/basic.cpp" line="89">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="7" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="7" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - isBalanced

- **Points**: 3 / 3

```
==11455== Memcheck, a memory error detector
==11455== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11455== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==11455== Command: ./test -r xml "isBalanced"
==11455== 
==11455== 
==11455== HEAP SUMMARY:
==11455==     in use at exit: 0 bytes in 0 blocks
==11455==   total heap usage: 1,754 allocs, 1,754 frees, 318,896 bytes allocated
==11455== 
==11455== All heap blocks were freed -- no leaks are possible
==11455== 
==11455== For counts of detected and suppressed errors, rerun with: -v
==11455== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="isBalanced" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="97">
      <Section name="Only used 1 stack" filename="tests/basic.cpp" line="99">
        <Section name="Did not globally/statically declare stack or queue" filename="tests/basic.cpp" line="101">
          <OverallResults successes="2" failures="0" expectedFailures="0"/>
        </Section>
        <OverallResults successes="4" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="balanced" filename="tests/basic.cpp" line="117">
        <OverallResults successes="6" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="unbalanced" filename="tests/basic.cpp" line="133">
        <OverallResults successes="6" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="16" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="16" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - scramble 17

- **Points**: 3 / 3

```
==11459== Memcheck, a memory error detector
==11459== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11459== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==11459== Command: ./test -r xml "scramble\ 17"
==11459== 
==11459== 
==11459== HEAP SUMMARY:
==11459==     in use at exit: 0 bytes in 0 blocks
==11459==   total heap usage: 1,685 allocs, 1,685 frees, 226,712 bytes allocated
==11459== 
==11459== All heap blocks were freed -- no leaks are possible
==11459== 
==11459== For counts of detected and suppressed errors, rerun with: -v
==11459== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="scramble 17" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="151">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - scramble 9

- **Points**: 3 / 3

```
==11462== Memcheck, a memory error detector
==11462== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11462== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==11462== Command: ./test -r xml "scramble\ 9"
==11462== 
==11462== 
==11462== HEAP SUMMARY:
==11462==     in use at exit: 0 bytes in 0 blocks
==11462==   total heap usage: 1,680 allocs, 1,680 frees, 226,040 bytes allocated
==11462== 
==11462== All heap blocks were freed -- no leaks are possible
==11462== 
==11462== For counts of detected and suppressed errors, rerun with: -v
==11462== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="scramble 9" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="179">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **chiaiic2** using **29166f0da09d51508f2cb663608e5da2fd08a43e** (from **February 23rd 2020, 11:59:59 pm**)
