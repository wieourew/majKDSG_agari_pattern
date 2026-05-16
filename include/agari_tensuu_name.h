#include <compare>
#include <string>
enum class agari_tensuu_name {
  fulo_1_han_gukei,
  fulo_2_han_gukei,
  fulo_3_han_gukei,
  fulo_1_han_ryoukei,
  fulo_2_han_ryoukei,
  fulo_3_han_ryoukei,
  menzen_1_han_gukei,
  menzen_1p7_han_gukei,
  menzen_2_han_gukei,
  menzen_alpha_han_gukei,
  menzen_beta_han_gukei,
  menzen_gamma_han_gukei,
  menzen_delta_han_gukei,
  menzen_1_han_ryoukei,
  menzen_1p7_han_ryoukei,
  menzen_2_han_ryoukei,
  menzen_alpha_han_ryoukei,
  menzen_beta_han_ryoukei,
  menzen_gamma_han_ryoukei,
  menzen_delta_han_ryoukei,
};

bool is_fulo(agari_tensuu_name x);
bool is_ryoukei(agari_tensuu_name x);
float raw_han(agari_tensuu_name x);
std::string to_string(agari_tensuu_name x);
std::partial_ordering operator<=>(const agari_tensuu_name , const agari_tensuu_name);

