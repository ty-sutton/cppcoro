#ifndef CPPCORO_COROUTINE_HPP_INCLUDED
#define CPPCORO_COROUTINE_HPP_INCLUDED

/////////////////////////////////////////////////////////////////////////////
// Include <coroutine>

#include <cppcoro/config.hpp>

#if CPPCORO_STD_CORO
#include <coroutine>
namespace stdcoro
{
  using std::coroutine_handle;
  using std::suspend_always;
  using std::suspend_never;
}
#else
#include <experimental/coroutine>
namespace stdcoro
{
  using std::experimental::coroutine_handle;
  using std::experimental::suspend_always;
  using std::experimental::suspend_never;
}
#endif 

#endif
