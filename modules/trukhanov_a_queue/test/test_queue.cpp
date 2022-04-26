// Copyright 2021 Dmitry Kurtaev

#include <gtest/gtest.h>

#include "include/trukhanov_a_queue.h"

TEST(Queue, can_create_queue_with_positive_length) {
    ASSERT_NO_THROW(TQueue<int> bf(3));
}

TEST(Queue, throws_when_create_queue_with_negative_length) {
    ASSERT_ANY_THROW(TQueue<int> A(-1));
}

TEST(Queue, can_copy_queue) {
    TQueue<int> A(10);
    ASSERT_NO_THROW(TQueue<int> B(A));
}

TEST(Queue, can_push) {
    TQueue<int> A(1);
    ASSERT_NO_THROW(A.Push(2));
}

TEST(Queue, can_get_elem) {
    TQueue<int> A(3);
    A.Push(4);
    EXPECT_EQ(4, A.Get());
}

TEST(Queue, cant_get_if_empty) {
    TQueue<int> A(1);
    ASSERT_ANY_THROW(A.Get());
}

TEST(Queue, can_assign_queue) {
    TQueue<int> A(2);
    A.Push(1);
    TQueue<int> B(2);
    B = A;
    EXPECT_EQ(1, B.Get());
}
