


## Score: 55/55 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [5/5] - test_insertion_idx_emp

- **Points**: 5 / 5





### ✓ - [5/5] - test_insertion_idx_small

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree3_small

- **Points**: 5 / 5

```
==31536== Memcheck, a memory error detector
==31536== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31536== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==31536== Command: ./test -r xml "test_btree3_small"
==31536== 
==31536== 
==31536== HEAP SUMMARY:
==31536==     in use at exit: 0 bytes in 0 blocks
==31536==   total heap usage: 1,794 allocs, 1,794 frees, 226,416 bytes allocated
==31536== 
==31536== All heap blocks were freed -- no leaks are possible
==31536== 
==31536== For counts of detected and suppressed errors, rerun with: -v
==31536== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_btree3_small" tags="[timeout=8000][valgrind][weight=5]" filename="tests/tests.cpp" line="93">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="10" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="10" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_btree3_large_seq

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree3_large_rand

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree64_large_seq

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree64_large_rand

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree128_med_rand

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree256_med_rand

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree12_double

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree12_strings

- **Points**: 5 / 5





---

This report was generated for **chiaiic2** using **0558e8374eb76d4924042bd1d0087d26a8638c5a** (from **March 29th 2020, 11:59:59 pm**)
