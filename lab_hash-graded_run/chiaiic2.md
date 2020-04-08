


## Score: 150/150 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c hashes.cpp -o .objs/hashes.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c textfile.cpp -o .objs/textfile.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-dh.cpp -o .objs/tests/tests-dh.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-sc.cpp -o .objs/tests/tests-sc.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-lp.cpp -o .objs/tests/tests-lp.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/hashes.o .objs/textfile.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests-dh.o .objs/tests/tests-sc.o .objs/tests/tests-lp.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [6/6] - DH::testRemoveEASY

- **Points**: 6 / 6

```
==21174== Memcheck, a memory error detector
==21174== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21174== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21174== Command: ./test -r xml "DH::testRemoveEASY"
==21174== 
==21174== 
==21174== HEAP SUMMARY:
==21174==     in use at exit: 0 bytes in 0 blocks
==21174==   total heap usage: 1,856 allocs, 1,856 frees, 240,685 bytes allocated
==21174== 
==21174== All heap blocks were freed -- no leaks are possible
==21174== 
==21174== For counts of detected and suppressed errors, rerun with: -v
==21174== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-dh.cpp" line="12">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - DH::testRemoveHard

- **Points**: 10 / 10

```
==21220== Memcheck, a memory error detector
==21220== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21220== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21220== Command: ./test -r xml "DH::testRemoveHard"
==21220== 
==21220== 
==21220== HEAP SUMMARY:
==21220==     in use at exit: 0 bytes in 0 blocks
==21220==   total heap usage: 1,878 allocs, 1,878 frees, 241,389 bytes allocated
==21220== 
==21220== All heap blocks were freed -- no leaks are possible
==21220== 
==21220== For counts of detected and suppressed errors, rerun with: -v
==21220== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-dh.cpp" line="33">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - DH::testResizeOnce

- **Points**: 7 / 7

```
==21276== Memcheck, a memory error detector
==21276== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21276== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21276== Command: ./test -r xml "DH::testResizeOnce"
==21276== 
==21276== 
==21276== HEAP SUMMARY:
==21276==     in use at exit: 0 bytes in 0 blocks
==21276==   total heap usage: 1,974 allocs, 1,974 frees, 245,197 bytes allocated
==21276== 
==21276== All heap blocks were freed -- no leaks are possible
==21276== 
==21276== For counts of detected and suppressed errors, rerun with: -v
==21276== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-dh.cpp" line="61">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - DH::testResizeAll

- **Points**: 11 / 11

```
==21337== Memcheck, a memory error detector
==21337== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21337== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21337== Command: ./test -r xml "DH::testResizeAll"
==21337== 
==21337== 
==21337== HEAP SUMMARY:
==21337==     in use at exit: 0 bytes in 0 blocks
==21337==   total heap usage: 1,873 allocs, 1,873 frees, 238,685 bytes allocated
==21337== 
==21337== All heap blocks were freed -- no leaks are possible
==21337== 
==21337== For counts of detected and suppressed errors, rerun with: -v
==21337== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-dh.cpp" line="82">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - DH::testInsertEasy

- **Points**: 6 / 6

```
==21405== Memcheck, a memory error detector
==21405== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21405== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21405== Command: ./test -r xml "DH::testInsertEasy"
==21405== 
==21405== 
==21405== HEAP SUMMARY:
==21405==     in use at exit: 0 bytes in 0 blocks
==21405==   total heap usage: 1,855 allocs, 1,855 frees, 240,653 bytes allocated
==21405== 
==21405== All heap blocks were freed -- no leaks are possible
==21405== 
==21405== For counts of detected and suppressed errors, rerun with: -v
==21405== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-dh.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - DH::testInsertHard

- **Points**: 10 / 10

```
==21454== Memcheck, a memory error detector
==21454== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21454== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21454== Command: ./test -r xml "DH::testInsertHard"
==21454== 
==21454== 
==21454== HEAP SUMMARY:
==21454==     in use at exit: 0 bytes in 0 blocks
==21454==   total heap usage: 1,877 allocs, 1,877 frees, 241,357 bytes allocated
==21454== 
==21454== All heap blocks were freed -- no leaks are possible
==21454== 
==21454== For counts of detected and suppressed errors, rerun with: -v
==21454== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-dh.cpp" line="128">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - SC::testRemoveEASY

