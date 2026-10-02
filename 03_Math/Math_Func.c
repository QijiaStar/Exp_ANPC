#include<Includes.h>

float32 Max_Of_Three_Func(const float32 input1, const float32 input2, const float32 input3);
float32 Min_Of_Three_Func(const float32 input1, const float32 input2, const float32 input3);
float32 Mid_Of_Three_Func(const float32 input1, const float32 input2, const float32 input3);

#pragma CODE_SECTION(Max_Of_Three_Func,"ramfuncs");
float32 Max_Of_Three_Func(const float32 input1, const float32 input2, const float32 input3)
{
    if((input1 >= input2) && (input1 >= input3))
    {
        return (input1);
    }
    else if((input2 >= input1) && (input2 >= input3))
    {
        return (input2);
    }
    else
    {
        return (input3);
    }
}

#pragma CODE_SECTION(Min_Of_Three_Func,"ramfuncs");
float32 Min_Of_Three_Func(const float32 input1, const float32 input2, const float32 input3)
{
    if((input1 <= input2) && (input1 <= input3))
    {
        return (input1);
    }
    else if((input2 <= input1) && (input2 <= input3))
    {
        return (input2);
    }
    else
    {
        return (input3);
    }
}

#pragma CODE_SECTION(Mid_Of_Three_Func,"ramfuncs");
float32 Mid_Of_Three_Func(const float32 input1, const float32 input2, const float32 input3)
{
    float32 sum = input1 + input2 + input3;
    float32 output = sum - Max_Of_Three_Func(input1,input2,input3) - Min_Of_Three_Func(input1,input2,input3);
    return (output);
}
