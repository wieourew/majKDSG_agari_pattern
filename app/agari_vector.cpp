#include "agari_vector.h"
constexpr std::array all_agari_tensuu_names ={
  agari_tensuu_name::impossible,
  agari_tensuu_name::fulo_1_han_gukei,
  agari_tensuu_name::fulo_2_han_gukei,
  agari_tensuu_name::fulo_3_han_gukei,
  agari_tensuu_name::fulo_1_han_ryoukei,
  agari_tensuu_name::fulo_2_han_ryoukei,
  agari_tensuu_name::fulo_3_han_ryoukei,
  agari_tensuu_name::menzen_1_han_gukei,
  agari_tensuu_name::menzen_1p7_han_gukei,
  agari_tensuu_name::menzen_2_han_gukei,
  agari_tensuu_name::menzen_alpha_han_gukei,
  agari_tensuu_name::menzen_beta_han_gukei,
  agari_tensuu_name::menzen_gamma_han_gukei,
  agari_tensuu_name::menzen_delta_han_gukei,
  agari_tensuu_name::menzen_1_han_ryoukei,
  agari_tensuu_name::menzen_1p7_han_ryoukei,
  agari_tensuu_name::menzen_2_han_ryoukei,
  agari_tensuu_name::menzen_alpha_han_ryoukei,
  agari_tensuu_name::menzen_beta_han_ryoukei,
  agari_tensuu_name::menzen_gamma_han_ryoukei,
  agari_tensuu_name::menzen_delta_han_ryoukei,
};
std::vector<agari_vector> enumerate_agari_vectors(){

    std::vector<agari_vector> result;

    for (auto a0 : all_agari_tensuu_names) {
        for (auto a1 : all_agari_tensuu_names) {
            for (auto a2 : all_agari_tensuu_names) {
                for (auto a3 : all_agari_tensuu_names) {
                    agari_vector::container_type values = {
                        a0, a1, a2, a3
                    };

                    if (agari_vector::is_valid_values(values)) {
                        result.emplace_back(values);
                    }
                }
            }
        }
    }

    return result;
}
