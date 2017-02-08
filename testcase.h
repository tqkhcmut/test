/*
 * testcase.h
 *
 *  Created on: Feb 8, 2017
 *      Author: hue
 */

#ifndef TESTCASE_H_
#define TESTCASE_H_

struct TestCase
{
	char * name;
	char * script_name;
	int loop;
	int priority;
	int run_time;

	struct TestCase * next;
};

struct TestCase * CreateEmptyTestList(void);
struct TestCase * CreateTestListFromFile(const char * file_name);

int TestRun(struct TestCase * test_list);

int TestPause(void);
int TestResume(void);
int TestSkip(void);
int TestStop(void);

#endif /* TESTCASE_H_ */
