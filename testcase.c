/*
 * testcase.c
 *
 *  Created on: Feb 8, 2017
 *      Author: hue
 */

#include "testcase.h"

#include <stdio.h>
#include <stdlib.h>

typedef enum TestState
{
	TEST_RUNNING,
	TEST_PAUSED,
	TEST_STOPPED,
} TestState_t;

TestState_t test_state = TEST_STOPPED;

typedef enum TestCommand
{
	TEST_START,
	TEST_PAUSE,
	TEST_RESUME,
	TEST_SKIP,
	TEST_STOP
} TestCommand_t;

TestCommand_t test_cmd = TEST_STOP;

struct TestCase * CreateEmptyTestList(void)
{

	return NULL;
}
struct TestCase * CreateTestListFromFile(const char * file_name)
{

	return NULL;
}

int TestRun(struct TestCase * test_list)
{

	return 0;
}

int TestPause(void)
{

	return 0;
}
int TestResume(void)
{

	return 0;
}
int TestSkip(void)
{

	return 0;
}
int TestStop(void)
{

	return 0;
}
