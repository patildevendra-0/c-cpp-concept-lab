export module math;

export int add(int a, int b);

module :private;

int helper(int a, int b)               /// this become private now
{
    return a + b;
}

int add(int a, int b)
{
    return helper(a, b);
}