- **Points**: 6 / 6

```
==21526== Memcheck, a memory error detector
==21526== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21526== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21526== Command: ./test -r xml "SC::testRemoveEASY"
==21526== 
==21526== 
==21526== HEAP SUMMARY:
==21526==     in use at exit: 0 bytes in 0 blocks
==21526==   total heap usage: 1,855 allocs, 1,855 frees, 241,392 bytes allocated
==21526== 
==21526== All heap blocks were freed -- no leaks are possible
==21526== 
==21526== For counts of detected and suppressed errors, rerun with: -v
==21526== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-sc.cpp" line="12">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - SC::testRemoveHard

- **Points**: 10 / 10

```
==21614== Memcheck, a memory error detector
==21614== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21614== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21614== Command: ./test -r xml "SC::testRemoveHard"
==21614== 
==21614== 
==21614== HEAP SUMMARY:
==21614==     in use at exit: 0 bytes in 0 blocks
==21614==   total heap usage: 1,877 allocs, 1,877 frees, 242,272 bytes allocated
==21614== 
==21614== All heap blocks were freed -- no leaks are possible
==21614== 
==21614== For counts of detected and suppressed errors, rerun with: -v
==21614== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-sc.cpp" line="33">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - SC::testResizeOnce

- **Points**: 7 / 7

```
==21694== Memcheck, a memory error detector
==21694== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21694== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21694== Command: ./test -r xml "SC::testResizeOnce"
==21694== 
==21694== 
==21694== HEAP SUMMARY:
==21694==     in use at exit: 0 bytes in 0 blocks
==21694==   total heap usage: 2,009 allocs, 2,009 frees, 249,760 bytes allocated
==21694== 
==21694== All heap blocks were freed -- no leaks are possible
==21694== 
==21694== For counts of detected and suppressed errors, rerun with: -v
==21694== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-sc.cpp" line="61">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - SC::testResizeAll

- **Points**: 11 / 11

```
==21767== Memcheck, a memory error detector
==21767== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21767== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21767== Command: ./test -r xml "SC::testResizeAll"
==21767== 
==21767== 
==21767== HEAP SUMMARY:
==21767==     in use at exit: 0 bytes in 0 blocks
==21767==   total heap usage: 1,908 allocs, 1,908 frees, 242,944 bytes allocated
==21767== 
==21767== All heap blocks were freed -- no leaks are possible
==21767== 
==21767== For counts of detected and suppressed errors, rerun with: -v
==21767== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-sc.cpp" line="82">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - SC::testInsertEasy

- **Points**: 6 / 6

```
==21838== Memcheck, a memory error detector
==21838== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21838== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21838== Command: ./test -r xml "SC::testInsertEasy"
==21838== 
==21838== 
==21838== HEAP SUMMARY:
==21838==     in use at exit: 0 bytes in 0 blocks
==21838==   total heap usage: 1,854 allocs, 1,854 frees, 241,344 bytes allocated
==21838== 
==21838== All heap blocks were freed -- no leaks are possible
==21838== 
==21838== For counts of detected and suppressed errors, rerun with: -v
==21838== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-sc.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - SC::testInsertHard

- **Points**: 10 / 10

```
==21903== Memcheck, a memory error detector
==21903== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21903== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21903== Command: ./test -r xml "SC::testInsertHard"
==21903== 
==21903== 
==21903== HEAP SUMMARY:
==21903==     in use at exit: 0 bytes in 0 blocks
==21903==   total heap usage: 1,876 allocs, 1,876 frees, 242,224 bytes allocated
==21903== 
==21903== All heap blocks were freed -- no leaks are possible
==21903== 
==21903== For counts of detected and suppressed errors, rerun with: -v
==21903== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-sc.cpp" line="128">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - LP::testRemoveEASY

