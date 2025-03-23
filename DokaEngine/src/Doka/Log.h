#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Doka {
	class DOKA_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define DK_CORE_TRACE(...)      ::Doka::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define DK_CORE_ERROR(...)      ::Doka::Log::GetCoreLogger()->error(__VA_ARGS__)
#define DK_CORE_WARN(...)       ::Doka::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define DK_CORE_INFO(...)       ::Doka::Log::GetCoreLogger()->info(__VA_ARGS__)
#define DK_CORE_FATAL(...)      ::Doka::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define DK_TRACE(...)			::Doka::Log::GetClientLogger()->trace(__VA_ARGS__)
#define DK_ERROR(...)			::Doka::Log::GetClientLogger()->error(__VA_ARGS__)
#define DK_WARN(...)			::Doka::Log::GetClientLogger()->warn(__VA_ARGS__)
#define DK_INFO(...)			::Doka::Log::GetClientLogger()->info(__VA_ARGS__)
#define DK_FATAL(...)			::Doka::Log::GetClientLogger()->critical(__VA_ARGS__)