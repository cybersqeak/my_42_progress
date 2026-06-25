#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	B_index;
	size_t	L_index;

	// littleが空文字なら、lenに関係なくbigをそのまま返す
	if (little[0] == '\0')
		return ((char *)big);
	B_index = 0;
	// bigがNULLのときに走らないよう、big[B_index]のチェックが効くようにする
	while (B_index < len && big && big[B_index])
	{
		L_index = 0;
		// B_index + L_index が len を超えないように探す
		while (B_index + L_index < len && big[B_index
			+ L_index] == little[L_index])
		{
			L_index++;
			// littleの終端に達したら、マッチ成功！現在の開始位置を返す
			if (little[L_index] == '\0')
				return ((char *)&big[B_index]);
		}
		B_index++;
	}
	return (NULL);
}
