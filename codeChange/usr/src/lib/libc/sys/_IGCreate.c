//
//  _IGCreate.c
//  Project2
//
//  Created by poojasub on 11/10/13.
//  Copyright (c) 2013 poojasub. All rights reserved.
//
#include <lib.h>
#include <stdio.h>

PUBLIC int IGCreate(int * groupNo){
    message m;
    
	m.m7_p1 = groupNo;
    
	return (_syscall( PM_PROC_NR, 69, &m ));
}