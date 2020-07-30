
CC=gcc 
OPTION=-fPIC -ldl
HOOK_OPTION=-shared -Wl,--no-as-needed
default:
	$(CC) $(HOOK_OPTION) $(OPTION) libhook_ret.c -o libhook_ret.so

