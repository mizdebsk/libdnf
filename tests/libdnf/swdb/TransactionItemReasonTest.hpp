#ifndef LIBDNF_SWDB_TRANSACTION_ITEM_REASON_TEST_HPP
#define LIBDNF_SWDB_TRANSACTION_ITEM_REASON_TEST_HPP

#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

#include "libdnf/utils/sqlite3/Sqlite3.hpp"

class TransactionItemReasonTest : public CppUnit::TestCase {
    CPPUNIT_TEST_SUITE(TransactionItemReasonTest);
    CPPUNIT_TEST(testNoTransaction);
    CPPUNIT_TEST(testEmptyTransaction);
    CPPUNIT_TEST(test_OneTransaction_OneTransactionItem);
    CPPUNIT_TEST(test_OneFailedTransaction_OneTransactionItem);
    CPPUNIT_TEST(test_OneTransaction_TwoTransactionItems);
    CPPUNIT_TEST(test_TwoTransactions_TwoTransactionItems);
    CPPUNIT_TEST(testRemovedPackage);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp() override;
    void tearDown() override;

    void testNoTransaction();
    void testEmptyTransaction();
    void test_OneTransaction_OneTransactionItem();
    void test_OneFailedTransaction_OneTransactionItem();
    void test_OneTransaction_TwoTransactionItems();
    void test_TwoTransactions_TwoTransactionItems();
    void testRemovedPackage();

private:
    std::shared_ptr< SQLite3 > conn;
};

#endif // LIBDNF_SWDB_TRANSACTION_ITEM_REASON_TEST_HPP
