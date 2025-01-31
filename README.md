Preparing framework
✔ Executing: norminette
✔ Executing: make fclean all (no bonus)
ℹ Executing: libft-war-machine (https://github.com/y3ll0w42/libft-war-machine)
--------------------------------------------------------------------------------
|                              COMPILING LIBFT                                 |
--------------------------------------------------------------------------------
rules:
all        $(NAME)       fclean       re           clean       bonus     libft.a
ok         ok            fail         ok           ok          missing   found

FUNCTION         TESTS                RESULT
ft_isalpha       ✓✓✓✓✓✓✓              OK
ft_isdigit       ✓✓✓✓✓✓✓              OK
ft_isalnum       ✓✓✓✓✓✓✓              OK
ft_isascii       ✓✓✓✓✓✓✓✓             OK
ft_isprint       ✓✓✓✓✓✓✓              OK
ft_strlen        ✓✓✓✓✓✓               OK
ft_memset        ✓✓✓✓                 OK
ft_bzero         ✓✓                   OK
ft_memcpy        ✓✓✓                  OK
ft_memmove       ✓✓✓✓✓                OK
ft_strlcpy       ✓✓✓✓✓                OK
ft_strlcat       ✓✓✓✗✓✓✓✓✗            KO
ft_toupper       ✓✓✓✓✓✓✓              OK
ft_tolower       ✓✓✓✓✓✓✓              OK
ft_strchr        ✓✓✓✓✗✗               KO
ft_strrchr       ✓✓✓✓✓✗✗✗             KO
ft_strncmp       ✓✓✓✓✓✓✓✓✓✓✗          KO
ft_memchr        ✓✓✓✓✓✓               OK
ft_memcmp        ✓✓✓✓✓✓✓✓✓            OK
ft_strnstr       ✓✓✓✓✓✓✓✓✓✓           OK
ft_atoi          ✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓  OK
ft_calloc        ✓                    OK
ft_strdup        ✓                    OK
ft_substr        ✓✓✓✓✓                OK
ft_strjoin       ✓✓✓✓                 OK
ft_strtrim       ✓✓✓✓✓                OK
ft_split         ✓✓✓✓✓✗               KO
ft_itoa          ✓✓✓✓✓✓✓✓✗✓           KO
ft_strmapi       ✓                    OK
ft_striteri      ✓                    OK
ft_putchar_fd    ✓✓✓✓✓✓✓              OK
ft_putstr_fd     ✓✓✓✓                 OK
ft_putendl_fd    ✓✓✓✓                 OK
ft_putnbr_fd     ✗✗✗✗✗✗✗✗✗            KO

Abort: A  Bus error: B  Segmentation fault: S  Timeout: T

More information in: /home/dierojas/francinette/temp/libft/war-machine/deepthought

Errors in strlcat: /home/dierojas/francinette/temp/libft/war-machine/tests/Part1_functions/ft_strlcat
Test 4:
    dest[14] = 'a';
    ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));
    write(1, "\n", 1);
    write(1, dest, 15);
Expected (cat -e test04.output):
32$
rrrrrrlorem ip^@
Your result (cat -e user_output_test04):
41$
rrrrrr^@^@^@^@^@^@^@^@a
Test 9:
    memset(dest, 'r', 14);
    ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));
    write(1, "\n", 1);
    write(1, dest, 15);
Expected (cat -e test09.output):
40$
rrrrrrrrrrrrrr^@
Your result (cat -e user_output_test09):
41$
rrrrrrrrrrrrrr^@
Errors in strchr: /home/dierojas/francinette/temp/libft/war-machine/tests/Part1_functions/ft_strchr
Test 5:
    if (!(str = ft_strchr(str2, '\0')))
        ft_print_result("NULL");
    else
    {
        ft_print_result(str);
        if (str != str2 + 7)
            ft_print_result("\nReturn value is false");
    }
Expected (cat -e test05.output):

Your result (cat -e user_output_test05):
NULL
Test 6:
    char    str3[] = "";
    if (!(str = ft_strchr(str3, '\0')))
        ft_print_result("NULL");
    else
    {
        ft_print_result(str);
        if (str != str3)
            ft_print_result("\nReturn value is false");
    }
Expected (cat -e test06.output):

Your result (cat -e user_output_test06):
...

