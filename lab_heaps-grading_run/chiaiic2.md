


## Score: 20/20 (100.00%)


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


### ✓ - [1/1] - test_heapify_down_1

- **Points**: 1 / 1

```
==1804== Memcheck, a memory error detector
==1804== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1804== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1804== Command: ./test -r xml "test_heapify_down_1"
==1804== 
==1804== 
==1804== HEAP SUMMARY:
==1804==     in use at exit: 0 bytes in 0 blocks
==1804==   total heap usage: 1,868 allocs, 1,868 frees, 236,956 bytes allocated
==1804== 
==1804== All heap blocks were freed -- no leaks are possible
==1804== 
==1804== For counts of detected and suppressed errors, rerun with: -v
==1804== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_1" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="67">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_2

- **Points**: 1 / 1

```
==1808== Memcheck, a memory error detector
==1808== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1808== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1808== Command: ./test -r xml "test_heapify_down_2"
==1808== 
==1808== 
==1808== HEAP SUMMARY:
==1808==     in use at exit: 0 bytes in 0 blocks
==1808==   total heap usage: 1,869 allocs, 1,869 frees, 237,012 bytes allocated
==1808== 
==1808== All heap blocks were freed -- no leaks are possible
==1808== 
==1808== For counts of detected and suppressed errors, rerun with: -v
==1808== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_2" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="73">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="6" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="6" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_3

- **Points**: 1 / 1

```
==1811== Memcheck, a memory error detector
==1811== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1811== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1811== Command: ./test -r xml "test_heapify_down_3"
==1811== 
==1811== 
==1811== HEAP SUMMARY:
==1811==     in use at exit: 0 bytes in 0 blocks
==1811==   total heap usage: 1,870 allocs, 1,870 frees, 237,116 bytes allocated
==1811== 
==1811== All heap blocks were freed -- no leaks are possible
==1811== 
==1811== For counts of detected and suppressed errors, rerun with: -v
==1811== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_3" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="79">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="11" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="11" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_4

- **Points**: 1 / 1

```
==1814== Memcheck, a memory error detector
==1814== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1814== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1814== Command: ./test -r xml "test_heapify_down_4"
==1814== 
==1814== 
==1814== HEAP SUMMARY:
==1814==     in use at exit: 0 bytes in 0 blocks
==1814==   total heap usage: 1,870 allocs, 1,870 frees, 237,148 bytes allocated
==1814== 
==1814== All heap blocks were freed -- no leaks are possible
==1814== 
==1814== For counts of detected and suppressed errors, rerun with: -v
==1814== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_4" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="85">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_5

- **Points**: 1 / 1

```
==1817== Memcheck, a memory error detector
==1817== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1817== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1817== Command: ./test -r xml "test_heapify_down_5"
==1817== 
==1817== 
==1817== HEAP SUMMARY:
==1817==     in use at exit: 0 bytes in 0 blocks
==1817==   total heap usage: 1,873 allocs, 1,873 frees, 238,452 bytes allocated
==1817== 
==1817== All heap blocks were freed -- no leaks are possible
==1817== 
==1817== For counts of detected and suppressed errors, rerun with: -v
==1817== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_5" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="91">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="66" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="66" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_6

- **Points**: 1 / 1

```
==1820== Memcheck, a memory error detector
==1820== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1820== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1820== Command: ./test -r xml "test_heapify_down_6"
==1820== 
==1820== 
==1820== HEAP SUMMARY:
==1820==     in use at exit: 0 bytes in 0 blocks
==1820==   total heap usage: 1,869 allocs, 1,869 frees, 237,456 bytes allocated
==1820== 
==1820== All heap blocks were freed -- no leaks are possible
==1820== 
==1820== For counts of detected and suppressed errors, rerun with: -v
==1820== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_6" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="100">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_7

- **Points**: 1 / 1

