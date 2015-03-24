CS-551-Project-2-
=================

The following are the generic steps to add a new system call

1.Add an entry in the /usr/src/include/minix/callnr.h
2.Register the system call in /usr/src/servers/pm/table.c
3.Add code of do_XXXX in /usr/src/servers/pm/misc.c
4.Add prototype of above method in /usr/src/servers/pm/proto.h
     * this method should fill reply message that will be sent back to the user process and should return a value to be placed in m_type part of the message
5.Define _XXXX.c (and corresponding header file if required) in the /usr/src/lib/libc/sys/_XXXX.c 
