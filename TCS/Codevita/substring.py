def substring_quest(s1, s2):
    s1_index = 0
    result = []

    while s1_index < len(s1):
        current_substring = ""
        found = False

        for s2_char in s2:
            current_substring += s2_char

            if current_substring == s1[s1_index:s1_index+len(current_substring)]:
                found = True

            if current_substring == s1[s1_index:s1_index+len(current_substring)][::-1]:
                found = True

            if found:
                s1_index += len(current_substring)
                result.append(current_substring)
                break

        if not found:
            return "Impossible"

    return "|".join(result)

# Example usage:
S1 = input().strip()
S2 = input().strip()
print(substring_quest(S1, S2))