```
==1823== Memcheck, a memory error detector
==1823== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1823== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1823== Command: ./test -r xml "test_heapify_down_7"
==1823== 
==1823== 
==1823== HEAP SUMMARY:
==1823==     in use at exit: 0 bytes in 0 blocks
==1823==   total heap usage: 1,870 allocs, 1,870 frees, 238,128 bytes allocated
==1823== 
==1823== All heap blocks were freed -- no leaks are possible
==1823== 
==1823== For counts of detected and suppressed errors, rerun with: -v
==1823== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_7" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="106">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="10" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="10" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_8

- **Points**: 1 / 1

```
==1826== Memcheck, a memory error detector
==1826== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1826== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1826== Command: ./test -r xml "test_heapify_down_8"
==1826== 
==1826== 
==1826== HEAP SUMMARY:
==1826==     in use at exit: 0 bytes in 0 blocks
==1826==   total heap usage: 1,870 allocs, 1,870 frees, 238,368 bytes allocated
==1826== 
==1826== All heap blocks were freed -- no leaks are possible
==1826== 
==1826== For counts of detected and suppressed errors, rerun with: -v
==1826== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_8" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="112">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_9

- **Points**: 1 / 1

```
==1829== Memcheck, a memory error detector
==1829== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1829== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1829== Command: ./test -r xml "test_heapify_down_9"
==1829== 
==1829== 
==1829== HEAP SUMMARY:
==1829==     in use at exit: 0 bytes in 0 blocks
==1829==   total heap usage: 1,871 allocs, 1,871 frees, 239,424 bytes allocated
==1829== 
==1829== All heap blocks were freed -- no leaks are possible
==1829== 
==1829== For counts of detected and suppressed errors, rerun with: -v
==1829== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_9" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="118">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="21" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="21" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_10

- **Points**: 1 / 1

```
==1833== Memcheck, a memory error detector
==1833== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1833== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1833== Command: ./test -r xml "test_heapify_down_10"
==1833== 
==1833== 
==1833== HEAP SUMMARY:
==1833==     in use at exit: 0 bytes in 0 blocks
==1833==   total heap usage: 1,871 allocs, 1,871 frees, 239,856 bytes allocated
==1833== 
==1833== All heap blocks were freed -- no leaks are possible
==1833== 
==1833== For counts of detected and suppressed errors, rerun with: -v
==1833== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_10" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="124">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="30" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="30" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_1

- **Points**: 1 / 1

```
==1850== Memcheck, a memory error detector
==1850== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1850== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1850== Command: ./test -r xml "test_build_heap_1"
==1850== 
==1850== 
==1850== HEAP SUMMARY:
==1850==     in use at exit: 0 bytes in 0 blocks
==1850==   total heap usage: 1,871 allocs, 1,871 frees, 236,984 bytes allocated
==1850== 
==1850== All heap blocks were freed -- no leaks are possible
==1850== 
==1850== For counts of detected and suppressed errors, rerun with: -v
==1850== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_1" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="130">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_2

- **Points**: 1 / 1

```
==1853== Memcheck, a memory error detector
==1853== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1853== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1853== Command: ./test -r xml "test_build_heap_2"
==1853== 
==1853== 
==1853== HEAP SUMMARY:
==1853==     in use at exit: 0 bytes in 0 blocks
==1853==   total heap usage: 1,874 allocs, 1,874 frees, 237,096 bytes allocated
==1853== 
==1853== All heap blocks were freed -- no leaks are possible
==1853== 
==1853== For counts of detected and suppressed errors, rerun with: -v
==1853== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_2" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="141">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_3

- **Points**: 1 / 1

```
==1856== Memcheck, a memory error detector
==1856== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1856== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1856== Command: ./test -r xml "test_build_heap_3"
==1856== 
==1856== 
==1856== HEAP SUMMARY:
==1856==     in use at exit: 0 bytes in 0 blocks
==1856==   total heap usage: 1,876 allocs, 1,876 frees, 237,308 bytes allocated
==1856== 
==1856== All heap blocks were freed -- no leaks are possible
==1856== 
==1856== For counts of detected and suppressed errors, rerun with: -v
==1856== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_3" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="153">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_4

- **Points**: 1 / 1

```
==1859== Memcheck, a memory error detector
==1859== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1859== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1859== Command: ./test -r xml "test_build_heap_4"
==1859== 
==1859== 
==1859== HEAP SUMMARY:
==1859==     in use at exit: 0 bytes in 0 blocks
==1859==   total heap usage: 1,878 allocs, 1,878 frees, 237,612 bytes allocated
==1859== 
==1859== All heap blocks were freed -- no leaks are possible
==1859== 
==1859== For counts of detected and suppressed errors, rerun with: -v
==1859== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_4" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="165">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_5

