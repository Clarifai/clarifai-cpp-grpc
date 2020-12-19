#include <iostream>
#include <string>
using namespace std;

// toString solution source: https://stackoverflow.com/a/37329924/365837
template<typename T>
std::string toString(const T& t) {
    return std::to_string(t);
}

std::string toString(const char* t) {
    return t;
}

std::string toString(const std::string& t) {
    return t;
}

#define ASSERT_THROW( condition )                                   \
{                                                                   \
  if( !( condition ) )                                              \
  {                                                                 \
    throw std::runtime_error(   std::string( __FILE__ )             \
                              + std::string( ":" )                  \
                              + std::to_string( __LINE__ )          \
                              + std::string( " in " )               \
                              + std::string( __PRETTY_FUNCTION__ )  \
    );                                                              \
  }                                                                 \
}

#define ASSERT_EQUAL( want , got )                                  \
{                                                                   \
  if( ( want ) != ( got ) )                                         \
  {                                                                 \
    throw std::runtime_error(   std::string( __FILE__ )             \
                              + std::string( ":" )                  \
                              + std::to_string( __LINE__ )          \
                              + std::string( " in " )               \
                              + std::string( __PRETTY_FUNCTION__ )  \
                              + std::string( ": expected " )        \
                              + toString( ( want ) )                \
                              + std::string( " but got " )          \
                              + toString( ( got ) )                 \
    );                                                              \
  }                                                                 \
}

#define ASSERT_NOT_EQUAL( do_not_want , got )                       \
{                                                                   \
  if( ( do_not_want ) == ( got ) )                                  \
  {                                                                 \
    throw std::runtime_error(   std::string( __FILE__ )             \
                              + std::string( ":" )                  \
                              + std::to_string( __LINE__ )          \
                              + std::string( " in " )               \
                              + std::string( __PRETTY_FUNCTION__ )  \
                              + std::string( ": not expected  " )   \
                              + toString( ( do_not_want ) )         \
                              + std::string( " but got " )          \
                              + toString( ( got ) )                 \
    );                                                              \
  }                                                                 \
}

#define FAIL(message)                                               \
{                                                                   \
    throw std::runtime_error(   std::string( __FILE__ )             \
                              + std::string( ":" )                  \
                              + std::to_string( __LINE__ )          \
                              + std::string( " in " )               \
                              + std::string( __PRETTY_FUNCTION__ )  \
                              + std::string( ": " )                 \
                              + std::string( message )              \
    );                                                              \
}
