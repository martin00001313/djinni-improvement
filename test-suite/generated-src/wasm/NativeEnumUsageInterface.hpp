// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from enum.djinni

#pragma once

#include "djinni_wasm.hpp"
#include "enum_usage_interface.hpp"

namespace djinni_generated {

struct NativeEnumUsageInterface : ::djinni::JsInterface<::testsuite::EnumUsageInterface, NativeEnumUsageInterface> {
    using CppType = std::shared_ptr<::testsuite::EnumUsageInterface>;
    using CppOptType = std::shared_ptr<::testsuite::EnumUsageInterface>;
    using JsType = em::val;
    using Boxed = NativeEnumUsageInterface;

    static CppType toCpp(JsType j) { return _fromJs(j); }
    static JsType fromCppOpt(const CppOptType& c) { return {_toJs(c)}; }
    static JsType fromCpp(const CppType& c) {
        djinni::checkForNull(c.get(), "NativeEnumUsageInterface::fromCpp");
        return fromCppOpt(c);
    }

    static em::val cppProxyMethods();

    static int32_t e(const CppType& self, int32_t w_e);
    static em::val o(const CppType& self, const em::val& w_o);
    static em::val l(const CppType& self, const em::val& w_l);
    static em::val s(const CppType& self, const em::val& w_s);
    static em::val m(const CppType& self, const em::val& w_m);

    struct JsProxy: ::djinni::JsProxyBase, ::testsuite::EnumUsageInterface, ::djinni::InstanceTracker<JsProxy> {
        JsProxy(const em::val& v) : JsProxyBase(v) {}
        ::testsuite::color e(::testsuite::color e) override;
        std::experimental::optional<::testsuite::color> o(std::experimental::optional<::testsuite::color> o) override;
        std::vector<::testsuite::color> l(const std::vector<::testsuite::color> & l) override;
        std::unordered_set<::testsuite::color> s(const std::unordered_set<::testsuite::color> & s) override;
        std::unordered_map<::testsuite::color, ::testsuite::color> m(const std::unordered_map<::testsuite::color, ::testsuite::color> & m) override;
    };
};

} // namespace djinni_generated
