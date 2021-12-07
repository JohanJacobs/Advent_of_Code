workspace "CPP_AoC"
    architecture "x86_64"
    startproject "AoC"

    TargetDirectory = "%{wks.location}/bin/%{cfg.buildcfg}/%{prj.name}"
    ObjectDirectory = "%{wks.location}/bin-int/%{cfg.buildcfg}/%{prj.name}"

    configurations
    {
        "Debug",
        "Release"
    }

    flags
    {
        "MultiprocessorCompile"
    }

project "AoC"
    kind "ConsoleApp"
    language "C++"
    cppdialect "C++20"

    targetdir(TargetDirectory)
    objdir(ObjectDirectory)

    files
    {
        "src/**.cpp",
		"src/**.hpp"
    }
    includedirs 
    {
        "src/"
    }

    filter "configurations:Debug"
        defines "DEBUG"
        runtime "Debug"
        symbols "on"
    
    filter "configurations:Release"
        defines "NDEBUG"
        runtime "Release"
        optimize "on"