template<typename FirstCandidate, typename... OtherCandidates>
struct first_base_of;

template<typename Type, typename FirstCandidate, typename... OtherCandidates>
struct first_base_of_helper
{
    using type =
            typename std::conditional<
                    std::is_base_of<FirstCandidate, Type>::value,
                    FirstCandidate,
                    typename first_base_of<Type, OtherCandidates...>::type>::type;
};

template<typename Type, typename... Candidates>
struct first_base_of
{
    using type = typename first_base_of_helper<Type, Candidates...>::type;
};

template<typename Type>
struct first_base_of<Type>
{
    using type = void;
};
