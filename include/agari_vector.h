#ifndef INCLUDE_INCLUDE_AGARI_VECTOR_H_
#define INCLUDE_INCLUDE_AGARI_VECTOR_H_
#include <array>
#include <stdexcept>
#include <vector>
#include "agari_tensuu_name.h"
class agari_vector {
public:
    using container_type = std::array<agari_tensuu_name, 4>;
    using size_type = container_type::size_type;

private:
    container_type values_;

public:
    explicit agari_vector(container_type values)
        : values_(values)
    {
        if (!is_valid_values(values_)) {
            throw std::invalid_argument("invalid agari_vector");
        }
    }

    agari_tensuu_name at(size_type index) const
    {
        return values_.at(index);
    }

    constexpr size_type size() const noexcept
    {
        return values_.size();
    }

    const container_type& values() const noexcept
    {
        return values_;
    }

    static bool is_valid_values(const container_type& values)
    {
        for (std::size_t i = 0; i < values.size(); ++i) {
            for (std::size_t j = i; j < values.size(); ++j) {
                if (!is_le_or_unordered(values.at(i), values.at(j))) {
                    return false;
                }
            }
        }

        return true;
    }

private:
    static bool is_le_or_unordered(agari_tensuu_name lhs,
                                   agari_tensuu_name rhs)
    {
        const auto ord = lhs <=> rhs;

        return ord == std::partial_ordering::less
            || ord == std::partial_ordering::equivalent
            || ord == std::partial_ordering::unordered;
    }
};

std::vector<agari_vector> enumerate_agari_vectors();
#endif  // INCLUDE_INCLUDE_AGARI_VECTOR_H_
