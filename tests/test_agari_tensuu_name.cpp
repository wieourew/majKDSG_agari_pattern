// test_agari_tensuu_name.cpp

#include <QtTest/QtTest>
#include <compare>

#include "agari_tensuu_name.h"

class TestAgariTensuuName : public QObject {
    Q_OBJECT

private slots:
    void same_category_raw_han_order();
    void fulo_and_menzen_same_han();
    void gukei_and_ryoukei_same_han();
    void equivalent_cases();
    void incomparable_cases();
  void fulo_han_is_less_than_menzen_han();
};

void TestAgariTensuuName::same_category_raw_han_order()
{
    using A = agari_tensuu_name;

    QCOMPARE(A::fulo_1_han_gukei <=> A::fulo_2_han_gukei,
             std::partial_ordering::less);

    QCOMPARE(A::fulo_3_han_gukei <=> A::fulo_2_han_gukei,
             std::partial_ordering::greater);

    QCOMPARE(A::menzen_1p7_han_gukei <=> A::menzen_2_han_gukei,
             std::partial_ordering::less);

    QCOMPARE(A::menzen_gamma_han_ryoukei <=> A::menzen_beta_han_ryoukei,
             std::partial_ordering::greater);
}

void TestAgariTensuuName::fulo_and_menzen_same_han()
{
    using A = agari_tensuu_name;

    // 同じ han なら、副露 < 門前
    QCOMPARE(A::fulo_1_han_gukei <=> A::menzen_1_han_gukei,
             std::partial_ordering::less);

    QCOMPARE(A::menzen_1_han_gukei <=> A::fulo_1_han_gukei,
             std::partial_ordering::greater);

    QCOMPARE(A::fulo_2_han_ryoukei <=> A::menzen_2_han_ryoukei,
             std::partial_ordering::less);

    QCOMPARE(A::menzen_2_han_ryoukei <=> A::fulo_2_han_ryoukei,
             std::partial_ordering::greater);
}

void TestAgariTensuuName::gukei_and_ryoukei_same_han()
{
    using A = agari_tensuu_name;

    QCOMPARE(A::fulo_1_han_gukei <=> A::fulo_1_han_ryoukei,
             std::partial_ordering::less);

    QCOMPARE(A::fulo_1_han_ryoukei <=> A::fulo_1_han_gukei,
             std::partial_ordering::greater);

    QCOMPARE(A::menzen_1_han_gukei <=> A::menzen_1_han_ryoukei,
             std::partial_ordering::less);

    QCOMPARE(A::menzen_1_han_ryoukei <=> A::menzen_1_han_gukei,
             std::partial_ordering::greater);

    QCOMPARE(A::menzen_beta_han_gukei <=> A::menzen_beta_han_ryoukei,
             std::partial_ordering::less);

    QCOMPARE(A::menzen_beta_han_ryoukei <=> A::menzen_beta_han_gukei,
             std::partial_ordering::greater);
}

void TestAgariTensuuName::equivalent_cases()
{
    using A = agari_tensuu_name;

    QCOMPARE(A::fulo_1_han_gukei <=> A::fulo_1_han_gukei,
             std::partial_ordering::equivalent);

    QCOMPARE(A::menzen_delta_han_ryoukei <=> A::menzen_delta_han_ryoukei,
             std::partial_ordering::equivalent);
}

  void TestAgariTensuuName::fulo_han_is_less_than_menzen_han()
{
  using A = agari_tensuu_name;

  QCOMPARE(A::fulo_1_han_gukei <=> A::menzen_2_han_ryoukei,
           std::partial_ordering::less);
  QCOMPARE(A::menzen_alpha_han_ryoukei <=> A::fulo_3_han_gukei,
           std::partial_ordering::greater);
}
void TestAgariTensuuName::incomparable_cases()
{
    using A = agari_tensuu_name;

    // 例: 副露2翻と門前1翻など、ルール上比較不能にしたいなら unordered を期待する
    QCOMPARE(A::fulo_2_han_gukei <=> A::menzen_1_han_gukei,
             std::partial_ordering::unordered);

    QCOMPARE(A::menzen_1_han_gukei <=> A::fulo_2_han_gukei,
             std::partial_ordering::unordered);

    QCOMPARE(A::fulo_3_han_ryoukei <=> A::menzen_2_han_ryoukei,
             std::partial_ordering::unordered);
}
QTEST_MAIN(TestAgariTensuuName)
#include "test_agari_tensuu_name.moc"
