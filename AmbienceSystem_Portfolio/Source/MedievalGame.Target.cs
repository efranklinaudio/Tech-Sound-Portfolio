// Licensed for use with Unreal Engine products only

using UnrealBuildTool;
using System.Collections.Generic;

public class MedievalGameTarget : TargetRules
{
	public MedievalGameTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V4;

		ExtraModuleNames.AddRange( new string[] { "MedievalGame" } );
	}
}
