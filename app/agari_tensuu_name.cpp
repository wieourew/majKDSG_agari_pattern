#include "agari_tensuu_name.h"
#include <compare>
#include <string>

bool is_ryoukei(agari_tensuu_name x){
  switch (x) {
    //impossibleは順序で最弱になることを目的とする。
    case agari_tensuu_name::impossible: return false;
    case agari_tensuu_name::fulo_1_han_ryoukei: return true;
    case agari_tensuu_name::fulo_2_han_ryoukei: return true;
    case agari_tensuu_name::fulo_3_han_ryoukei: return true;
    case agari_tensuu_name::fulo_1_han_gukei: return false;
    case agari_tensuu_name::fulo_2_han_gukei: return false;
    case agari_tensuu_name::fulo_3_han_gukei: return false;
    case agari_tensuu_name::menzen_1_han_gukei: return false;
    case agari_tensuu_name::menzen_1p7_han_gukei: return false;
    case agari_tensuu_name::menzen_2_han_gukei: return false;
    case agari_tensuu_name::menzen_alpha_han_gukei: return false;
    case agari_tensuu_name::menzen_beta_han_gukei: return false;
    case agari_tensuu_name::menzen_gamma_han_gukei: return false;
    case agari_tensuu_name::menzen_delta_han_gukei: return false;
    case agari_tensuu_name::menzen_1_han_ryoukei: return true;
    case agari_tensuu_name::menzen_1p7_han_ryoukei: return true;
    case agari_tensuu_name::menzen_2_han_ryoukei: return true;
    case agari_tensuu_name::menzen_alpha_han_ryoukei: return true;
    case agari_tensuu_name::menzen_beta_han_ryoukei: return true;
    case agari_tensuu_name::menzen_gamma_han_ryoukei: return true;
    case agari_tensuu_name::menzen_delta_han_ryoukei: return true;
  }
}

bool is_fulo(agari_tensuu_name x){
  switch (x) {
    //impossibleは順序で最弱になることを目的とする。
    case agari_tensuu_name::impossible: return true;
    case agari_tensuu_name::fulo_1_han_ryoukei: return true;
    case agari_tensuu_name::fulo_2_han_ryoukei: return true;
    case agari_tensuu_name::fulo_3_han_ryoukei: return true;
    case agari_tensuu_name::fulo_1_han_gukei: return true;
    case agari_tensuu_name::fulo_2_han_gukei: return true;
    case agari_tensuu_name::fulo_3_han_gukei: return true;
    case agari_tensuu_name::menzen_1_han_gukei: return false;
    case agari_tensuu_name::menzen_1p7_han_gukei: return false;
    case agari_tensuu_name::menzen_2_han_gukei: return false;
    case agari_tensuu_name::menzen_alpha_han_gukei: return false;
    case agari_tensuu_name::menzen_beta_han_gukei: return false;
    case agari_tensuu_name::menzen_gamma_han_gukei: return false;
    case agari_tensuu_name::menzen_delta_han_gukei: return false;
    case agari_tensuu_name::menzen_1_han_ryoukei: return false;
    case agari_tensuu_name::menzen_1p7_han_ryoukei: return false;
    case agari_tensuu_name::menzen_2_han_ryoukei: return false;
    case agari_tensuu_name::menzen_alpha_han_ryoukei: return false;
    case agari_tensuu_name::menzen_beta_han_ryoukei: return false;
    case agari_tensuu_name::menzen_gamma_han_ryoukei: return false;
    case agari_tensuu_name::menzen_delta_han_ryoukei: return false;
  }
}

