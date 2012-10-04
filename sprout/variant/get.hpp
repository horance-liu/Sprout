#ifndef SPROUT_VARIANT_GET_HPP
#define SPROUT_VARIANT_GET_HPP

#include <cstddef>
#include <sprout/config.hpp>
#include <sprout/tuple/tuple/get.hpp>
#include <sprout/variant/variant.hpp>

namespace sprout {
	//
	// get
	//
	template<typename U, typename... Types>
	inline SPROUT_CONSTEXPR U const&
	get(sprout::variant<Types...> const& operand) {
		return operand.template get<U>();
	}
	template<typename U, typename... Types>
	inline SPROUT_CONSTEXPR U&
	get(sprout::variant<Types...>& operand) {
		return operand.template get<U>();
	}
}	// namespace sprout

#endif	// #ifndef SPROUT_VARIANT_GET_HPP
