//
// Created by baic on 2019-06-21.
//
#include <stringapiset.h>
#include <string>
     std::wstring s2ws(const std::string &str)
{
#if 0
    using convert_typeX = std::codecvt_utf8<wchar_t>;
    std::wstring_convert<convert_typeX, wchar_t> converterX;

    return converterX.from_bytes(str);
#else
    auto converted_buffer_size_in_characters =
         MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.size(), nullptr, 0);
    std::wstring my_wstring(converted_buffer_size_in_characters, wchar_t{});
    auto my_buffer = my_wstring.data();
    MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.size(), my_buffer, converted_buffer_size_in_characters);
    return my_wstring;
#endif
}

std::string ws2s(const std::wstring& wstr)
{
#if 0
    using convert_typeX = std::codecvt_utf8<wchar_t>;
    std::wstring_convert<convert_typeX, wchar_t> converterX;

    return converterX.to_bytes(wstr);
#else
    auto converted_buffer_size_in_characters =
            WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), wstr.size(), nullptr, 0, NULL, NULL);
    std::string my_string(converted_buffer_size_in_characters, char{});
    auto my_buffer = my_string.data();
    WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), wstr.size(), my_buffer, converted_buffer_size_in_characters,
            NULL, NULL);
    return my_string;
#endif
}

int main         ()
{
    std::wstring my_wstring1{L"很长很长很长很长很长很长很长很长很长很长"};
    auto my_string2 = ws2s(my_wstring1);
    auto my_wstring3 = s2ws(my_string2);

    return 0;
}