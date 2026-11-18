// Licensed for use with Unreal Engine products only

using UnrealBuildTool;
using System.Collections.Generic;

public class MedievalGameEditorTarget : TargetRules
{
	public MedievalGameEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V4;

		ExtraModuleNames.AddRange( new string[] { "MedievalGame" } );
	}
}
