//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSItemProviderReading-Protocol.h>
#import <UIKitCore/NSItemProviderWriting-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/UIItemProviderReading-Protocol.h>
#import <UIKitCore/UIItemProviderWriting-Protocol.h>

@class CIColor, NSArray, NSString;

@interface UIColor : NSObject <NSItemProviderReading, NSItemProviderWriting, UIItemProviderReading, UIItemProviderWriting, NSSecureCoding, NSCopying>
{
    NSString *_systemColorName;
    NSString *_cachedStyleString;
}

@property (readonly, nonatomic) struct CGColor *CGColor;
@property (readonly, nonatomic) CIColor *CIColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_isDynamic) BOOL dynamic;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (strong, nonatomic, getter=_systemColorName, setter=_setSystemColorName:) NSString *systemColorName;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)__darkSystemColorForColor:(id)arg1;
+ (id)__halfTransparentBlackColor;
+ (id)__halfTransparentWhiteColor;
+ (id)_accessibilityButtonShapesBackgroundColorOnDark;
+ (id)_accessibilityButtonShapesBackgroundColorOnLight;
+ (id)_accessibilityButtonShapesDisabledBackgroundColorOnDark;
+ (id)_accessibilityButtonShapesNoBlendModeBackgroundColorOnDark;
+ (id)_accessibilityButtonShapesNoBlendModeBackgroundColorOnLight;
+ (id)_accessibilityDarkenedColorForColor:(id)arg1;
+ (id)_accessibilityLightenedColorForColor:(id)arg1;
+ (id)_alertControllerDimmingViewColor;
+ (id)_alternateSystemInteractionTintColor;
+ (id)_apiColorNames;
+ (id)_barHairlineShadowColor;
+ (id)_barStyleBlackHairlineShadowColor;
+ (id)_carSystemFocusColor;
+ (id)_carSystemFocusLabelColor;
+ (id)_carSystemFocusPrimaryColor;
+ (id)_carSystemFocusSecondaryColor;
+ (id)_carSystemPrimaryColor;
+ (id)_carSystemQuaternaryColor;
+ (id)_carSystemSecondaryColor;
+ (id)_carSystemTertiaryColor;
+ (id)_composedColorFromSourceColor:(id)arg1 destinationColor:(id)arg2 tintColor:(id)arg3 alpha:(double)arg4;
+ (id)_contentBackgroundColor;
+ (id)_controlForegroundColor;
+ (id)_controlHighlightColor;
+ (id)_controlShadowColor;
+ (id)_controlVibrantBottomBackgroundColor;
+ (id)_controlVibrantTopBackgroundColor;
+ (id)_dimmingViewColor;
+ (id)_disabledColorForColor:(id)arg1;
+ (id)_disambiguated_due_to_CIImage_colorWithCGColor:(struct CGColor *)arg1;
+ (id)_disambiguated_due_to_CIImage_colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)_dynamicCatalogColorForNibEncodingWithName:(id)arg1 genericColor:(id)arg2;
+ (id)_dynamicColorWithColorsByTraitCollection:(id)arg1;
+ (id)_dynamicTestColor;
+ (id)_externalBarBackgroundColor;
+ (id)_externalSystemDarkGrayColor;
+ (id)_externalSystemExtraDarkGrayColor;
+ (id)_externalSystemGrayColor;
+ (id)_externalSystemMidGrayColor;
+ (id)_externalSystemSuperDarkGrayColor;
+ (id)_externalSystemWhiteColor;
+ (id)_fillColor;
+ (id)_focusedCarSystemColor:(id)arg1;
+ (id)_grayColorForFontSize:(double)arg1;
+ (id)_groupTableHeaderFooterTextColor;
+ (id)_labelColor;
+ (id)_linkColor;
+ (double)_luminanceWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
+ (id)_markedTextBackgroundColor;
+ (id)_opaqueSeparatorColor;
+ (id)_placeholderTextColor;
+ (id)_plainTableHeaderFooterTextColor;
+ (id)_quaternaryFillColor;
+ (id)_quaternaryLabelColor;
+ (id)_searchBarBackgroundColor;
+ (id)_searchFieldDisabledBackgroundColor;
+ (id)_searchFieldPlaceholderTextClearButtonColor;
+ (id)_secondaryFillColor;
+ (id)_secondaryLabelColor;
+ (id)_secondarySystemBackgroundColor;
+ (id)_secondarySystemGroupedBackgroundColor;
+ (id)_separatorColor;
+ (id)_splitViewBorderColor;
+ (id)_systemBackgroundColor;
+ (id)_systemBackgroundSectionCellColor;
+ (id)_systemBackgroundSectionColor;
+ (id)_systemBlueColor2;
+ (id)_systemChromeShadowColor;
+ (id)_systemColorForColor:(id)arg1 withName:(id)arg2;
+ (id)_systemColorWithName:(id)arg1;
+ (id)_systemColorWithUnvalidatedName:(id)arg1;
+ (id)_systemDestructiveTintColor;
+ (id)_systemGray2Color;
+ (id)_systemGray3Color;
+ (id)_systemGray4Color;
+ (id)_systemGray5Color;
+ (id)_systemGray6Color;
+ (id)_systemGroupBackgroundCellColor;
+ (id)_systemGroupBackgroundColor;
+ (id)_systemGroupedBackgroundColor;
+ (id)_systemInteractionTintColor;
+ (id)_systemMidGrayTintColor;
+ (id)_systemSelectedColor;
+ (id)_tertiaryFillColor;
+ (id)_tertiaryLabelColor;
+ (id)_tertiarySystemBackgroundColor;
+ (id)_tertiarySystemGroupedBackgroundColor;
+ (id)_textFieldBackgroundColor;
+ (id)_textFieldBorderColor;
+ (id)_textFieldDisabledBackgroundColor;
+ (id)_textFieldDisabledBorderColor;
+ (id)_translucentPaperTextureColor;
+ (id)_unfocusedCarSystemColor:(id)arg1;
+ (id)_vibrantDarkFillDodgeColor;
+ (id)_vibrantLightDividerBurnColor;
+ (id)_vibrantLightDividerDarkeningColor;
+ (id)_vibrantLightFillBurnColor;
+ (id)_vibrantLightFillDarkeningColor;
+ (id)_vibrantLightSectionDelimiterDividerBurnColor;
+ (id)_vibrantLightSectionDelimiterDividerDarkeningColor;
+ (id)_webContentBackgroundColor;
+ (id)_windowBackgroundColor;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)blackColor;
+ (id)blueColor;
+ (id)brownColor;
+ (id)classFallbacksForKeyedArchiver;
+ (id)clearColor;
+ (id)colorNamed:(id)arg1;
+ (id)colorNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3;
+ (id)colorWithCGColor:(struct CGColor *)arg1;
+ (id)colorWithCIColor:(id)arg1;
+ (id)colorWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithDynamicProvider:(CDUnknownBlockType)arg1;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)colorWithPatternImage:(id)arg1;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)cyanColor;
+ (id)darkGrayColor;
+ (id)darkTextColor;
+ (id)externalSystemGreenColor;
+ (id)externalSystemRedColor;
+ (id)externalSystemTealColor;
+ (id)grayColor;
+ (id)greenColor;
+ (id)groupTableViewBackgroundColor;
+ (id)infoTextOverPinStripeTextColor;
+ (void)initialize;
+ (id)insertionPointColor;
+ (id)keyboardFocusIndicatorColor;
+ (id)labelColor;
+ (id)lightGrayColor;
+ (id)lightTextColor;
+ (id)linkColor;
+ (id)magentaColor;
+ (id)noContentDarkGradientBackgroundColor;
+ (id)noContentLightGradientBackgroundColor;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)opaqueSeparatorColor;
+ (id)orangeColor;
+ (id)pinStripeColor;
+ (id)placeholderTextColor;
+ (id)purpleColor;
+ (id)quaternaryLabelColor;
+ (id)quaternarySystemFillColor;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)redColor;
+ (id)scrollViewTexturedBackgroundColor;
+ (id)secondaryLabelColor;
+ (id)secondarySystemBackgroundColor;
+ (id)secondarySystemFillColor;
+ (id)secondarySystemGroupedBackgroundColor;
+ (id)sectionHeaderBackgroundColor;
+ (id)sectionHeaderBorderColor;
+ (id)sectionHeaderOpaqueBackgroundColor;
+ (id)sectionListBorderColor;
+ (id)selectionGrabberColor;
+ (id)selectionHighlightColor;
+ (id)separatorColor;
+ (BOOL)supportsSecureCoding;
+ (id)systemBackgroundColor;
+ (id)systemBlackColor;
+ (id)systemBlueColor;
+ (id)systemBrownColor;
+ (id)systemDarkBlueColor;
+ (id)systemDarkExtraLightGrayColor;
+ (id)systemDarkExtraLightGrayTintColor;
+ (id)systemDarkGrayColor;
+ (id)systemDarkGrayTintColor;
+ (id)systemDarkGreenColor;
+ (id)systemDarkLightGrayColor;
+ (id)systemDarkLightGrayTintColor;
+ (id)systemDarkLightMidGrayColor;
+ (id)systemDarkLightMidGrayTintColor;
+ (id)systemDarkMidGrayColor;
+ (id)systemDarkMidGrayTintColor;
+ (id)systemDarkOrangeColor;
+ (id)systemDarkPinkColor;
+ (id)systemDarkPurpleColor;
+ (id)systemDarkRedColor;
+ (id)systemDarkTealColor;
+ (id)systemDarkYellowColor;
+ (id)systemExtraLightGrayColor;
+ (id)systemExtraLightGrayTintColor;
+ (id)systemFillColor;
+ (id)systemGray2Color;
+ (id)systemGray3Color;
+ (id)systemGray4Color;
+ (id)systemGray5Color;
+ (id)systemGray6Color;
+ (id)systemGrayColor;
+ (id)systemGrayTintColor;
+ (id)systemGreenColor;
+ (id)systemGroupedBackgroundColor;
+ (id)systemIndigoColor;
+ (id)systemLightGrayColor;
+ (id)systemLightGrayTintColor;
+ (id)systemLightMidGrayColor;
+ (id)systemLightMidGrayTintColor;
+ (id)systemMidGrayColor;
+ (id)systemMidGrayTintColor;
+ (id)systemOrangeColor;
+ (id)systemPinkColor;
+ (id)systemPurpleColor;
+ (id)systemRedColor;
+ (id)systemTealColor;
+ (id)systemWhiteColor;
+ (id)systemYellowColor;
+ (id)tableBackgroundColor;
+ (id)tableCellBackgroundColor;
+ (id)tableCellBlueTextColor;
+ (id)tableCellDefaultSelectionTintColor;
+ (id)tableCellGrayTextColor;
+ (id)tableCellGroupedBackgroundColor;
+ (id)tableCellGroupedBackgroundColorLegacyWhite;
+ (id)tableCellPlainBackgroundColor;
+ (id)tableCellValue1BlueColor;
+ (id)tableCellValue2BlueColor;
+ (id)tableCellbackgroundColorCarPlay;
+ (id)tableGroupedSeparatorLightColor;
+ (id)tableGroupedTopShadowColor;
+ (id)tablePlainHeaderFooterBackgroundColor;
+ (id)tablePlainHeaderFooterFloatingBackgroundColor;
+ (id)tableSelectionColor;
+ (id)tableSelectionGradientEndColor;
+ (id)tableSelectionGradientStartColor;
+ (id)tableSeparatorColor;
+ (id)tableSeparatorDarkColor;
+ (id)tableSeparatorLightColor;
+ (id)tableShadowColor;
+ (id)tertiaryLabelColor;
+ (id)tertiarySystemBackgroundColor;
+ (id)tertiarySystemFillColor;
+ (id)tertiarySystemGroupedBackgroundColor;
+ (id)textFieldAtomBlueColor;
+ (id)textFieldAtomPurpleColor;
+ (id)underPageBackgroundColor;
+ (id)viewFlipsideBackgroundColor;
+ (id)whiteColor;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)yellowColor;
- (void).cxx_destruct;
- (id)_backgroundColorIgnoringHighContrast;
- (id)_colorBlendedWithColor:(id)arg1;
- (id)_colorBlendedWithColor:(id)arg1 compositingFilter:(id)arg2;
- (id)_colorBlendedWithColors:(id)arg1;
- (double)_colorDifferenceFromColor:(id)arg1;
- (id)_debugCatalogBundleIdentifier;
- (id)_debugName;
- (BOOL)_getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (BOOL)_getWhite:(double *)arg1 alpha:(double *)arg2;
- (BOOL)_isDeepColor;
- (BOOL)_isSimilarToColor:(id)arg1 withinPercentage:(double)arg2;
- (double)_luminance;
- (double)_luminanceDifferenceFromColor:(id)arg1;
- (void)_setDebugCatalogBundleIdentifier:(id)arg1;
- (void)_setDebugName:(id)arg1;
- (id)_ui_swipeActionHighlightedColor;
- (double)alphaComponent;
- (struct CGColor *)cgColor;
- (Class)classForCoder;
- (id)colorSpaceName;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;
- (BOOL)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (BOOL)getWhite:(double *)arg1 alpha:(double *)arg2;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (id)initWithCIColor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithDynamicProvider:(CDUnknownBlockType)arg1;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
- (id)initWithPatternImage:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPatternColor;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (id)resolvedColorWithTraitCollection:(id)arg1;
- (void)set;
- (void)setFill;
- (void)setStroke;
- (id)styleString;

@end

