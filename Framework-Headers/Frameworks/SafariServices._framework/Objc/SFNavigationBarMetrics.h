//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIFont, UIImageSymbolConfiguration, UITraitCollection;

__attribute__((visibility("hidden")))
@interface SFNavigationBarMetrics : NSObject
{
    UITraitCollection *_traitCollectionForFontMetrics;
    double _minimumBarHeight;
    UIFont *_defaultLabelFont;
    UIFont *_defaultBoldFont;
    UIFont *_narrowEditingLabelFont;
    BOOL _narrowEditingScaleFactorNeedsUpdate;
    double _narrowEditingScaleFactor;
    double _safariBarHeight;
    double _safariViewControllerBarHeight;
    double _safariSquishHeightQuantizationOffset;
    double _safariViewControllerSquishHeightQuantizationOffset;
    double _statusBarHeight;
    UIImageSymbolConfiguration *_accessoryImageSymbolConfiguration;
    UIImageSymbolConfiguration *_squishedAccessoryImageSymbolConfiguration;
    double _accessibilityImageScale;
    double _urlOutlineCornerRadius;
    double _defaultBarHeight;
    double _urlContainerTop;
    double _urlOutlineHeight;
    double _urlLabelVerticalOffset;
    double _urlLabelAccessoryItemSquishedVerticalOffset;
    double _urlLabelAccessoryLockItemVerticalOffset;
    double _distanceFromLabelBaselineToURLOutlineBottom;
}

@property (readonly, nonatomic) double accessibilityImageScale; // @synthesize accessibilityImageScale=_accessibilityImageScale;
@property (readonly, nonatomic) UIImageSymbolConfiguration *accessoryImageSymbolConfiguration;
@property (readonly, nonatomic) double defaultBarHeight; // @synthesize defaultBarHeight=_defaultBarHeight;
@property (readonly, nonatomic) UIFont *defaultBoldFont;
@property (readonly, nonatomic) UIFont *defaultLabelFont;
@property (readonly, nonatomic) double distanceFromLabelBaselineToURLOutlineBottom; // @synthesize distanceFromLabelBaselineToURLOutlineBottom=_distanceFromLabelBaselineToURLOutlineBottom;
@property (readonly, nonatomic) double minimumBarHeight; // @synthesize minimumBarHeight=_minimumBarHeight;
@property (readonly, nonatomic) UIFont *narrowEditingLabelFont;
@property (readonly, nonatomic) double narrowEditingScaleFactor;
@property (readonly, nonatomic) UIImageSymbolConfiguration *squishedAccessoryImageSymbolConfiguration;
@property (readonly, nonatomic) double urlContainerTop; // @synthesize urlContainerTop=_urlContainerTop;
@property (readonly, nonatomic) double urlLabelAccessoryItemSquishedVerticalOffset; // @synthesize urlLabelAccessoryItemSquishedVerticalOffset=_urlLabelAccessoryItemSquishedVerticalOffset;
@property (readonly, nonatomic) double urlLabelAccessoryLockItemVerticalOffset; // @synthesize urlLabelAccessoryLockItemVerticalOffset=_urlLabelAccessoryLockItemVerticalOffset;
@property (readonly, nonatomic) double urlLabelVerticalOffset; // @synthesize urlLabelVerticalOffset=_urlLabelVerticalOffset;
@property (readonly, nonatomic) double urlOutlineCornerRadius; // @synthesize urlOutlineCornerRadius=_urlOutlineCornerRadius;
@property (readonly, nonatomic) double urlOutlineHeight; // @synthesize urlOutlineHeight=_urlOutlineHeight;

- (void).cxx_destruct;
- (id)_contentSizeCategoryWithPreferredCategory:(id)arg1;
- (void)_updateMetrics;
- (double)barHeightWithBarMetricsCategory:(long long)arg1;
- (id)init;
- (double)squishHeightQuantizationOffsetWithBarMetricsCategory:(long long)arg1;
- (BOOL)updateForContentSizeCategory:(id)arg1;
- (BOOL)updateForStatusBarHeight:(double)arg1;

@end
