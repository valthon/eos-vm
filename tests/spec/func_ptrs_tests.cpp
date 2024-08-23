// Generated by spec_test_generator.  DO NOT MODIFY THIS FILE.

#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
#include <cmath>
#include <cstdlib>
#include <catch2/catch.hpp>
#include <utils.hpp>
#include <wasm_config.hpp>
#include <sysio/vm/backend.hpp>

using namespace sysio;
using namespace sysio::vm;
extern wasm_allocator wa;

BACKEND_TEST_CASE( "Testing wasm <func_ptrs_1_wasm>", "[func_ptrs_1_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "func_ptrs.1.wasm");
   CHECK_THROWS_AS(backend_t(code, nullptr), std::exception);
}

BACKEND_TEST_CASE( "Testing wasm <func_ptrs_2_wasm>", "[func_ptrs_2_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "func_ptrs.2.wasm");
   CHECK_THROWS_AS(backend_t(code, nullptr), std::exception);
}

BACKEND_TEST_CASE( "Testing wasm <func_ptrs_3_wasm>", "[func_ptrs_3_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "func_ptrs.3.wasm");
   CHECK_THROWS_AS(backend_t(code, nullptr), std::exception);
}

BACKEND_TEST_CASE( "Testing wasm <func_ptrs_4_wasm>", "[func_ptrs_4_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "func_ptrs.4.wasm");
   CHECK_THROWS_AS(backend_t(code, nullptr), std::exception);
}

BACKEND_TEST_CASE( "Testing wasm <func_ptrs_5_wasm>", "[func_ptrs_5_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "func_ptrs.5.wasm");
   CHECK_THROWS_AS(backend_t(code, nullptr), std::exception);
}

BACKEND_TEST_CASE( "Testing wasm <func_ptrs_6_wasm>", "[func_ptrs_6_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "func_ptrs.6.wasm");
   CHECK_THROWS_AS(backend_t(code, nullptr), std::exception);
}

BACKEND_TEST_CASE( "Testing wasm <func_ptrs_7_wasm>", "[func_ptrs_7_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "func_ptrs.7.wasm");
   CHECK_THROWS_AS(backend_t(code, nullptr), std::exception);
}

BACKEND_TEST_CASE( "Testing wasm <func_ptrs_8_wasm>", "[func_ptrs_8_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "func_ptrs.8.wasm");
   backend_t bkend( code, &wa );

   CHECK(bkend.call_with_return("env", "callt", UINT32_C(0))->to_ui32() == UINT32_C(1));
   CHECK(bkend.call_with_return("env", "callt", UINT32_C(1))->to_ui32() == UINT32_C(2));
   CHECK(bkend.call_with_return("env", "callt", UINT32_C(2))->to_ui32() == UINT32_C(3));
   CHECK(bkend.call_with_return("env", "callt", UINT32_C(3))->to_ui32() == UINT32_C(4));
   CHECK(bkend.call_with_return("env", "callt", UINT32_C(4))->to_ui32() == UINT32_C(5));
   CHECK(bkend.call_with_return("env", "callt", UINT32_C(5))->to_ui32() == UINT32_C(1));
   CHECK(bkend.call_with_return("env", "callt", UINT32_C(6))->to_ui32() == UINT32_C(3));
   CHECK_THROWS_AS(bkend("env", "callt", UINT32_C(7)), std::exception);
   CHECK_THROWS_AS(bkend("env", "callt", UINT32_C(100)), std::exception);
   CHECK_THROWS_AS(bkend("env", "callt", UINT32_C(4294967295)), std::exception);
   CHECK(bkend.call_with_return("env", "callu", UINT32_C(0))->to_ui32() == UINT32_C(1));
   CHECK(bkend.call_with_return("env", "callu", UINT32_C(1))->to_ui32() == UINT32_C(2));
   CHECK(bkend.call_with_return("env", "callu", UINT32_C(2))->to_ui32() == UINT32_C(3));
   CHECK(bkend.call_with_return("env", "callu", UINT32_C(3))->to_ui32() == UINT32_C(4));
   CHECK(bkend.call_with_return("env", "callu", UINT32_C(4))->to_ui32() == UINT32_C(5));
   CHECK(bkend.call_with_return("env", "callu", UINT32_C(5))->to_ui32() == UINT32_C(1));
   CHECK(bkend.call_with_return("env", "callu", UINT32_C(6))->to_ui32() == UINT32_C(3));
   CHECK_THROWS_AS(bkend("env", "callu", UINT32_C(7)), std::exception);
   CHECK_THROWS_AS(bkend("env", "callu", UINT32_C(100)), std::exception);
   CHECK_THROWS_AS(bkend("env", "callu", UINT32_C(4294967295)), std::exception);
}

BACKEND_TEST_CASE( "Testing wasm <func_ptrs_9_wasm>", "[func_ptrs_9_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "func_ptrs.9.wasm");
   backend_t bkend( code, &wa );

   CHECK(bkend.call_with_return("env", "callt", UINT32_C(0))->to_ui32() == UINT32_C(1));
   CHECK(bkend.call_with_return("env", "callt", UINT32_C(1))->to_ui32() == UINT32_C(2));
}

