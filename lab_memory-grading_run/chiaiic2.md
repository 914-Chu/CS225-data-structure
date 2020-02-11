


## Score: 100/100 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c letter.cpp -o .objs/letter.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c room.cpp -o .objs/room.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c allocator.cpp -o .objs/allocator.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c fileio.cpp -o .objs/fileio.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/letter.o .objs/room.o .objs/allocator.o .objs/fileio.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [5/5] - Test the constructor (valgrind)

- **Points**: 5 / 5

```
==1272== Memcheck, a memory error detector
==1272== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1272== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1272== Command: ./test -r xml "Test\ the\ constructor\ (valgrind)"
==1272== 
==1272== 
==1272== HEAP SUMMARY:
==1272==     in use at exit: 0 bytes in 0 blocks
==1272==   total heap usage: 2,492 allocs, 2,492 frees, 278,832 bytes allocated
==1272== 
==1272== All heap blocks were freed -- no leaks are possible
==1272== 
==1272== For counts of detected and suppressed errors, rerun with: -v
==1272== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test the constructor (valgrind)" tags="[valgrind][weight=5]" filename="tests/tests.cpp" line="10">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - Test allocate() (valgrind)

- **Points**: 5 / 5

```
==1275== Memcheck, a memory error detector
==1275== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1275== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1275== Command: ./test -r xml "Test\ allocate()\ (valgrind)"
==1275== 
==1275== 
==1275== HEAP SUMMARY:
==1275==     in use at exit: 0 bytes in 0 blocks
==1275==   total heap usage: 2,492 allocs, 2,492 frees, 276,640 bytes allocated
==1275== 
==1275== All heap blocks were freed -- no leaks are possible
==1275== 
==1275== For counts of detected and suppressed errors, rerun with: -v
==1275== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test allocate() (valgrind)" tags="[valgrind][weight=5]" filename="tests/tests.cpp" line="17">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [20/20] - Test printRooms() (valgrind)

- **Points**: 20 / 20

```
==1278== Memcheck, a memory error detector
==1278== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1278== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1278== Command: ./test -r xml "Test\ printRooms()\ (valgrind)"
==1278== 
==1278== 
==1278== HEAP SUMMARY:
==1278==     in use at exit: 0 bytes in 0 blocks
==1278==   total heap usage: 2,496 allocs, 2,496 frees, 277,360 bytes allocated
==1278== 
==1278== All heap blocks were freed -- no leaks are possible
==1278== 
==1278== For counts of detected and suppressed errors, rerun with: -v
==1278== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test printRooms() (valgrind)" tags="[valgrind][weight=20]" filename="tests/tests.cpp" line="25">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [30/30] - Test printRooms() for overall output

- **Points**: 30 / 30





### ✓ - [40/40] - Test printRooms() for individual output

- **Points**: 40 / 40





---

This report was generated for **chiaiic2** using **335fc681be6ee56d25f73c43fae515a837fc2d79** (from **February 10th 2020, 12:00:00 am**)
