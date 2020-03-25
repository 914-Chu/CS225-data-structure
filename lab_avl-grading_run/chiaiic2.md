


## Score: 50/50 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c coloredout.cpp -o .objs/coloredout.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/coloredout.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [10/10] - test_find

- **Points**: 10 / 10

```
==750== Memcheck, a memory error detector
==750== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==750== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==750== Command: ./test -r xml "test_find"
==750== 
==750== 
==750== HEAP SUMMARY:
==750==     in use at exit: 0 bytes in 0 blocks
==750==   total heap usage: 1,667 allocs, 1,667 frees, 216,640 bytes allocated
==750== 
==750== All heap blocks were freed -- no leaks are possible
==750== 
==750== For counts of detected and suppressed errors, rerun with: -v
==750== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_find" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="30">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="5" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="5" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_insert_small

- **Points**: 5 / 5





### ✓ - [10/10] - test_insert_find

- **Points**: 10 / 10





### ✓ - [10/10] - test_insert_big

- **Points**: 10 / 10

```
==763== Memcheck, a memory error detector
==763== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==763== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==763== Command: ./test -r xml "test_insert_big"
==763== 
==763== 
==763== HEAP SUMMARY:
==763==     in use at exit: 0 bytes in 0 blocks
==763==   total heap usage: 1,693 allocs, 1,693 frees, 218,128 bytes allocated
==763== 
==763== All heap blocks were freed -- no leaks are possible
==763== 
==763== For counts of detected and suppressed errors, rerun with: -v
==763== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_insert_big" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="76">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_remove_small

- **Points**: 5 / 5





### ✓ - [10/10] - test_remove_big

- **Points**: 10 / 10

```
==768== Memcheck, a memory error detector
==768== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==768== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==768== Command: ./test -r xml "test_remove_big"
==768== 
==768== 
==768== HEAP SUMMARY:
==768==     in use at exit: 0 bytes in 0 blocks
==768==   total heap usage: 1,706 allocs, 1,706 frees, 219,624 bytes allocated
==768== 
==768== All heap blocks were freed -- no leaks are possible
==768== 
==768== For counts of detected and suppressed errors, rerun with: -v
==768== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_remove_big" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="120">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **chiaiic2** using **787a1dd7b970df900242c1a0b1b4f21fa40f610c** (from **March 24th 2020, 11:59:59 pm**)
