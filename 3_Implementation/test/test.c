#include "header.h"
#include "unity.h"
void tearDown(){}
void setUp(){}
int add(int a,int b){
    return a+b;
}
void test(){
    TEST_ASSERT_EQUAL( add(1,2), 1);
}
int main(){
    UnityBegin("testing");
    RUN_TEST(add);
    return (UnityEnd());
}