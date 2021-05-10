#include <stdio.h>

class test_t
{
public:
    test_t()
    {
        m_private_var_1 = 111;
        m_private_var_2 = 222;
    }

    void dump()
    {
        printf("======================= class test_t dump =======================\n");
        printf("m_private_var_1 = %d\n", m_private_var_1);
        printf("m_private_var_2 = %d\n", m_private_var_2);
        printf("=================================================================\n");
    }

private:
    int m_private_var_1;
    int m_private_var_2;
};

int main()
{
    test_t test;
    test.dump();

    // YOUR CODE HERE

    test.dump();

    return 0;
}