- **Points**: 6 / 6

```
==22051== Memcheck, a memory error detector
==22051== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22051== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==22051== Command: ./test -r xml "LP::testRemoveEASY"
==22051== 
==22051== 
==22051== HEAP SUMMARY:
==22051==     in use at exit: 0 bytes in 0 blocks
==22051==   total heap usage: 1,856 allocs, 1,856 frees, 240,685 bytes allocated
==22051== 
==22051== All heap blocks were freed -- no leaks are possible
==22051== 
==22051== For counts of detected and suppressed errors, rerun with: -v
==22051== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-lp.cpp" line="12">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - LP::testRemoveHard

- **Points**: 10 / 10

```
==22225== Memcheck, a memory error detector
==22225== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22225== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==22225== Command: ./test -r xml "LP::testRemoveHard"
==22225== 
==22225== 
==22225== HEAP SUMMARY:
==22225==     in use at exit: 0 bytes in 0 blocks
==22225==   total heap usage: 1,878 allocs, 1,878 frees, 241,389 bytes allocated
==22225== 
==22225== All heap blocks were freed -- no leaks are possible
==22225== 
==22225== For counts of detected and suppressed errors, rerun with: -v
==22225== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-lp.cpp" line="34">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - LP::testResizeOnce

- **Points**: 7 / 7

```
==22392== Memcheck, a memory error detector
==22392== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22392== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==22392== Command: ./test -r xml "LP::testResizeOnce"
==22392== 
==22392== 
==22392== HEAP SUMMARY:
==22392==     in use at exit: 0 bytes in 0 blocks
==22392==   total heap usage: 2,012 allocs, 2,012 frees, 246,413 bytes allocated
==22392== 
==22392== All heap blocks were freed -- no leaks are possible
==22392== 
==22392== For counts of detected and suppressed errors, rerun with: -v
==22392== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-lp.cpp" line="62">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - LP::testResizeAll

- **Points**: 11 / 11

```
==22692== Memcheck, a memory error detector
==22692== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22692== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==22692== Command: ./test -r xml "LP::testResizeAll"
==22692== 
==22692== 
==22692== HEAP SUMMARY:
==22692==     in use at exit: 0 bytes in 0 blocks
==22692==   total heap usage: 1,911 allocs, 1,911 frees, 239,901 bytes allocated
==22692== 
==22692== All heap blocks were freed -- no leaks are possible
==22692== 
==22692== For counts of detected and suppressed errors, rerun with: -v
==22692== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-lp.cpp" line="83">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - LP::testInsertEasy

- **Points**: 6 / 6

```
==22869== Memcheck, a memory error detector
==22869== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22869== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==22869== Command: ./test -r xml "LP::testInsertEasy"
==22869== 
==22869== 
==22869== HEAP SUMMARY:
==22869==     in use at exit: 0 bytes in 0 blocks
==22869==   total heap usage: 1,855 allocs, 1,855 frees, 240,653 bytes allocated
==22869== 
==22869== All heap blocks were freed -- no leaks are possible
==22869== 
==22869== For counts of detected and suppressed errors, rerun with: -v
==22869== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-lp.cpp" line="110">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - LP::testInsertHard

- **Points**: 10 / 10

```
==22882== Memcheck, a memory error detector
==22882== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22882== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==22882== Command: ./test -r xml "LP::testInsertHard"
==22882== 
==22882== 
==22882== HEAP SUMMARY:
==22882==     in use at exit: 0 bytes in 0 blocks
==22882==   total heap usage: 1,877 allocs, 1,877 frees, 241,357 bytes allocated
==22882== 
==22882== All heap blocks were freed -- no leaks are possible
==22882== 
==22882== For counts of detected and suppressed errors, rerun with: -v
==22882== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-lp.cpp" line="130">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **chiaiic2** using **ae3551da97fd3e58502b0e4f03216cf66ee74b73** (from **April 6th 2020, 11:59:59 pm**)
