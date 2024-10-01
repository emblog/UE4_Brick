#pragma once

UENUM(BlueprintType)
enum class BaseMyEnum1 : uint8
{
    E_A UMETA(DisplayName = "A", ToolTip = "This is example A"),  // DisplayName, ToolTip 사용
    E_B UMETA(DisplayName = "C"),  // DisplayName만 사용
    E_C UMETA(DisplayName = "C"),  // DisplayName만 사용

	Max UMETA(Hidden), // 숨김 처리
};

UENUM(BlueprintType)
enum class BaseMyEnum2 : uint8
{
    E_A UMETA(DisplayName = "Option A", ToolTip = "Option A tooltip"),  // DisplayName, ToolTip 사용
    E_B UMETA(Deprecated, DeprecationMessage = "Option B is deprecated"),  // Deprecation 표시 및 메시지
    E_C UMETA(DisplayName = "Option C", ToolTip = "Option C tooltip")  // DisplayName, ToolTip 사용
};

UENUM(BlueprintType)
enum class BaseMyEnum3 : uint8
{
    E_A UMETA(DisplayName = "First Option", ToolTip = "This is the first option"),  // DisplayName, ToolTip 사용
    E_B UMETA(DisplayName = "Second Option", ToolTip = "This option is hidden", Hidden),  // Hidden과 ToolTip 같이 사용
    E_C UMETA(DisplayName = "Final Option", ToolTip = "This is the final option"),  // DisplayName, ToolTip 사용
    E_Max UMETA(DisplayName = "Max Value")  // DisplayName만 사용
};
