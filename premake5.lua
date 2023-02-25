workspace "LegendaryBeetroot"
	architecture "x64"
	
	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}
	
outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "LegendaryBeetroot"
	location "LegendaryBeetroot"
	kind "SharedLib"
	language "C++"
	
	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	
	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}
	
	includedirs
	{
		"%{prj.name}/vendor/spdlog/include"
	}
	
	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"
		
		defines
		{
			"BEET_PLATFORM_WINDOWS",
			"BEET_BUILD_DLL"
		}
		
		postbuildcommands
		{
			("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox")
		}
	filter "configurations:Debug"
		defines "BEET_DEBUG"
		symbols "On"
	
	filter "configurations:Release"
		defines "BEET_RELEASE"
		optimize "On"
		
	filter "configurations:Dist"
		defines "BEET_DIST"
		optimize "On"
		
project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"
	language "C++"
	
	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	
	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}
	
	includedirs
	{
		"LegendaryBeetroot/vendor/spdlog/include",
		"LegendaryBeetroot/src"
	}
	
	links 
	{
		"LegendaryBeetroot"
	}
	
	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"
		
		defines
		{
			"BEET_PLATFORM_WINDOWS",
		}
		
	filter "configurations:Debug"
		defines "BEET_DEBUG"
		symbols "On"
	
	filter "configurations:Release"
		defines "BEET_RELEASE"
		optimize "On"
		
	filter "configurations:Dist"
		defines "BEET_DIST"
		optimize "On"