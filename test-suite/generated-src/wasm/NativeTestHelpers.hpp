// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from test.djinni

#pragma once

#include "djinni_wasm.hpp"
#include "test_helpers.hpp"

namespace djinni_generated {

struct NativeTestHelpers : ::djinni::JsInterface<::testsuite::TestHelpers, NativeTestHelpers> {
    using CppType = std::shared_ptr<::testsuite::TestHelpers>;
    using CppOptType = std::shared_ptr<::testsuite::TestHelpers>;
    using JsType = em::val;
    using Boxed = NativeTestHelpers;

    static CppType toCpp(JsType j) { return _fromJs(j); }
    static JsType fromCppOpt(const CppOptType& c) { return {_toJs(c)}; }
    static JsType fromCpp(const CppType& c) {
        djinni::checkForNull(c.get(), "NativeTestHelpers::fromCpp");
        return fromCppOpt(c);
    }

    static em::val cppProxyMethods();

    static em::val get_set_record();
    static bool check_set_record(const em::val& w_rec);
    static em::val get_primitive_list();
    static bool check_primitive_list(const em::val& w_pl);
    static em::val get_nested_collection();
    static bool check_nested_collection(const em::val& w_nc);
    static em::val get_map();
    static bool check_map(const em::val& w_m);
    static em::val get_empty_map();
    static bool check_empty_map(const em::val& w_m);
    static em::val get_map_list_record();
    static bool check_map_list_record(const em::val& w_m);
    static void check_client_interface_ascii(const em::val& w_i);
    static void check_client_interface_nonascii(const em::val& w_i);
    static void check_client_interface_args(const em::val& w_i);
    static void check_enum_map(const em::val& w_m);
    static void check_enum(int32_t w_c);
    static em::val token_id(const em::val& w_t);
    static em::val create_cpp_token();
    static void check_cpp_token(const em::val& w_t);
    static int64_t cpp_token_id(const em::val& w_t);
    static void check_token_type(const em::val& w_t,const std::string& w_type);
    static em::val return_none();
    static em::val assorted_primitives_id(const em::val& w_i);
    static em::val id_binary(const em::val& w_b);
    static em::val get_async_result();
    static em::val future_roundtrip(const em::val& w_f);
    static em::val async_early_throw();
    static em::val check_async_interface(const em::val& w_i);
    static em::val check_async_composition(const em::val& w_i);
    static em::val get_optional_list();
    static bool check_optional_list(const em::val& w_ol);
    static em::val get_optional_set();
    static bool check_optional_set(const em::val& w_os);
    static em::val get_optional_map();
    static bool check_optional_map(const em::val& w_om);

};

} // namespace djinni_generated
