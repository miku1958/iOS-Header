//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSExtension, NSPointerArray, NSString, UIImage;

@interface WGWidgetInfo : NSObject
{
    NSPointerArray *_registeredWidgetHosts;
    struct {
        unsigned int didInitializeWantsVisibleFrame:1;
    } _widgetInfoFlags;
    BOOL _wantsVisibleFrame;
    NSString *_sdkVersion;
    NSExtension *_extension;
    long long _initialDisplayMode;
    long long _largestAllowedDisplayMode;
    NSString *_displayName;
    UIImage *_icon;
    UIImage *_outlineIcon;
    struct CGSize _preferredContentSize;
}

@property (copy, nonatomic, setter=_setDisplayName:) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property (strong, nonatomic, setter=_setIcon:) UIImage *icon; // @synthesize icon=_icon;
@property (readonly, nonatomic) long long initialDisplayMode; // @synthesize initialDisplayMode=_initialDisplayMode;
@property (readonly, nonatomic) double initialHeight;
@property (nonatomic, setter=_setLargestAllowedDisplayMode:) long long largestAllowedDisplayMode; // @synthesize largestAllowedDisplayMode=_largestAllowedDisplayMode;
@property (strong, nonatomic, setter=_setOutlineIcon:) UIImage *outlineIcon; // @synthesize outlineIcon=_outlineIcon;
@property (nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
@property (readonly, copy, nonatomic, getter=_sdkVersion) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property (readonly, nonatomic) UIImage *settingsIcon;
@property (nonatomic, setter=_setWantsVisibleFrame:) BOOL wantsVisibleFrame; // @synthesize wantsVisibleFrame=_wantsVisibleFrame;
@property (readonly, copy, nonatomic) NSString *widgetIdentifier;

+ (id)_productVersion;
+ (void)_updateRowHeightForContentSizeCategory;
+ (double)maximumContentHeightForCompactDisplayMode;
+ (id)widgetInfoWithExtension:(id)arg1;
- (void).cxx_destruct;
- (id)_iconFromWidgetBundle;
- (id)_iconWithFormat:(int)arg1;
- (id)_iconWithOutline;
- (int)_outlineVariantForScale:(double)arg1;
- (void)_resetIcons;
- (id)initWithExtension:(id)arg1;
- (BOOL)isLinkedOnOrAfterSystemVersion:(id)arg1;
- (void)registerWidgetHost:(id)arg1;
- (void)updatePreferredContentSize:(struct CGSize)arg1 forWidgetHost:(id)arg2;
- (id)widgetInfoWithExtension:(id)arg1;

@end

