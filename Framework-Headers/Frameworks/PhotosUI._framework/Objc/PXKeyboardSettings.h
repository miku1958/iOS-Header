//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXKeyboardSettings : PXSettings
{
    BOOL _enableTungstenKeyboardNavigation;
    BOOL _enableTungstenShiftClickSelection;
    BOOL _enableTungstenFocusEnvironmentSupport;
    BOOL _enableAssetSelectionShortcuts;
    BOOL _enableFocusRing;
    BOOL _enableShadow;
    double _animationDuration;
    double _dampingRatio;
    double _dimmingFactor;
    double _shadowYOffset;
    double _shadowBlurRadius;
    double _shadowOpacity;
    long long _yearsFocusAnimationStyle;
    double _yearsFocusPadding;
    long long _monthsFocusAnimationStyle;
    double _monthsFocusPadding;
    long long _daysFocusAnimationStyle;
    double _daysFocusPadding;
    long long _allPhotosAspectFitFocusAnimationStyle;
    double _allPhotosAspectFitFocusPadding;
    long long _allPhotosAspectFillFocusAnimationStyle;
    double _allPhotosAspectFillFocusPadding;
    double _detailsViewOverlayAlpha;
}

@property (nonatomic) long long allPhotosAspectFillFocusAnimationStyle; // @synthesize allPhotosAspectFillFocusAnimationStyle=_allPhotosAspectFillFocusAnimationStyle;
@property (nonatomic) double allPhotosAspectFillFocusPadding; // @synthesize allPhotosAspectFillFocusPadding=_allPhotosAspectFillFocusPadding;
@property (nonatomic) long long allPhotosAspectFitFocusAnimationStyle; // @synthesize allPhotosAspectFitFocusAnimationStyle=_allPhotosAspectFitFocusAnimationStyle;
@property (nonatomic) double allPhotosAspectFitFocusPadding; // @synthesize allPhotosAspectFitFocusPadding=_allPhotosAspectFitFocusPadding;
@property (nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property (nonatomic) double dampingRatio; // @synthesize dampingRatio=_dampingRatio;
@property (nonatomic) long long daysFocusAnimationStyle; // @synthesize daysFocusAnimationStyle=_daysFocusAnimationStyle;
@property (nonatomic) double daysFocusPadding; // @synthesize daysFocusPadding=_daysFocusPadding;
@property (nonatomic) double detailsViewOverlayAlpha; // @synthesize detailsViewOverlayAlpha=_detailsViewOverlayAlpha;
@property (nonatomic) double dimmingFactor; // @synthesize dimmingFactor=_dimmingFactor;
@property (nonatomic) BOOL enableAssetSelectionShortcuts; // @synthesize enableAssetSelectionShortcuts=_enableAssetSelectionShortcuts;
@property (nonatomic) BOOL enableFocusRing; // @synthesize enableFocusRing=_enableFocusRing;
@property (nonatomic) BOOL enableShadow; // @synthesize enableShadow=_enableShadow;
@property (nonatomic) BOOL enableTungstenFocusEnvironmentSupport; // @synthesize enableTungstenFocusEnvironmentSupport=_enableTungstenFocusEnvironmentSupport;
@property (nonatomic) BOOL enableTungstenKeyboardNavigation; // @synthesize enableTungstenKeyboardNavigation=_enableTungstenKeyboardNavigation;
@property (nonatomic) BOOL enableTungstenShiftClickSelection; // @synthesize enableTungstenShiftClickSelection=_enableTungstenShiftClickSelection;
@property (nonatomic) long long monthsFocusAnimationStyle; // @synthesize monthsFocusAnimationStyle=_monthsFocusAnimationStyle;
@property (nonatomic) double monthsFocusPadding; // @synthesize monthsFocusPadding=_monthsFocusPadding;
@property (nonatomic) double shadowBlurRadius; // @synthesize shadowBlurRadius=_shadowBlurRadius;
@property (nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property (nonatomic) double shadowYOffset; // @synthesize shadowYOffset=_shadowYOffset;
@property (nonatomic) long long yearsFocusAnimationStyle; // @synthesize yearsFocusAnimationStyle=_yearsFocusAnimationStyle;
@property (nonatomic) double yearsFocusPadding; // @synthesize yearsFocusPadding=_yearsFocusPadding;

+ (id)_makeAnimationStyleChoiceRowWithTitle:(id)arg1 valueKeyPath:(id)arg2;
+ (id)_makeGlobalFocusAnimationSection;
+ (id)_makeLocalFocusAnimationSection;
+ (id)settingsControllerModule;
+ (id)sharedInstance;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (id)archiveValueForKey:(id)arg1;
- (id)globalFocusAnimationShadow;
- (id)parentSettings;
- (void)setDefaultValues;

@end

