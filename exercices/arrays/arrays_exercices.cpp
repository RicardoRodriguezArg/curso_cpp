#include <algorithm>
#include <array>
#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <iostream>
#include <vector>

using ::testing::_;
using ::testing::ElementsAre;
using ::testing::Gt;

/*
Given an integer array and a window of size w, find the current maximum value in
the window as it slides through the entire array.
Example:

nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
window_size = 3

expected output
[3, 4, 5, 6, 7, 8, 9, 10]

**/

std::vector<int> FindMaxSlidingWindow(std::vector<int> &input_numbers,
                                      int window_size) {
  std::vector<int> result{};
  result.reserve(static_cast<std::size_t>(input_numbers.size() / window_size));
  auto begin_iterator = input_numbers.begin();
  const auto max_distance =
      static_cast<long int>(input_numbers.size() - window_size);
  while (std::distance(input_numbers.begin(), begin_iterator) <= max_distance) {
    const auto max_value =
        std::max_element(begin_iterator, begin_iterator + window_size);
    result.push_back(*max_value);
    ++begin_iterator;
  }
  return result;
}

// Demonstrate some basic assertions.
TEST(SlidingWindows, BasicSlidingWindows) {

  // Input Values
  std::vector<int> input_values{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int window_size{3};
  const auto result = FindMaxSlidingWindow(input_values, window_size);

  ASSERT_THAT(result, ElementsAre(3, 4, 5, 6, 7, 8, 9, 10));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