- **Points**: 1 / 1

```
==1863== Memcheck, a memory error detector
==1863== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1863== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1863== Command: ./test -r xml "test_build_heap_5"
==1863== 
==1863== 
==1863== HEAP SUMMARY:
==1863==     in use at exit: 0 bytes in 0 blocks
==1863==   total heap usage: 1,882 allocs, 1,882 frees, 239,736 bytes allocated
==1863== 
==1863== All heap blocks were freed -- no leaks are possible
==1863== 
==1863== For counts of detected and suppressed errors, rerun with: -v
==1863== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_5" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="177">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_1

- **Points**: 1 / 1

```
==1866== Memcheck, a memory error detector
==1866== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1866== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1866== Command: ./test -r xml "test_update_elem_1"
==1866== 
==1866== 
==1866== HEAP SUMMARY:
==1866==     in use at exit: 0 bytes in 0 blocks
==1866==   total heap usage: 1,869 allocs, 1,869 frees, 236,968 bytes allocated
==1866== 
==1866== All heap blocks were freed -- no leaks are possible
==1866== 
==1866== For counts of detected and suppressed errors, rerun with: -v
==1866== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_1" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="192">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_2

- **Points**: 1 / 1

```
==1870== Memcheck, a memory error detector
==1870== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1870== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1870== Command: ./test -r xml "test_update_elem_2"
==1870== 
==1870== 
==1870== HEAP SUMMARY:
==1870==     in use at exit: 0 bytes in 0 blocks
==1870==   total heap usage: 1,870 allocs, 1,870 frees, 237,036 bytes allocated
==1870== 
==1870== All heap blocks were freed -- no leaks are possible
==1870== 
==1870== For counts of detected and suppressed errors, rerun with: -v
==1870== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_2" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="198">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="6" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="6" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_3

- **Points**: 1 / 1

```
==1874== Memcheck, a memory error detector
==1874== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1874== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1874== Command: ./test -r xml "test_update_elem_3"
==1874== 
==1874== 
==1874== HEAP SUMMARY:
==1874==     in use at exit: 0 bytes in 0 blocks
==1874==   total heap usage: 1,871 allocs, 1,871 frees, 237,160 bytes allocated
==1874== 
==1874== All heap blocks were freed -- no leaks are possible
==1874== 
==1874== For counts of detected and suppressed errors, rerun with: -v
==1874== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_3" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="204">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="11" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="11" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_4

- **Points**: 1 / 1

```
==1878== Memcheck, a memory error detector
==1878== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1878== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1878== Command: ./test -r xml "test_update_elem_4"
==1878== 
==1878== 
==1878== HEAP SUMMARY:
==1878==     in use at exit: 0 bytes in 0 blocks
==1878==   total heap usage: 1,871 allocs, 1,871 frees, 237,208 bytes allocated
==1878== 
==1878== All heap blocks were freed -- no leaks are possible
==1878== 
==1878== For counts of detected and suppressed errors, rerun with: -v
==1878== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_4" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="210">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_5

- **Points**: 1 / 1

```
==1889== Memcheck, a memory error detector
==1889== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1889== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1889== Command: ./test -r xml "test_update_elem_5"
==1889== 
==1889== 
==1889== HEAP SUMMARY:
==1889==     in use at exit: 0 bytes in 0 blocks
==1889==   total heap usage: 1,874 allocs, 1,874 frees, 238,716 bytes allocated
==1889== 
==1889== All heap blocks were freed -- no leaks are possible
==1889== 
==1889== For counts of detected and suppressed errors, rerun with: -v
==1889== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_5" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="216">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="66" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="66" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **chiaiic2** using **f4c7d3ae760747b17c55c7f9594fded59cc58f2f** (from **April 13th 2020, 11:59:59 pm**)