File too large. To see full report open: /home/dierojas/francinette/temp/libft/war-machine/errors.log

✔ Compiling tests: libftTester (https://github.com/Tripouille/libftTester)
ℹ Testing:
ft_isalpha	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 
ft_isdigit	: 1.OK 2.OK 3.OK 4.OK 
ft_isalnum	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 
ft_isascii	: 1.OK 2.OK 3.OK 4.OK 
ft_isprint	: 1.OK 2.OK 3.OK 4.OK 
ft_strlen	: 1.OK 2.OK 
ft_memset	: 1.OK 2.OK 
ft_bzero	: 1.OK 2.OK 3.OK 
ft_memcpy	: 1.OK 2.OK 3.OK 
ft_memmove	: 1.OK 2.OK 3.OK 4.OK 
ft_strlcpy	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 
ft_strlcat	: 1.OK 2.OK 3.OK 4.KO 5.OK 6.OK 7.KO 8.OK 9.OK 10.OK 11.OK 12.OK 13.KO 14.KO 15.KO 16.OK 17.OK 
ft_toupper	: 1.OK 2.OK 3.OK 4.OK 
ft_tolower	: 1.OK 2.OK 3.OK 4.OK 
ft_strchr	: 1.OK 2.OK 3.OK 4.KO 5.OK 
ft_strrchr	: 1.OK 2.OK 3.OK 4.OK 5.KO 6.KO 7.OK 8.KO 
ft_strncmp	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14.OK 15.OK 16.OK 
ft_memchr	: 1.OK 2.OK 3.OK 4.OK 5.OK 
ft_memcmp	: 1.OK 2.OK 3.OK 4.OK 5.OK 
ft_strnstr	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14.OK 
ft_atoi		: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14.OK 15.OK 16.OK 17.OK 
ft_calloc	: 1.OK 2.MOK 
ft_strdup	: 1.OK 2.MOK 3.OK 4.MOK 
ft_substr	: 1.OK 2.MKO 3.OK 4.MOK 5.KO 6.MKO 7.OK 8.MKO 9.OK 10.MKO 11.OK 12.MOK 13.OK 14.MOK 15.OK 16.MOK 
ft_strjoin	: 1.OK 2.MOK 3.OK 4.MOK 5.OK 6.MOK 7.OK 8.MOK 
ft_strtrim	: 1.OK 2.MOK 3.OK 4.MOK 5.OK 6.MOK 7.OK 8.MOK 9.OK 10.MOK 11.OK 12.MOK 13.OK 14.MOK 15.OK 16.MOK 
ft_split	: 1.MOK 2.OK 3.MOK 4.OK 5.MOK 6.OK 7.OK 8.OK 9.OK 10.SIGSEGV
ft_itoa		: 1.OK 2.MOK 3.KO 4.MKO 5.OK 6.MOK 7.OK 8.MOK 9.OK 10.MOK 11.OK 12.MOK 
ft_strmapi	: 1.OK 2.MOK 3.OK 4.MOK 
ft_striteri	: 1.OK 2.OK 3.OK 
ft_putchar_fd	: 1.OK 
ft_putstr_fd	: 1.OK 
ft_putendl_fd	: 1.OK 
ft_putnbr_fd	: 1.KO 2.KO 3.KO 4.OK 5.KO 

MKO: test about your malloc size (this shouldn't be tested by moulinette)

Errors in:

For /home/dierojas/francinette/tests/libft/Tripouille/tests/ft_strlcat_test.cpp:
KO  26: 	/* 4 */ check(ft_strlcat(dest, src, 6) == 13 && !strcmp(dest, "BBBBA")); showLeaks();
KO  32: 	/* 7 */ check(ft_strlcat(dest, src, 1) == strlen(src) && !strcmp(dest, "")); showLeaks();
KO  44: 	/* 13 */ check(ft_strlcat(dest, "123", 1) == 3 && !strcmp(dest, "")); showLeaks();
KO  46: 	/* 14 */ check(ft_strlcat(dest, "123", 2) == 3 && !strcmp(dest, "1")); showLeaks();
KO  48: 	/* 15 */ check(ft_strlcat(dest, "123", 3) == 3 && !strcmp(dest, "12")); showLeaks();

For /home/dierojas/francinette/tests/libft/Tripouille/tests/ft_strchr_test.cpp:
KO  21: 	/* 4 */ check(ft_strchr(s, 0) == s + strlen(s)); showLeaks();

For /home/dierojas/francinette/tests/libft/Tripouille/tests/ft_strrchr_test.cpp:
KO  24: 	/* 5 */ check(ft_strrchr(s, 0) == s + strlen(s)); showLeaks();
KO  25: 	/* 6 */ check(ft_strrchr(s, 't' + 256) == s); showLeaks();
KO  28: 	/* 8 */ check(ft_strrchr(s3, 0) == s3); showLeaks();

For /home/dierojas/francinette/tests/libft/Tripouille/tests/ft_substr_test.cpp:
MKO 20: 	/* 2 */ mcheck(s, strlen("tripouille") + 1); free(s); showLeaks();
KO  27: 	/* 5 */ check(!strcmp(s, ""));
MKO 28: 	/* 6 */ mcheck(s, 1); free(s); showLeaks();
MKO 33: 	/* 8 */ mcheck(s, 1); free(s); free(str); showLeaks();
MKO 38: 	/* 10  mbueno-g */ mcheck(s, 2); free(s); free(str); showLeaks();

For /home/dierojas/francinette/tests/libft/Tripouille/tests/ft_split_test.cpp:
SIGSEGV 48: 	/* 10 */ check(tab[0] == NULL); delete invalidReadCheck;

For /home/dierojas/francinette/tests/libft/Tripouille/tests/ft_itoa_test.cpp:
KO  24: 	/* 3 */ check(!strcmp(s, to_string(INT_MIN).c_str()));
MKO 25: 	/* 4 */ mcheck(s, strlen(to_string(INT_MIN).c_str()) + 1); free(s); showLeaks();

For /home/dierojas/francinette/tests/libft/Tripouille/tests/ft_putnbr_fd_test.cpp:
KO  26: 	/* 1 */ check(!strcmp(s, "0")); showLeaks();
KO  33: 	/* 2 */ check(!strcmp(s, "10")); showLeaks();
KO  40: 	/* 3 */ check(!strcmp(s, to_string(INT_MAX).c_str())); showLeaks();
KO  54: 	/* 5 ipenas */ check(!strcmp(s, "-42")); showLeaks();

✔ Compiling tests: libft-unit-test (https://github.com/alelievr/libft-unit-test)
ℹ Testing:
ft_isalpha      : [OK] 
ft_isdigit      : [OK] 
ft_isalnum      : [OK] 
ft_isascii      : [OK] 
ft_isprint      : [OK] 
ft_strlen       : [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_memset       : [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_bzero        : [OK] [OK] [OK] [OK] 
ft_memcpy       : [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [CRASH] 
[crash]: your memcpy does not behave well with NULL as both params with size

ft_memmove      : [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [CRASH] [OK] 
[crash]: your memmove does not well with NULL as both parameters and size

ft_strlcpy      : [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_strlcat      : [OK] [FAILED] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [FAILED] [OK] [OK] 
[fail]: your strlcat does not work with basic input
[fail]: your strlcat return value is false

ft_toupper      : [OK] 
ft_tolower      : [OK] 
ft_strchr       : [OK] [OK] [OK] [OK] [OK] [OK] [FAILED] [OK] [OK] [NO CRASH] 
[fail]: your strchr does not work with \0
[no crash]: your strchr does not segfault with NULL parameter

ft_strrchr      : [OK] [OK] [OK] [OK] [FAILED] [OK] [CRASH] [NO CRASH] 
[fail]: your strrchr does not work with \0
[crash]: your strrchr crash because it read too many bytes or attempt to write on s !
[no crash]: your strrchr does not segfault when a null parameter is sent

ft_strncmp      : [OK] [OK] [OK] [OK] [OK] [OK] [FAILED] [OK] [OK] [FAILED] [OK] [OK] [OK] [OK] 
[fail]: your strncmp does not cast in unsigned char the diff
[fail]: your strncmp does not work with non ascii chars

ft_memchr       : [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_memcmp       : [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_strnstr      : [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_atoi         : [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_calloc       : [OK] [OK] [OK] [OK] [OK] 
ft_strdup       : [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_substr       : [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [FAILED] 
[fail]: your substr does not work when start >= ft_strlen(s)

ft_strjoin      : [OK] [OK] [OK] [OK] [OK] 
ft_strtrim      : [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_split        : [OK] [OK] [OK] [OK] [OK] [OK] [CRASH] [OK] [OK] [OK] 
[crash]: your split will segfault in case --> *str="\0aa\0bbb" c='\0'

ft_itoa         : [OK] [OK] [OK] [FAILED] [OK] [OK] [OK] [OK] [OK] 
[fail]: your itoa does not work with min int

ft_strmapi      : [OK] [OK] [OK] [OK] [OK] 
ft_striteri     : [OK] [OK] 
ft_putchar_fd   : [OK] [OK] 
ft_putstr_fd    : [OK] [OK] 
ft_putendl_fd   : [OK] [OK] 
ft_putnbr_fd    : [FAILED] [FAILED] [OK] [FAILED] [OK] 
[fail]: your putnbr_fd does not work with zero number
[fail]: your putnbr_fd does not work with int max
[fail]: your putnbr_fd does not work with random numbers


[crash]: your memcpy does not behave well with NULL as both params with size
 Test code:
 	ft_memcpy(((void*)0), ((void*)0), 3);
 
 
 [crash]: your memmove does not well with NULL as both parameters and size
 Test code:
 	ft_memmove(((void*)0), ((void*)0), 5);
 
 
 [fail]: your strlcat does not work with basic input
 Test code:
 	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
 	char buff1[0xF00] = "there is no stars in the sky";
 	char buff2[0xF00] = "there is no stars in the sky";
 	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
 	size_t r1 = strlcat(buff1, str, max);
 	size_t r2 = ft_strlcat(buff2, str, max);
 
 	if (r1 != r2)
 		exit(TEST_FAILED);
 	char s1[4] = "";
 	char s2[4] = "";
 	r1 = strlcat(s1, "thx to ntoniolo for this test !", 4)
 		;
 	r2 = ft_strlcat(s2, "thx to ntoniolo for this test !", 4)
 		;
 	if (r1 != r2)
 		exit(TEST_FAILED);
 	exit(TEST_SUCCESS);
 
 Diffs:
      strlcat: |42|
   ft_strlcat: |47|
 
 [fail]: your strlcat return value is false
 Test code:
 	char *src = "aaa";
 	char dst1[20];
 	char dst2[20];
 	int ret1;
 	int ret2;
 
 	memset(dst1, 'B', sizeof(dst1));
 	memset(dst2, 'B', sizeof(dst2));
 	strlcat(dst1, src, 20);
 	strlcat(dst1, src, 20);
 	ret1 = strlcat(dst1, src, 20);
 	ft_strlcat(dst2, src, 20);
 	ft_strlcat(dst2, src, 20);
...

File too large. To see full report open: /home/dierojas/francinette/temp/libft/alelievr/result.log

✔ Compiling tests: fsoares (my own)
ℹ Testing:
ft_isalpha      : OK
ft_isdigit      : OK
ft_isalnum      : OK
ft_isascii      : OK
ft_isprint      : OK
ft_strlen       : OK
ft_memset       : OK
ft_bzero        : OK
ft_memcpy       : OK
ft_memmove      : OK
ft_strlcpy      : OK
ft_strlcat      : KO
ft_toupper      : OK
ft_tolower      : OK
ft_strchr       : KO
ft_strrchr      : KO
ft_strncmp      : KO
ft_memchr       : OK
ft_memcmp       : OK
ft_strnstr      : OK
ft_atoi         : OK
ft_calloc       : OK
ft_strdup       : OK
ft_substr       : 4.KO Segfault
ft_strjoin      : OK
ft_strtrim      : OK
ft_split        : 5.KO Segfault
ft_itoa         : KO
ft_strmapi      : OK
ft_striteri     : OK
ft_putchar_fd   : OK
ft_putstr_fd    : OK
ft_putendl_fd   : OK
ft_putnbr_fd    : KO

Errors found:
For ft_strlcat, in /home/dierojas/francinette/tests/libft/fsoares/test_strlcat.c:

Error in test 6: ft_strlcat("pqrstuvwxyz", "abcd", 5): expected: 9, yours: 15
Error in test 7: ft_strlcat("pqrstuvwxyz", "abcd", 6): expected: 10, yours: 15
Error in test 8: ft_strlcat("pqrstuvwxyz", "abcd", 7): expected: 11, yours: 15

For ft_strchr, in /home/dierojas/francinette/tests/libft/fsoares/test_strchr.c:

Error in test 3: ft_strchr(0x5bc69ab26020: "teste", 0: '\0'): expected: 0x5bc69ab26025, yours: (nil)
Error in test 6: ft_strchr(0x5bc69ab26020: "teste", 1024: '\0'): expected: 0x5bc69ab26025, yours: (nil)

For ft_strrchr, in /home/dierojas/francinette/tests/libft/fsoares/test_strrchr.c:

Error in test 2: ft_strrchr(0x61ce53ffe021: "teste", 0: '\0'): expected: 0x61ce53ffe026, yours: (nil)
Error in test 5: ft_strrchr(0x61ce53ffe021: "teste", 1125: 'e'): expected: 0x61ce53ffe025, yours: (nil)
Error in test 6: ft_strrchr(0x61ce53ffe021: "teste", 1024: '\0'): expected: 0x61ce53ffe026, yours: (nil)

For ft_strncmp, in /home/dierojas/francinette/tests/libft/fsoares/test_strncmp.c:

Error in test 19: ft_strncmp("abcdef", "abc\375xx", 5): 
expected sign: -1 (value: -153), yours sign: 1 (value: 103)


For ft_substr, in /home/dierojas/francinette/tests/libft/fsoares/test_substr.c:

Error in test 3: ft_substr("", 1, 1): expected: "", got: "h"
Error in test 3: ft_substr("", 1, 1): 
Memory leak: 0x5968b21b48b0 - 4096 bytes
You failed to free the memory allocated at:
Error in test 4: ft_substr("hola", 4294967295, 0): Segmentation fault!
For ft_split, in /home/dierojas/francinette/tests/libft/fsoares/test_split.c:

Error in test 5: ft_split("", 97:'a'): Segmentation fault!
For ft_itoa, in /home/dierojas/francinette/tests/libft/fsoares/test_itoa.c:

Error in test 5: ft_itoa(-2147483648): expected: "-2147483648", got: "-\0212147483648"
Error in test 5: ft_itoa(-2147483648): 
Memory leak: 0x65095435f8b0 - 4096 bytes
You failed to free the memory allocated at:

For ft_putnbr_fd, in /home/dierojas/francinette/tests/libft/fsoares/test_putnbr_fd.c:

Error in test 5: ft_putnbr_fd(-2147483648, fd: 4): expected: "0\n10000043\n-10000043\n2147483647\n-2147483648\n", content of 
the file: "\n\n\n\n-2147483648"



Summary: no bonus

Failed tests: ft_itoa, ft_substr, strlcat, strncmp, putnbr_fd, memcpy, itoa, ft_strchr, ft_putnbr_fd, strchr, ft_strrchr, memmove, split, substr, ft_split, ft_strlcat, strrchr

Passed tests: isalpha, isdigit, isalnum, isascii, isprint, strlen, memset, bzero, strlcpy, toupper, tolower, memchr, memcmp, strnstr, atoi, calloc, strdup, strjoin, strtrim, strmapi, striteri, putchar_fd, putstr_fd, putendl_fd
dierojas@Ubunt-42:~/Libft$ francinette -s
╔══════════════════════════════════════════════════════════════════════════════╗
║                Welcome to Francinette, a 42 tester framework!                ║
╚═══════════════════════╦══════════════════════════════╦═══════════════════════╝
                        ║             libft            ║
                        ╚══════════════════════════════╝
✔ Preparing framework
✔ Executing: norminette
✔ Executing: make fclean all (no bonus)
✔ Compiling tests: fsoares (my own)
ℹ Testing:
ft_isalpha      : OK
ft_isdigit      : OK
ft_isalnum      : OK
ft_isascii      : OK
ft_isprint      : OK
ft_strlen       : OK
ft_memset       : OK
ft_bzero        : OK
ft_memcpy       : OK
ft_memmove      : OK
ft_strlcpy      : OK
ft_strlcat      : KO
ft_toupper      : OK
ft_tolower      : OK
ft_strchr       : KO
ft_strrchr      : KO
ft_strncmp      : KO
ft_memchr       : OK
ft_memcmp       : OK
ft_strnstr      : OK
ft_atoi         : OK
ft_calloc       : OK
ft_strdup       : OK
ft_substr       : 4.KO Segfault
ft_strjoin      : OK
ft_strtrim      : OK
ft_split        : 1.KO Segfault
ft_itoa         : KO
ft_strmapi      : OK
ft_striteri     : OK
ft_putchar_fd   : OK
ft_putstr_fd    : OK
ft_putendl_fd   : OK
ft_putnbr_fd    : KO

Errors found:
For ft_strlcat, in /home/dierojas/francinette/tests/libft/fsoares/test_strlcat.c:

Error in test 6: ft_strlcat("pqrstuvwxyz", "abcd", 5): expected: 9, yours: 15
Error in test 7: ft_strlcat("pqrstuvwxyz", "abcd", 6): expected: 10, yours: 15
Error in test 8: ft_strlcat("pqrstuvwxyz", "abcd", 7): expected: 11, yours: 15

For ft_strchr, in /home/dierojas/francinette/tests/libft/fsoares/test_strchr.c:

Error in test 3: ft_strchr(0x60b8590c1020: "teste", 0: '\0'): expected: 0x60b8590c1025, yours: (nil)
Error in test 6: ft_strchr(0x60b8590c1020: "teste", 1024: '\0'): expected: 0x60b8590c1025, yours: (nil)

For ft_strrchr, in /home/dierojas/francinette/tests/libft/fsoares/test_strrchr.c:

Error in test 2: ft_strrchr(0x649a41af6021: "teste", 0: '\0'): expected: 0x649a41af6026, yours: (nil)
Error in test 5: ft_strrchr(0x649a41af6021: "teste", 1125: 'e'): expected: 0x649a41af6025, yours: (nil)
Error in test 6: ft_strrchr(0x649a41af6021: "teste", 1024: '\0'): expected: 0x649a41af6026, yours: (nil)

For ft_strncmp, in /home/dierojas/francinette/tests/libft/fsoares/test_strncmp.c:

Error in test 19: ft_strncmp("abcdef", "abc\375xx", 5): 
expected sign: -1 (value: -153), yours sign: 1 (value: 103)


For ft_substr, in /home/dierojas/francinette/tests/libft/fsoares/test_substr.c:

Error in test 2: ft_substr("", 0, 1): expected 1 bytes, allocated 2 bytes
Error in test 2: ft_substr("", 0, 1): 
Memory leak: 0x57fb13edb950 - 4096 bytes
You failed to free the memory allocated at:
Error in test 3: ft_substr("", 1, 1): expected: "", got: "h"
Error in test 3: ft_substr("", 1, 1): expected 1 bytes, allocated 2 bytes
Error in test 4: ft_substr("hola", 4294967295, 0): Segmentation fault!
For ft_split, in /home/dierojas/francinette/tests/libft/fsoares/test_split.c:

Error in test 1: ft_split("hello!", 32:' '):
malloc protection check for 2th malloc:
: Segmentation fault!
For ft_itoa, in /home/dierojas/francinette/tests/libft/fsoares/test_itoa.c:

Error in test 5: ft_itoa(-2147483648): expected: "-2147483648", got: "-\0212147483648"
Error in test 5: ft_itoa(-2147483648): expected 12 bytes, allocated 13 bytes
Error in test 5: ft_itoa(-2147483648): 
Memory leak: 0x59337294cb30 - 4096 bytes
You failed to free the memory allocated at:

For ft_putnbr_fd, in /home/dierojas/francinette/tests/libft/fsoares/test_putnbr_fd.c:

Error in test 5: ft_putnbr_fd(-2147483648, fd: 4): expected: "0\n10000043\n-10000043\n2147483647\n-2147483648\n", content of 
the file: "\n\n\n\n-2147483648"



Summary: no bonus

Failed tests: split, putnbr_fd, itoa, strlcat, strchr, substr, strncmp, strrchr

Passed tests: isalpha, isdigit, isalnum, isascii, isprint, strlen, memset, bzero, memcpy, memmove, strlcpy, toupper, tolower, memchr, memcmp, strnstr, atoi, calloc, strdup, strjoin, strtrim, strmapi, striteri, putchar_fd, putstr_fd, putendl_fd
