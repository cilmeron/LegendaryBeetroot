#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace LegendaryBeetroot
{
	class BEET_API Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger()
		{
			return s_CoreLogger;
		}
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger()
		{
			return s_ClientLogger;
		}
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//Core Log macros
#define BEET_CORE_TRACE(...) ::LegendaryBeetroot::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define BEET_CORE_INFO(...) ::LegendaryBeetroot::Log::GetCoreLogger()->info(__VA_ARGS__)
#define BEET_CORE_WARN(...) ::LegendaryBeetroot::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define BEET_CORE_ERROR(...) ::LegendaryBeetroot::Log::GetCoreLogger()->error(__VA_ARGS__)
#define BEET_CORE_FATAL(...) ::LegendaryBeetroot::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client Log macros
#define BEET_TRACE(...) ::LegendaryBeetroot::Log::GetClientLogger()->trace(__VA_ARGS__)
#define BEET_INFO(...) ::LegendaryBeetroot::Log::GetClientLogger()->info(__VA_ARGS__)
#define BEET_WARN(...) ::LegendaryBeetroot::Log::GetClientLogger()->warn(__VA_ARGS__)
#define BEET_ERROR(...) ::LegendaryBeetroot::Log::GetClientLogger()->error(__VA_ARGS__)
#define BEET_FATAL(...) ::LegendaryBeetroot::Log::GetClientLogger()->fatal(__VA_ARGS__)



