#include "header.h"
#include "unity.h"
void tearDown(){}
void setUp(){}

void test1(void){
    TEST_ASSERT_EQUAL( sConnection(), 1);
}
void test2(void){
    TEST_ASSERT_EQUAL( sConnection(), 1);
}
void test3(void){
    TEST_ASSERT_EQUAL( sConnection(), 1);
}
void test4(void){
    TEST_ASSERT_EQUAL( sConnection(), 1);
}
void test5(void){
    TEST_ASSERT_EQUAL( sConnection(), 1);
}

int main(){
    UnityBegin("testing");
    RUN_TEST(test1);
    RUN_TEST(test2);
    RUN_TEST(test3);
    RUN_TEST(test4);
    RUN_TEST(test5);

    return (UnityEnd());
}