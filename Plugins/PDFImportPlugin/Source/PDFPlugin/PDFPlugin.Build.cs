// Copyright 2019 Isara Technologies SAS. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class PDFPlugin : ModuleRules
{
	private string ModulePath
	{
		get { return ModuleDirectory; }
	}

	private string ThirdPartyPath
	{
		get { return Path.GetFullPath(Path.Combine(ModulePath, "../ThirdParty/")); }
	}

	public bool LoadPDFium(ReadOnlyTargetRules Target)
	{
		bool isLibrarySupported = false;

		if ((Target.Platform == UnrealTargetPlatform.Win64) || (Target.Platform == UnrealTargetPlatform.Win32))
		{
			isLibrarySupported = true;

			string PlatformString = (Target.Platform == UnrealTargetPlatform.Win64) ? "x64" : "Win32";
			string LibrariesPath = Path.Combine(Path.Combine(Path.Combine(ThirdPartyPath, "pdfium", "lib"), "vs"), PlatformString);

			PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "pdfium.dll.lib"));

			string[] dlls = { "pdfium.dll" };

			string BinariesPath = Path.Combine(Path.Combine(Path.Combine(ThirdPartyPath, "pdfium", "bin"), "vs"), PlatformString);
			foreach (string dll in dlls)
			{
				PublicDelayLoadDLLs.Add(dll);
				RuntimeDependencies.Add(Path.Combine(BinariesPath, dll), StagedFileType.NonUFS);
			}

		}

		if (isLibrarySupported)
		{
			// Include path
			PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "pdfium", "include"));
		}


		return isLibrarySupported;
	}

	public PDFPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		OptimizeCode = CodeOptimization.Never;
		bEnableUndefinedIdentifierWarnings = false;
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"InputCore"
				// ... add other public dependencies that you statically link with here ...
			}
			);

		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"Core",
				"CoreUObject",
				"Engine",
				"MediaUtils",
				"RenderCore",
				"Projects"
			});

		PrivateIncludePaths.AddRange(
			new string[] {
				"PDFPlugin/Private",
			});

		
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));

		LoadPDFium(Target);

	}

	
}