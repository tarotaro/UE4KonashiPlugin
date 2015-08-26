// Fill out your copyright notice in the Description page of Project Settings.
using System.IO;
using UnrealBuildTool;

public class KonashiBPLibrary : ModuleRules
{

    private string ModulePath
    {
        get { return Path.GetDirectoryName(RulesCompiler.GetModuleFilename(this.GetType().Name)); }
    }
 
    private string ThirdPartyPath
    {
        get { return Path.GetFullPath(Path.Combine(ModulePath, "../../ThirdPartyFrameworks/")); }
    }

	public KonashiBPLibrary(TargetInfo Target)
	{
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

        if (Target.Platform == UnrealTargetPlatform.IOS)
        {


            PrivateIncludePaths.AddRange(new string[] {
                "KoashiBPLibrary/Private",
					// ... add other private include paths required here ...
            });

            PublicAdditionalLibraries.Add(Path.Combine(ThirdPartyPath,"Konashi","libKonashi.a"));


            PrivateIncludePaths.Add(Path.Combine(ThirdPartyPath,"Konashi"));
            PrivateIncludePaths.Add(Path.Combine(ThirdPartyPath,"Konashi","Category"));
            PrivateIncludePaths.Add(Path.Combine(ThirdPartyPath,"Konashi","Category","CoreBluetooth"));
            PrivateIncludePaths.Add(Path.Combine(ThirdPartyPath,"Konashi","Category","Konashi"));
            PrivateIncludePaths.Add(Path.Combine(ThirdPartyPath,"Konashi","Constant"));
            PrivateIncludePaths.Add(Path.Combine(ThirdPartyPath,"Konashi","Impl"));


            PublicFrameworks.AddRange(new string[]{
                                "CoreGraphics",
                                "Foundation",
                                "CoreBluetooth",
                                "JavaScriptCore",
                                "UIKit"
            });

        }
	}

}