float raw_han(agari_tensuu_name x){
  switch (x) {
    case agari_tensuu_name::impossible: return 0;
    case agari_tensuu_name::fulo_1_han_ryoukei: return 1;
    case agari_tensuu_name::fulo_2_han_ryoukei: return 2;
    case agari_tensuu_name::fulo_3_han_ryoukei: return 3;
    case agari_tensuu_name::fulo_1_han_gukei: return 1;
    case agari_tensuu_name::fulo_2_han_gukei: return 2;
    case agari_tensuu_name::fulo_3_han_gukei: return 3;
    case agari_tensuu_name::menzen_1_han_gukei: return 1;
    case agari_tensuu_name::menzen_1p7_han_gukei: return 1.7;
    case agari_tensuu_name::menzen_2_han_gukei: return 2;
    case agari_tensuu_name::menzen_alpha_han_gukei: return 3;
    case agari_tensuu_name::menzen_beta_han_gukei: return 3.5;
    case agari_tensuu_name::menzen_gamma_han_gukei: return 4;
    case agari_tensuu_name::menzen_delta_han_gukei: return 6;
    case agari_tensuu_name::menzen_1_han_ryoukei: return 1;
    case agari_tensuu_name::menzen_1p7_han_ryoukei: return 1.7;
    case agari_tensuu_name::menzen_2_han_ryoukei: return 2;
    case agari_tensuu_name::menzen_alpha_han_ryoukei: return 3;
    case agari_tensuu_name::menzen_beta_han_ryoukei: return 3.5;
    case agari_tensuu_name::menzen_gamma_han_ryoukei: return 4;
    case agari_tensuu_name::menzen_delta_han_ryoukei: return 6;
  }
}

std::string to_string(agari_tensuu_name x){
  switch(x){
    case agari_tensuu_name::impossible: return "×";
    case agari_tensuu_name::fulo_1_han_ryoukei: return "F1良";
    case agari_tensuu_name::fulo_2_han_ryoukei: return "F2良";
    case agari_tensuu_name::fulo_3_han_ryoukei: return "F3良";
    case agari_tensuu_name::fulo_1_han_gukei: return "F1愚";
    case agari_tensuu_name::fulo_2_han_gukei: return "F2愚";
    case agari_tensuu_name::fulo_3_han_gukei: return "F3愚";
    case agari_tensuu_name::menzen_1_han_gukei: return "1愚";
    case agari_tensuu_name::menzen_1p7_han_gukei: return "1.7愚";
    case agari_tensuu_name::menzen_2_han_gukei: return "2愚";
    case agari_tensuu_name::menzen_alpha_han_gukei: return "α愚";
    case agari_tensuu_name::menzen_beta_han_gukei: return "β愚";
    case agari_tensuu_name::menzen_gamma_han_gukei: return "γ愚";
    case agari_tensuu_name::menzen_delta_han_gukei: return "δ愚";
    case agari_tensuu_name::menzen_1_han_ryoukei: return "1良";
    case agari_tensuu_name::menzen_1p7_han_ryoukei: return "1.7良";
    case agari_tensuu_name::menzen_2_han_ryoukei: return "2良";
    case agari_tensuu_name::menzen_alpha_han_ryoukei: return "α良";
    case agari_tensuu_name::menzen_beta_han_ryoukei: return "β良";
    case agari_tensuu_name::menzen_gamma_han_ryoukei: return "γ良";
    case agari_tensuu_name::menzen_delta_han_ryoukei: return "δ良";
  }
}
std::partial_ordering operator<=>(agari_tensuu_name lhs,
                                  agari_tensuu_name rhs)
{
    const bool lhs_fulo = is_fulo(lhs);
    const bool rhs_fulo = is_fulo(rhs);

    const bool lhs_ryoukei = is_ryoukei(lhs);
    const bool rhs_ryoukei = is_ryoukei(rhs);

    const float lhs_han = raw_han(lhs);
    const float rhs_han = raw_han(rhs);

  // 副露同士、または門前同士
    if (lhs_fulo == rhs_fulo) {
        if (lhs_han < rhs_han) {
            return std::partial_ordering::less;
        }

        if (lhs_han > rhs_han) {
            return std::partial_ordering::greater;
        }


        if (!lhs_ryoukei && rhs_ryoukei) {
            return std::partial_ordering::less;
        }

        if (lhs_ryoukei && !rhs_ryoukei) {
            return std::partial_ordering::greater;
        }

        return std::partial_ordering::equivalent;
    }

   // 鳴きと面前の比較で、同じ han
    if (lhs_han == rhs_han) {
        if (lhs_fulo && !rhs_fulo) {
            return std::partial_ordering::less;
        }

        if (!lhs_fulo && rhs_fulo) {
            return std::partial_ordering::greater;
        }
    }

  // 鳴きと面前の比較で、鳴きのほうが翻数少ないと小さい
  if(lhs_han < rhs_han && lhs_fulo && !lhs_fulo){
    return std::partial_ordering::less;
  }
  if(lhs_han > rhs_han && !lhs_fulo && rhs_fulo){
    return std::partial_ordering::greater;
  }

  // それ以外は比較不能
    return std::partial_ordering::unordered;
}
