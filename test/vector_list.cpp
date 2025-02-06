#include "../include/vector_list.hpp"
#include <gtest/gtest.h>
#include <stdexcept>

class VectorListTest : public ::testing::Test {
  protected:
    void SetUp() override { vec = new VectorList<int>(5); }

    void TearDown() override { delete vec; }

    VectorList<int> *vec;
};

TEST_F(VectorListTest, InitialState) {
    EXPECT_EQ(vec->size(), 0);
    EXPECT_TRUE(vec->empty());
    EXPECT_EQ(vec->capacity(), 5);
}

TEST_F(VectorListTest, PushBack) {
    vec->push_back(10);
    EXPECT_EQ(vec->size(), 1);
    EXPECT_FALSE(vec->empty());
    EXPECT_EQ((*vec)[0], 10);
}

TEST_F(VectorListTest, Insert) {
    vec->push_back(1);
    vec->push_back(3);
    vec->insert(1, 2);
    EXPECT_EQ(vec->size(), 3);
    EXPECT_EQ((*vec)[1], 2);
}

TEST_F(VectorListTest, PopBack) {
    vec->push_back(42);
    vec->pop_back();
    EXPECT_EQ(vec->size(), 0);
    EXPECT_TRUE(vec->empty());
}

TEST_F(VectorListTest, Remove) {
    vec->push_back(5);
    vec->push_back(10);
    vec->remove(0);
    EXPECT_EQ(vec->size(), 1);
    EXPECT_EQ((*vec)[0], 10);
}

TEST_F(VectorListTest, Clear) {
    vec->push_back(1);
    vec->push_back(2);
    vec->clear();
    EXPECT_EQ(vec->size(), 0);
    EXPECT_TRUE(vec->empty());
}

TEST_F(VectorListTest, Find) {
    vec->push_back(100);
    vec->push_back(200);
    EXPECT_EQ(vec->find(100), 100);
    EXPECT_EQ(vec->find(200), 200);
}

TEST_F(VectorListTest, Contains) {
    vec->push_back(7);
    EXPECT_TRUE(vec->contains(7));
    EXPECT_FALSE(vec->contains(10));
}

TEST_F(VectorListTest, OutOfBoundsAccess) {
    EXPECT_THROW(vec->remove(0), std::out_of_range);
    EXPECT_THROW((*vec)[0], std::out_of_range);
    EXPECT_THROW(vec->find(100), std::out_of_range);
}

TEST_F(VectorListTest, ExceedingCapacity) {
    vec->push_back(1);
    vec->push_back(2);
    vec->push_back(3);
    vec->push_back(4);
    vec->push_back(5);
    EXPECT_THROW(vec->push_back(6), std::length_error);
}

TEST_F(VectorListTest, InsertExceedingCapacity) {
    vec->push_back(1);
    vec->push_back(2);
    vec->push_back(3);
    vec->push_back(4);
    vec->push_back(5);
    EXPECT_THROW(vec->insert(2, 6), std::length_error);
}

TEST_F(VectorListTest, InsertOutOfBounds) {
    EXPECT_THROW(vec->insert(1, 10), std::out_of_range);
}

TEST_F(VectorListTest, PopBackEmpty) {
    EXPECT_THROW(vec->pop_back(), std::out_of_range);
}
