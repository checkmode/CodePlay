#include <gtest/gtest.h>
#include <iostream>
#include "../SortFunctions/sortfunctions.h"

using namespace std;

typedef struct _TestData
{
  int *data;
  size_t len;
  int *sort_data;
} TestData;

void makeRandom(int *data, int n, int left, int right)
{
  srand((int)time(0));
  for (int i = 0; i < n; i++)
  {
    data[i] = rand() % (right - left + 1) + left;
  }
}

void printArray(int *data, int n)
{
  for (int i = 0; i < n; i++)
    cout << data[i] << " ";
  cout << endl;
}

int cmp(const void *a, const void *b)
{
  return *(int *)a - *(int *)b;
}

class TestSuiteSort : public ::testing::Test
{
private:
  /* data */
public:
  static void SetUpTestSuite()
  {
    shared_exchange_ = new TestData;
    const size_t maxRandom = 0xff;
    shared_exchange_->data = new int[maxRandom];
    shared_exchange_->len = maxRandom;
    makeRandom(shared_exchange_->data, maxRandom, 0, 0xffff);
    // printArray(shared_exchange_->data, shared_exchange_->len);

    shared_exchange_->sort_data = new int[maxRandom];
    memcpy(shared_exchange_->sort_data, shared_exchange_->data,
           shared_exchange_->len * sizeof(int));
    qsort(shared_exchange_->sort_data, shared_exchange_->len, sizeof(int), cmp);
  }

  static void TearDownTestSuite()
  {
    delete[] shared_exchange_->data;
    delete[] shared_exchange_->sort_data;
    delete shared_exchange_;
  }
  virtual void SetUp()
  {
  }

  virtual void TearDown()
  {
  }

  static TestData *shared_exchange_;
};

TestData *TestSuiteSort::shared_exchange_ = NULL;

TEST_F(TestSuiteSort, bubble)
{
  if (0 < shared_exchange_->len)
  {
    int *bubble = new int[shared_exchange_->len];
    memcpy(bubble, shared_exchange_->data, shared_exchange_->len * sizeof(int));
    sort_bubble(bubble, shared_exchange_->len);
    printf("===== bubble =====\n");
    printArray(bubble, shared_exchange_->len);

    for (size_t i = 0; i < shared_exchange_->len; i++)
    {
      ASSERT_EQ(shared_exchange_->sort_data[i], bubble[i]);
    }
    EXPECT_EQ(1, 3);

    delete[] bubble;
  }
}
